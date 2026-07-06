#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE578
// Address: 0x1be578 - 0x1be640
void sub_001BE578_0x1be578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE578_0x1be578");
#endif

    switch (ctx->pc) {
        case 0x1be5b8u: goto label_1be5b8;
        case 0x1be5e8u: goto label_1be5e8;
        case 0x1be5f4u: goto label_1be5f4;
        default: break;
    }

    ctx->pc = 0x1be578u;

    // 0x1be578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be57c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be580: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be584: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1be584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1be588: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BE588u;
    {
        const bool branch_taken_0x1be588 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE588u;
        // 0x1be58c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be588) {
            ctx->pc = 0x1BE5B0u;
            goto label_1be5b0;
        }
    }
    ctx->pc = 0x1BE590u;
    // 0x1be590: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1be590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1be594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be598: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be59c: 0x24848aa8  addiu       $a0, $a0, -0x7558
    ctx->pc = 0x1be59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937256));
    // 0x1be5a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be5a4: 0x806f838  j           func_1BE0E0
    ctx->pc = 0x1BE5A4u;
    ctx->pc = 0x1BE5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE5A4u;
    // 0x1be5a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    sub_001BE0E0_0x1be0e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1BE5ACu;
    // 0x1be5ac: 0x0  nop
    ctx->pc = 0x1be5acu;
    // NOP
label_1be5b0:
    // 0x1be5b0: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1BE5B0u;
    SET_GPR_U32(ctx, 31, 0x1BE5B8u);
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1BE5B0u, 0x1BE5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE5B8u;
label_1be5b8:
    // 0x1be5b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1be5b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be5bc: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE5BCu;
    {
        const bool branch_taken_0x1be5bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5BCu;
        // 0x1be5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5bc) {
            ctx->pc = 0x1BE5E0u;
            goto label_1be5e0;
        }
    }
    ctx->pc = 0x1BE5C4u;
    // 0x1be5c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be5c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be5c8: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1be5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1be5cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be5ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be5d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be5d4: 0xa0405790  sb          $zero, 0x5790($v0)
    ctx->pc = 0x1be5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22416), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5D8u;
        // 0x1be5dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE5E0u;
label_1be5e0:
    // 0x1be5e0: 0xc06f910  jal         func_1BE440
    ctx->pc = 0x1BE5E0u;
    SET_GPR_U32(ctx, 31, 0x1BE5E8u);
    ctx->pc = 0x1BE440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE440u, 0x1BE5E0u, 0x1BE5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE5E8u;
label_1be5e8:
    // 0x1be5e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be5ec: 0xc06f990  jal         func_1BE640
    ctx->pc = 0x1BE5ECu;
    SET_GPR_U32(ctx, 31, 0x1BE5F4u);
    ctx->pc = 0x1BE5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE5ECu;
    // 0x1be5f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE640u, 0x1BE5ECu, 0x1BE5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE5F4u;
label_1be5f4:
    // 0x1be5f4: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1be5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1be5f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be5fc: 0x24845790  addiu       $a0, $a0, 0x5790
    ctx->pc = 0x1be5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22416));
    // 0x1be600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1be600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be604: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE604u;
    {
        const bool branch_taken_0x1be604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE604u;
        // 0x1be608: 0x26260001  addiu       $a2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be604) {
            ctx->pc = 0x1BE620u;
            goto label_1be620;
        }
    }
    ctx->pc = 0x1BE60Cu;
    // 0x1be60c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be610: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be614: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be618: 0x8049c48  j           func_127120
    ctx->pc = 0x1BE618u;
    ctx->pc = 0x1BE61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE618u;
    // 0x1be61c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    sub_00127120_0x127120(rdram, ctx, runtime); return;
    ctx->pc = 0x1BE620u;
label_1be620:
    // 0x1be620: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1be620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1be624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be628: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be62c: 0x24848ad0  addiu       $a0, $a0, -0x7530
    ctx->pc = 0x1be62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937296));
    // 0x1be630: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be634: 0x806f838  j           func_1BE0E0
    ctx->pc = 0x1BE634u;
    ctx->pc = 0x1BE638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE634u;
    // 0x1be638: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    sub_001BE0E0_0x1be0e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1BE63Cu;
    // 0x1be63c: 0x0  nop
    ctx->pc = 0x1be63cu;
    // NOP
    if (ctx->pc == 0x1be63cu) { ctx->pc = 0x1be640u; }
}
