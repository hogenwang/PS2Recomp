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

// Function: sub_001ED7B0
// Address: 0x1ed7b0 - 0x1ed848
void sub_001ED7B0_0x1ed7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED7B0_0x1ed7b0");
#endif

    switch (ctx->pc) {
        case 0x1ed7e0u: goto label_1ed7e0;
        case 0x1ed7f0u: goto label_1ed7f0;
        case 0x1ed828u: goto label_1ed828;
        default: break;
    }

    ctx->pc = 0x1ed7b0u;

    // 0x1ed7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ed7b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ed7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ed7b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ed7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed7bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ed7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ed7c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ed7c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed7c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ed7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ed7c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ed7c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed7cc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED7CCu;
    {
        const bool branch_taken_0x1ed7cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7CCu;
        // 0x1ed7d0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7cc) {
            ctx->pc = 0x1ED7E8u;
            goto label_1ed7e8;
        }
    }
    ctx->pc = 0x1ED7D4u;
    // 0x1ed7d4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1ed7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1ed7d8: 0xc07b612  jal         func_1ED848
    ctx->pc = 0x1ED7D8u;
    SET_GPR_U32(ctx, 31, 0x1ED7E0u);
    ctx->pc = 0x1ED7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED7D8u;
    // 0x1ed7dc: 0x248416dc  addiu       $a0, $a0, 0x16DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5852));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED848u, 0x1ED7D8u, 0x1ED7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED7E0u;
label_1ed7e0:
    // 0x1ed7e0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1ED7E0u;
    {
        const bool branch_taken_0x1ed7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7E0u;
        // 0x1ed7e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7e0) {
            ctx->pc = 0x1ED82Cu;
            goto label_1ed82c;
        }
    }
    ctx->pc = 0x1ED7E8u;
label_1ed7e8:
    // 0x1ed7e8: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1ED7E8u;
    SET_GPR_U32(ctx, 31, 0x1ED7F0u);
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1ED7E8u, 0x1ED7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED7F0u;
label_1ed7f0:
    // 0x1ed7f0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ed7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ed7f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED7F4u;
    {
        const bool branch_taken_0x1ed7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7F4u;
        // 0x1ed7f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7f4) {
            ctx->pc = 0x1ED818u;
            goto label_1ed818;
        }
    }
    ctx->pc = 0x1ED7FCu;
    // 0x1ed7fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed7fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed800: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x1ed800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
    // 0x1ed804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ed804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ed808: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ed808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed80c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ed80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ed810: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1ED810u;
    ctx->pc = 0x1ED814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED810u;
    // 0x1ed814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1ED818u;
label_1ed818:
    // 0x1ed818: 0x260409f8  addiu       $a0, $s0, 0x9F8
    ctx->pc = 0x1ed818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2552));
    // 0x1ed81c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ed81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed820: 0xc07b612  jal         func_1ED848
    ctx->pc = 0x1ED820u;
    SET_GPR_U32(ctx, 31, 0x1ED828u);
    ctx->pc = 0x1ED824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED820u;
    // 0x1ed824: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED848u, 0x1ED820u, 0x1ED828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED828u;
label_1ed828:
    // 0x1ed828: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed82c:
    // 0x1ed82c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ed82cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed830: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ed830u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ed834: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ed834u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed838: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ed838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ed83c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED83Cu;
        // 0x1ed840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED844u;
    // 0x1ed844: 0x0  nop
    ctx->pc = 0x1ed844u;
    // NOP
}
