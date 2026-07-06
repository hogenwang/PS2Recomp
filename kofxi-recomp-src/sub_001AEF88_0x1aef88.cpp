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

// Function: sub_001AEF88
// Address: 0x1aef88 - 0x1af038
void sub_001AEF88_0x1aef88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEF88_0x1aef88");
#endif

    switch (ctx->pc) {
        case 0x1aefecu: goto label_1aefec;
        case 0x1af008u: goto label_1af008;
        case 0x1af010u: goto label_1af010;
        default: break;
    }

    ctx->pc = 0x1aef88u;

    // 0x1aef88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aef88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aef8c: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1aef8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1aef90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aef90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aef94: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x1aef94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1aef98: 0x2508026f  addiu       $t0, $t0, 0x26F
    ctx->pc = 0x1aef98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 623));
    // 0x1aef9c: 0x24090800  addiu       $t1, $zero, 0x800
    ctx->pc = 0x1aef9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1aefa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aefa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aefa4: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x1aefa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1aefa8: 0x806bcbc  j           func_1AF2F0
    ctx->pc = 0x1AEFA8u;
    ctx->pc = 0x1AEFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEFA8u;
    // 0x1aefac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2F0u;
    sub_001AF2F0_0x1af2f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1AEFB0u;
    // 0x1aefb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1aefb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1aefb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aefb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aefb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aefb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aefbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aefbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aefc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aefc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aefc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aefc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aefc8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1aefc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aefcc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1aefccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1aefd0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1aefd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aefd4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1aefd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1aefd8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1aefd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aefdc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1aefdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1aefe0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1aefe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1aefe4: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1AEFE4u;
    SET_GPR_U32(ctx, 31, 0x1AEFECu);
    ctx->pc = 0x1AEFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEFE4u;
    // 0x1aefe8: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AB0u, 0x1AEFE4u, 0x1AEFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEFECu;
label_1aefec:
    // 0x1aefec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aefecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeff0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aeff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeff4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1aeff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeff8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1aeff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeffc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1aeffcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af000: 0xc06bc0e  jal         func_1AF038
    ctx->pc = 0x1AF000u;
    SET_GPR_U32(ctx, 31, 0x1AF008u);
    ctx->pc = 0x1AF004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF000u;
    // 0x1af004: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF038u, 0x1AF000u, 0x1AF008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF008u;
label_1af008:
    // 0x1af008: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1AF008u;
    SET_GPR_U32(ctx, 31, 0x1AF010u);
    ctx->pc = 0x1AF00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF008u;
    // 0x1af00c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AC8u, 0x1AF008u, 0x1AF010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF010u;
label_1af010:
    // 0x1af010: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af014: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af018: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af01c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af01cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af020: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1af020u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af024: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1af024u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af028: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1af028u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1af02c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1af02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af030: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF030u;
        // 0x1af034: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF038u;
}
