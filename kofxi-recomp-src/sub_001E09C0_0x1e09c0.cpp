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

// Function: sub_001E09C0
// Address: 0x1e09c0 - 0x1e0a90
void sub_001E09C0_0x1e09c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E09C0_0x1e09c0");
#endif

    switch (ctx->pc) {
        case 0x1e09d8u: goto label_1e09d8;
        case 0x1e09ecu: goto label_1e09ec;
        case 0x1e09f4u: goto label_1e09f4;
        case 0x1e0a7cu: goto label_1e0a7c;
        default: break;
    }

    ctx->pc = 0x1e09c0u;

    // 0x1e09c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e09c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e09c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e09c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e09c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e09c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e09cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e09ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e09d0: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E09D0u;
    SET_GPR_U32(ctx, 31, 0x1E09D8u);
    ctx->pc = 0x1E09D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E09D0u;
    // 0x1e09d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0780u, 0x1E09D0u, 0x1E09D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E09D8u;
label_1e09d8:
    // 0x1e09d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e09d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e09dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e09e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09e4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1E09E4u;
    SET_GPR_U32(ctx, 31, 0x1E09ECu);
    ctx->pc = 0x1E09E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E09E4u;
    // 0x1e09e8: 0x240628d0  addiu       $a2, $zero, 0x28D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1E09E4u, 0x1E09ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E09ECu;
label_1e09ec:
    // 0x1e09ec: 0xc079e0c  jal         func_1E7830
    ctx->pc = 0x1E09ECu;
    SET_GPR_U32(ctx, 31, 0x1E09F4u);
    ctx->pc = 0x1E09F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E09ECu;
    // 0x1e09f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7830u, 0x1E09ECu, 0x1E09F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E09F4u;
label_1e09f4:
    // 0x1e09f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e09f8: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x1e09f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x1e09fc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E09FCu;
    {
        const bool branch_taken_0x1e09fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E09FCu;
        // 0x1e0a00: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e09fc) {
            ctx->pc = 0x1E0A28u;
            goto label_1e0a28;
        }
    }
    ctx->pc = 0x1E0A04u;
    // 0x1e0a04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e0a08: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1e0a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e0a0c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1e0a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1e0a10: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1e0a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0a14: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e0a18: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1e0a18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1e0a1c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1e0a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1e0a20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0A20u;
    {
        const bool branch_taken_0x1e0a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A20u;
        // 0x1e0a24: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a20) {
            ctx->pc = 0x1E0A44u;
            goto label_1e0a44;
        }
    }
    ctx->pc = 0x1E0A28u;
label_1e0a28:
    // 0x1e0a28: 0x3c01426f  lui         $at, 0x426F
    ctx->pc = 0x1e0a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17007 << 16));
    // 0x1e0a2c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1e0a2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1e0a30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e0a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0a34: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1e0a34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1e0a38: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1e0a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1e0a3c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1e0a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1e0a40: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1e0a40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1e0a44:
    // 0x1e0a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0a48: 0xae2028cc  sw          $zero, 0x28CC($s1)
    ctx->pc = 0x1e0a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10444), GPR_U32(ctx, 0));
    // 0x1e0a4c: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x1e0a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x1e0a50: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x1e0a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x1e0a54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0a58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0a5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0a60: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A60u;
        // 0x1e0a64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0A68u;
    // 0x1e0a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0a6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0a70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e0a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e0a74: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E0A74u;
    SET_GPR_U32(ctx, 31, 0x1E0A7Cu);
    ctx->pc = 0x1E0A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0A74u;
    // 0x1e0a78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0780u, 0x1E0A74u, 0x1E0A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0A7Cu;
label_1e0a7c:
    // 0x1e0a7c: 0xac500038  sw          $s0, 0x38($v0)
    ctx->pc = 0x1e0a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 16));
    // 0x1e0a80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e0a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0a84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a88: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A88u;
        // 0x1e0a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0A90u;
}
