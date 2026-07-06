#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C410
// Address: 0x17c410 - 0x17c4c0
void sub_0017C410_0x17c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C410_0x17c410");
#endif

    switch (ctx->pc) {
        case 0x17c480u: goto label_17c480;
        default: break;
    }

    ctx->pc = 0x17c410u;

    // 0x17c410: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x17c410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x17c414: 0x90469780  lbu         $a2, -0x6880($v0)
    ctx->pc = 0x17c414u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x17c418: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x17c418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x17c41c: 0x50c20026  beql        $a2, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x17C41Cu;
    {
        const bool branch_taken_0x17c41c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c41c) {
            ctx->pc = 0x17C420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C41Cu;
            // 0x17c420: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C4B8u;
            goto label_17c4b8;
        }
    }
    ctx->pc = 0x17C424u;
    // 0x17c424: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x17c424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17c428: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17C428u;
    {
        const bool branch_taken_0x17c428 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c428) {
            ctx->pc = 0x17C45Cu;
            goto label_17c45c;
        }
    }
    ctx->pc = 0x17C430u;
    // 0x17c430: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x17c430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17c434: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17C434u;
    {
        const bool branch_taken_0x17c434 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c434) {
            ctx->pc = 0x17C45Cu;
            goto label_17c45c;
        }
    }
    ctx->pc = 0x17C43Cu;
    // 0x17c43c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17c440: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C440u;
    {
        const bool branch_taken_0x17c440 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c440) {
            ctx->pc = 0x17C45Cu;
            goto label_17c45c;
        }
    }
    ctx->pc = 0x17C448u;
    // 0x17c448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c44c: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C44Cu;
    {
        const bool branch_taken_0x17c44c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c44c) {
            ctx->pc = 0x17C45Cu;
            goto label_17c45c;
        }
    }
    ctx->pc = 0x17C454u;
    // 0x17c454: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17C454u;
    {
        const bool branch_taken_0x17c454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C454u;
            // 0x17c458: 0x3085ffff  andi        $a1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c454) {
            ctx->pc = 0x17C468u;
            goto label_17c468;
        }
    }
    ctx->pc = 0x17C45Cu;
label_17c45c:
    // 0x17c45c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x17c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17c460: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x17C460u;
    {
        const bool branch_taken_0x17c460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c460) {
            ctx->pc = 0x17C4B8u;
            goto label_17c4b8;
        }
    }
    ctx->pc = 0x17C468u;
label_17c468:
    // 0x17c468: 0x3c080093  lui         $t0, 0x93
    ctx->pc = 0x17c468u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)147 << 16));
    // 0x17c46c: 0x3c070093  lui         $a3, 0x93
    ctx->pc = 0x17c46cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)147 << 16));
    // 0x17c470: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17c470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c474: 0x2508ec50  addiu       $t0, $t0, -0x13B0
    ctx->pc = 0x17c474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962256));
    // 0x17c478: 0x24e7ecd0  addiu       $a3, $a3, -0x1330
    ctx->pc = 0x17c478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962384));
    // 0x17c47c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x17c47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_17c480:
    // 0x17c480: 0x54c40002  bnel        $a2, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17C480u;
    {
        const bool branch_taken_0x17c480 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x17c480) {
            ctx->pc = 0x17C484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C480u;
            // 0x17c484: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C48Cu;
            goto label_17c48c;
        }
    }
    ctx->pc = 0x17C488u;
    // 0x17c488: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x17c488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_17c48c:
    // 0x17c48c: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x17c48cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x17c490: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x17c490u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17c494: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C494u;
    {
        const bool branch_taken_0x17c494 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c494) {
            ctx->pc = 0x17C498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C494u;
            // 0x17c498: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C4A4u;
            goto label_17c4a4;
        }
    }
    ctx->pc = 0x17C49Cu;
    // 0x17c49c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17C49Cu;
    {
        const bool branch_taken_0x17c49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c49c) {
            ctx->pc = 0x17C4B8u;
            goto label_17c4b8;
        }
    }
    ctx->pc = 0x17C4A4u;
label_17c4a4:
    // 0x17c4a4: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x17c4a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x17c4a8: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x17c4a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x17c4ac: 0x1420fff4  bnez        $at, . + 4 + (-0xC << 2)
    ctx->pc = 0x17C4ACu;
    {
        const bool branch_taken_0x17c4ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C4ACu;
            // 0x17c4b0: 0x24e7000c  addiu       $a3, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4ac) {
            ctx->pc = 0x17C480u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c480;
        }
    }
    ctx->pc = 0x17C4B4u;
    // 0x17c4b4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x17c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_17c4b8:
    // 0x17c4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x17C4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C4C0u;
    ctx->pc = 0x17c4c0u;
}
