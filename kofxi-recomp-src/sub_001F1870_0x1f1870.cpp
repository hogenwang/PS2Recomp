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

// Function: sub_001F1870
// Address: 0x1f1870 - 0x1f1908
void sub_001F1870_0x1f1870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1870_0x1f1870");
#endif

    ctx->pc = 0x1f1870u;

    // 0x1f1870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f1874: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1f1874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1878: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1f1878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1f187c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f187cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f1880: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F1880u;
    {
        const bool branch_taken_0x1f1880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1880u;
        // 0x1f1884: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1880) {
            ctx->pc = 0x1F18B8u;
            goto label_1f18b8;
        }
    }
    ctx->pc = 0x1F1888u;
    // 0x1f1888: 0x2862ffff  slti        $v0, $v1, -0x1
    ctx->pc = 0x1f1888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1f188c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F188Cu;
    {
        const bool branch_taken_0x1f188c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F188Cu;
        // 0x1f1890: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f188c) {
            ctx->pc = 0x1F18A8u;
            goto label_1f18a8;
        }
    }
    ctx->pc = 0x1F1894u;
    // 0x1f1894: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F1894u;
    {
        const bool branch_taken_0x1f1894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1894u;
        // 0x1f1898: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1894) {
            ctx->pc = 0x1F18D0u;
            goto label_1f18d0;
        }
    }
    ctx->pc = 0x1F189Cu;
    // 0x1f189c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F189Cu;
    {
        const bool branch_taken_0x1f189c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F189Cu;
        // 0x1f18a0: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f189c) {
            ctx->pc = 0x1F18ECu;
            goto label_1f18ec;
        }
    }
    ctx->pc = 0x1F18A4u;
    // 0x1f18a4: 0x0  nop
    ctx->pc = 0x1f18a4u;
    // NOP
label_1f18a8:
    // 0x1f18a8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F18A8u;
    {
        const bool branch_taken_0x1f18a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F18ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18A8u;
        // 0x1f18ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f18a8) {
            ctx->pc = 0x1F18E8u;
            goto label_1f18e8;
        }
    }
    ctx->pc = 0x1F18B0u;
    // 0x1f18b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F18B0u;
    {
        const bool branch_taken_0x1f18b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18B0u;
        // 0x1f18b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f18b0) {
            ctx->pc = 0x1F18FCu;
            goto label_1f18fc;
        }
    }
    ctx->pc = 0x1F18B8u;
label_1f18b8:
    // 0x1f18b8: 0x1cc0000f  bgtz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x1F18B8u;
    {
        const bool branch_taken_0x1f18b8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1F18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18B8u;
        // 0x1f18bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f18b8) {
            ctx->pc = 0x1F18F8u;
            goto label_1f18f8;
        }
    }
    ctx->pc = 0x1F18C0u;
    // 0x1f18c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f18c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f18c4: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F18C4u;
    ctx->pc = 0x1F18C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F18C4u;
    // 0x1f18c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F18CCu;
    // 0x1f18cc: 0x0  nop
    ctx->pc = 0x1f18ccu;
    // NOP
label_1f18d0:
    // 0x1f18d0: 0x1cc00009  bgtz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F18D0u;
    {
        const bool branch_taken_0x1f18d0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1F18D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18D0u;
        // 0x1f18d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f18d0) {
            ctx->pc = 0x1F18F8u;
            goto label_1f18f8;
        }
    }
    ctx->pc = 0x1F18D8u;
    // 0x1f18d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f18d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f18dc: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F18DCu;
    ctx->pc = 0x1F18E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F18DCu;
    // 0x1f18e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F18E4u;
    // 0x1f18e4: 0x0  nop
    ctx->pc = 0x1f18e4u;
    // NOP
label_1f18e8:
    // 0x1f18e8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f18e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f18ec:
    // 0x1f18ec: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1f18ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f18f0: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F18F0u;
    ctx->pc = 0x1F18F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F18F0u;
    // 0x1f18f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F18F8u;
label_1f18f8:
    // 0x1f18f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f18f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f18fc:
    // 0x1f18fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F18FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18FCu;
        // 0x1f1900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F18FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1904u;
    // 0x1f1904: 0x0  nop
    ctx->pc = 0x1f1904u;
    // NOP
}
