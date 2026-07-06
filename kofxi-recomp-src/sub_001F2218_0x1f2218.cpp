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

// Function: sub_001F2218
// Address: 0x1f2218 - 0x1f22f8
void sub_001F2218_0x1f2218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2218_0x1f2218");
#endif

    switch (ctx->pc) {
        case 0x1f224cu: goto label_1f224c;
        case 0x1f2288u: goto label_1f2288;
        case 0x1f22a0u: goto label_1f22a0;
        default: break;
    }

    ctx->pc = 0x1f2218u;

    // 0x1f2218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f2218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f221c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f221cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f2220: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f2220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2224: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x1f2224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1f2228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f2228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f222c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f222cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f2230: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f2230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2234: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f2234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f2238: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1f2238u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f223c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f223cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f2240: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f2240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f2244: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F2244u;
    SET_GPR_U32(ctx, 31, 0x1F224Cu);
    ctx->pc = 0x1F2248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2244u;
    // 0x1f2248: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F2244u, 0x1F224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F224Cu;
label_1f224c:
    // 0x1f224c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f224cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2250: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F2250u;
    {
        const bool branch_taken_0x1f2250 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2250u;
        // 0x1f2254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2250) {
            ctx->pc = 0x1F22A4u;
            goto label_1f22a4;
        }
    }
    ctx->pc = 0x1F2258u;
    // 0x1f2258: 0x661000d  bgez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1F2258u;
    {
        const bool branch_taken_0x1f2258 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1F225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2258u;
        // 0x1f225c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2258) {
            ctx->pc = 0x1F2290u;
            goto label_1f2290;
        }
    }
    ctx->pc = 0x1F2260u;
    // 0x1f2260: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1f2260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1f2264: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F2264u;
    {
        const bool branch_taken_0x1f2264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2264u;
        // 0x1f2268: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2264) {
            ctx->pc = 0x1F2294u;
            goto label_1f2294;
        }
    }
    ctx->pc = 0x1F226Cu;
    // 0x1f226c: 0x82220057  lb          $v0, 0x57($s1)
    ctx->pc = 0x1f226cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 87)));
    // 0x1f2270: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F2270u;
    {
        const bool branch_taken_0x1f2270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2270u;
        // 0x1f2274: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2270) {
            ctx->pc = 0x1F2298u;
            goto label_1f2298;
        }
    }
    ctx->pc = 0x1F2278u;
    // 0x1f2278: 0x5280000a  beql        $s4, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1F2278u;
    {
        const bool branch_taken_0x1f2278 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2278) {
            ctx->pc = 0x1F227Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2278u;
            // 0x1f227c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F22A4u;
            goto label_1f22a4;
        }
    }
    ctx->pc = 0x1F2280u;
    // 0x1f2280: 0xc07c8be  jal         func_1F22F8
    ctx->pc = 0x1F2280u;
    SET_GPR_U32(ctx, 31, 0x1F2288u);
    ctx->pc = 0x1F2284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2280u;
    // 0x1f2284: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F22F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F22F8u, 0x1F2280u, 0x1F2288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2288u;
label_1f2288:
    // 0x1f2288: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2288u;
    {
        const bool branch_taken_0x1f2288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2288u;
        // 0x1f228c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2288) {
            ctx->pc = 0x1F22A0u;
            goto label_1f22a0;
        }
    }
    ctx->pc = 0x1F2290u;
label_1f2290:
    // 0x1f2290: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x1f2290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1f2294:
    // 0x1f2294: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f2294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2298:
    // 0x1f2298: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x1F2298u;
    SET_GPR_U32(ctx, 31, 0x1F22A0u);
    ctx->pc = 0x1F229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2298u;
    // 0x1f229c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE40u, 0x1F2298u, 0x1F22A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22A0u;
label_1f22a0:
    // 0x1f22a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f22a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f22a4:
    // 0x1f22a4: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F22A4u;
    {
        const bool branch_taken_0x1f22a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22A4u;
        // 0x1f22a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f22a4) {
            ctx->pc = 0x1F22D8u;
            goto label_1f22d8;
        }
    }
    ctx->pc = 0x1F22ACu;
    // 0x1f22ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f22acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f22b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f22b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f22b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f22b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f22bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f22bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f22c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f22c4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1f22c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f22c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f22cc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f22ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f22d0: 0x807c8ee  j           func_1F23B8
    ctx->pc = 0x1F22D0u;
    ctx->pc = 0x1F22D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22D0u;
    // 0x1f22d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F23B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F23B8u, 0x1F22D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1F22D8u;
label_1f22d8:
    // 0x1f22d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f22d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f22dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f22dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f22e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f22e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f22e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f22e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f22e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f22e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f22ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1F22ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F22F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22ECu;
        // 0x1f22f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F22ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F22F4u;
    // 0x1f22f4: 0x0  nop
    ctx->pc = 0x1f22f4u;
    // NOP
}
