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

// Function: sub_001E5F00
// Address: 0x1e5f00 - 0x1e6048
void sub_001E5F00_0x1e5f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5F00_0x1e5f00");
#endif

    switch (ctx->pc) {
        case 0x1e5f38u: goto label_1e5f38;
        case 0x1e5fbcu: goto label_1e5fbc;
        case 0x1e5fd4u: goto label_1e5fd4;
        default: break;
    }

    ctx->pc = 0x1e5f00u;

    // 0x1e5f00: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x1e5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x1e5f04: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1e5f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1e5f08: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x1e5f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1e5f0c: 0x3442952c  ori         $v0, $v0, 0x952C
    ctx->pc = 0x1e5f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38188);
    // 0x1e5f10: 0x34633c68  ori         $v1, $v1, 0x3C68
    ctx->pc = 0x1e5f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15464);
    // 0x1e5f14: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e5f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e5f18: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1e5f18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1e5f1c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1e5f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x1e5f20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e5f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5f24: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e5f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e5f28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F2Cu;
        // 0x1e5f30: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5F34u;
    // 0x1e5f34: 0x0  nop
    ctx->pc = 0x1e5f34u;
    // NOP
label_1e5f38:
    // 0x1e5f38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e5f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e5f3c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e5f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5f44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e5f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5f4c: 0x80797dc  j           func_1E5F70
    ctx->pc = 0x1E5F4Cu;
    ctx->pc = 0x1E5F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5F4Cu;
    // 0x1e5f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5F70u;
    goto label_1e5f70;
    ctx->pc = 0x1E5F54u;
    // 0x1e5f54: 0x0  nop
    ctx->pc = 0x1e5f54u;
    // NOP
    // 0x1e5f58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e5f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e5f5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5f64: 0x80797ce  j           func_1E5F38
    ctx->pc = 0x1E5F64u;
    ctx->pc = 0x1E5F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5F64u;
    // 0x1e5f68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5F38u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1e5f38;
    ctx->pc = 0x1E5F6Cu;
    // 0x1e5f6c: 0x0  nop
    ctx->pc = 0x1e5f6cu;
    // NOP
label_1e5f70:
    // 0x1e5f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e5f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e5f74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e5f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e5f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e5f7c: 0x58140  sll         $s0, $a1, 5
    ctx->pc = 0x1e5f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1e5f80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e5f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e5f84: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e5f84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e5f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e5f8c: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x1e5f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1e5f90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e5f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e5f94: 0x26100488  addiu       $s0, $s0, 0x488
    ctx->pc = 0x1e5f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1160));
    // 0x1e5f98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e5f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e5f9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e5f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5fa0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e5fa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5fa4: 0x8c91003c  lw          $s1, 0x3C($a0)
    ctx->pc = 0x1e5fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e5fa8: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1e5fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1e5fac: 0x8e120014  lw          $s2, 0x14($s0)
    ctx->pc = 0x1e5facu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e5fb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e5fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5fb4: 0xc07b6ba  jal         func_1EDAE8
    ctx->pc = 0x1E5FB4u;
    SET_GPR_U32(ctx, 31, 0x1E5FBCu);
    ctx->pc = 0x1E5FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5FB4u;
    // 0x1e5fb8: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDAE8u, 0x1E5FB4u, 0x1E5FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5FBCu;
label_1e5fbc:
    // 0x1e5fbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e5fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5fc0: 0x266500c0  addiu       $a1, $s3, 0xC0
    ctx->pc = 0x1e5fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x1e5fc4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e5fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5fc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e5fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5fcc: 0xc07b6ba  jal         func_1EDAE8
    ctx->pc = 0x1E5FCCu;
    SET_GPR_U32(ctx, 31, 0x1E5FD4u);
    ctx->pc = 0x1E5FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5FCCu;
    // 0x1e5fd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDAE8u, 0x1E5FCCu, 0x1E5FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5FD4u;
label_1e5fd4:
    // 0x1e5fd4: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x1e5fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x1e5fd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5fd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5fdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5fdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5fe0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e5fe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5fe4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e5fe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e5fe8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e5fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5fec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5FECu;
        // 0x1e5ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5FF4u;
    // 0x1e5ff4: 0x0  nop
    ctx->pc = 0x1e5ff4u;
    // NOP
    // 0x1e5ff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e5ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e5ffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e5ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6008: 0x807980a  j           func_1E6028
    ctx->pc = 0x1E6008u;
    ctx->pc = 0x1E600Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6008u;
    // 0x1e600c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6028u;
    goto label_1e6028;
    ctx->pc = 0x1E6010u;
    // 0x1e6010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e601c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e601cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6020: 0x807980e  j           func_1E6038
    ctx->pc = 0x1E6020u;
    ctx->pc = 0x1E6024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6020u;
    // 0x1e6024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6038u;
    goto label_1e6038;
    ctx->pc = 0x1E6028u;
label_1e6028:
    // 0x1e6028: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1e6028u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1e602c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e602cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e6030: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6030u;
        // 0x1e6034: 0x8c82049c  lw          $v0, 0x49C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6038u;
label_1e6038:
    // 0x1e6038: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1e6038u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1e603c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e603cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e6040: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6040u;
        // 0x1e6044: 0x8c8204a4  lw          $v0, 0x4A4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1188)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6048u;
}
