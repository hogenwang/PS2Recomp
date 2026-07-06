#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00271588
// Address: 0x271588 - 0x271620
void sub_00271588_0x271588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271588_0x271588");
#endif

    switch (ctx->pc) {
        case 0x2715acu: goto label_2715ac;
        case 0x2715ecu: goto label_2715ec;
        case 0x27160cu: goto label_27160c;
        default: break;
    }

    ctx->pc = 0x271588u;

    // 0x271588: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x271588u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x27158c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27158cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271590: 0x25eb2bc8  addiu       $t3, $t7, 0x2BC8
    ctx->pc = 0x271590u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), 11208));
    // 0x271594: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x271594u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271598: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x271598u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27159c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x27159cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2715a0: 0x24080038  addiu       $t0, $zero, 0x38
    ctx->pc = 0x2715a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2715a4: 0x24180017  addiu       $t8, $zero, 0x17
    ctx->pc = 0x2715a4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2715a8: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x2715a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_2715ac:
    // 0x2715ac: 0xdd6f0000  ld          $t7, 0x0($t3)
    ctx->pc = 0x2715acu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2715b0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x2715b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x2715b4: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x2715b4u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x2715b8: 0x6f7023  subu        $t6, $v1, $t7
    ctx->pc = 0x2715b8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x2715bc: 0x10f6823  subu        $t5, $t0, $t7
    ctx->pc = 0x2715bcu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 15)));
    // 0x2715c0: 0x1c67016  dsrlv       $t6, $a2, $t6
    ctx->pc = 0x2715c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) >> (GPR_U32(ctx, 14) & 0x3F));
    // 0x2715c4: 0x1a76816  dsrlv       $t5, $a3, $t5
    ctx->pc = 0x2715c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 13) & 0x3F));
    // 0x2715c8: 0x29ef001d  slti        $t7, $t7, 0x1D
    ctx->pc = 0x2715c8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x2715cc: 0x15e00002  bnez        $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x2715CCu;
    {
        const bool branch_taken_0x2715cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2715D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2715CCu;
            // 0x2715d0: 0x31ce0001  andi        $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715cc) {
            ctx->pc = 0x2715D8u;
            goto label_2715d8;
        }
    }
    ctx->pc = 0x2715D4u;
    // 0x2715d4: 0x31ae0001  andi        $t6, $t5, 0x1
    ctx->pc = 0x2715d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_2715d8:
    // 0x2715d8: 0x298f0018  slti        $t7, $t4, 0x18
    ctx->pc = 0x2715d8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2715dc: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x2715DCu;
    {
        const bool branch_taken_0x2715dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2715E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2715DCu;
            // 0x2715e0: 0x30c7823  subu        $t7, $t8, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715dc) {
            ctx->pc = 0x27160Cu;
            goto label_27160c;
        }
    }
    ctx->pc = 0x2715E4u;
    // 0x2715e4: 0x1ee7814  dsllv       $t7, $t6, $t7
    ctx->pc = 0x2715e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) << (GPR_U32(ctx, 15) & 0x3F));
    // 0x2715e8: 0x14f5025  or          $t2, $t2, $t7
    ctx->pc = 0x2715e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 15));
label_2715ec:
    // 0x2715ec: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2715ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2715f0: 0x298f0030  slti        $t7, $t4, 0x30
    ctx->pc = 0x2715f0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2715f4: 0x15e0ffed  bnez        $t7, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2715F4u;
    {
        const bool branch_taken_0x2715f4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2715F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2715F4u;
            // 0x2715f8: 0x256b0008  addiu       $t3, $t3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715f4) {
            ctx->pc = 0x2715ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2715ac;
        }
    }
    ctx->pc = 0x2715FCu;
    // 0x2715fc: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x2715fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x271600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271604: 0x3e00008  jr          $ra
    ctx->pc = 0x271604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271604u;
            // 0x271608: 0xfca90000  sd          $t1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27160Cu;
label_27160c:
    // 0x27160c: 0x4c7823  subu        $t7, $v0, $t4
    ctx->pc = 0x27160cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x271610: 0x1ee7814  dsllv       $t7, $t6, $t7
    ctx->pc = 0x271610u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) << (GPR_U32(ctx, 15) & 0x3F));
    // 0x271614: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x271614u;
    {
        const bool branch_taken_0x271614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271614u;
            // 0x271618: 0x12f4825  or          $t1, $t1, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271614) {
            ctx->pc = 0x2715ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2715ec;
        }
    }
    ctx->pc = 0x27161Cu;
    // 0x27161c: 0x0  nop
    ctx->pc = 0x27161cu;
    // NOP
    ctx->pc = 0x271620u;
}
