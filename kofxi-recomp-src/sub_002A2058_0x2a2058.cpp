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

// Function: sub_002A2058
// Address: 0x2a2058 - 0x2a2168
void sub_002A2058_0x2a2058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2058_0x2a2058");
#endif

    switch (ctx->pc) {
        case 0x2a20acu: goto label_2a20ac;
        case 0x2a20ccu: goto label_2a20cc;
        case 0x2a20ecu: goto label_2a20ec;
        case 0x2a211cu: goto label_2a211c;
        default: break;
    }

    ctx->pc = 0x2a2058u;

    // 0x2a2058: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a2058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a205c: 0x31290002  andi        $t1, $t1, 0x2
    ctx->pc = 0x2a205cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x2a2060: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2a2060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2a2064: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a2064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a2068: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2a2068u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a206c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a206cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a2070: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2a2070u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2074: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a2074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a2078: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2a2078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a207c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a207cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a2080: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2a2080u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2084: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a2084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a2088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a2088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a208c: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2A208Cu;
    {
        const bool branch_taken_0x2a208c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A208Cu;
        // 0x2a2090: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a208c) {
            ctx->pc = 0x2A20FCu;
            goto label_2a20fc;
        }
    }
    ctx->pc = 0x2A2094u;
    // 0x2a2094: 0x5240001a  beql        $s2, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A2094u;
    {
        const bool branch_taken_0x2a2094 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2094) {
            ctx->pc = 0x2A2098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2094u;
            // 0x2a2098: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2100u;
            goto label_2a2100;
        }
    }
    ctx->pc = 0x2A209Cu;
    // 0x2a209c: 0x52600018  beql        $s3, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A209Cu;
    {
        const bool branch_taken_0x2a209c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a209c) {
            ctx->pc = 0x2A20A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A209Cu;
            // 0x2a20a0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2100u;
            goto label_2a2100;
        }
    }
    ctx->pc = 0x2A20A4u;
    // 0x2a20a4: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2A20A4u;
    SET_GPR_U32(ctx, 31, 0x2A20ACu);
    ctx->pc = 0x2A20A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A20A4u;
    // 0x2a20a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2A20A4u, 0x2A20ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A20ACu;
label_2a20ac:
    // 0x2a20ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a20acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a20b0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A20B0u;
    {
        const bool branch_taken_0x2a20b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A20B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20B0u;
        // 0x2a20b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a20b0) {
            ctx->pc = 0x2A20C0u;
            goto label_2a20c0;
        }
    }
    ctx->pc = 0x2A20B8u;
    // 0x2a20b8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2A20B8u;
    {
        const bool branch_taken_0x2a20b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20B8u;
        // 0x2a20bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a20b8) {
            ctx->pc = 0x2A2144u;
            goto label_2a2144;
        }
    }
    ctx->pc = 0x2A20C0u;
label_2a20c0:
    // 0x2a20c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a20c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a20c4: 0xc049c48  jal         func_127120
    ctx->pc = 0x2A20C4u;
    SET_GPR_U32(ctx, 31, 0x2A20CCu);
    ctx->pc = 0x2A20C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A20C4u;
    // 0x2a20c8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2A20C4u, 0x2A20CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A20CCu;
label_2a20cc:
    // 0x2a20cc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2a20ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a20d0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A20D0u;
    {
        const bool branch_taken_0x2a20d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A20D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20D0u;
        // 0x2a20d4: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a20d0) {
            ctx->pc = 0x2A20F0u;
            goto label_2a20f0;
        }
    }
    ctx->pc = 0x2A20D8u;
    // 0x2a20d8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2a20d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2a20dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A20DCu;
    {
        const bool branch_taken_0x2a20dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20DCu;
        // 0x2a20e0: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a20dc) {
            ctx->pc = 0x2A20F4u;
            goto label_2a20f4;
        }
    }
    ctx->pc = 0x2A20E4u;
    // 0x2a20e4: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2A20E4u;
    SET_GPR_U32(ctx, 31, 0x2A20ECu);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2A20E4u, 0x2A20ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A20ECu;
label_2a20ec:
    // 0x2a20ec: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2a20ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2a20f0:
    // 0x2a20f0: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x2a20f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_2a20f4:
    // 0x2a20f4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A20F4u;
    {
        const bool branch_taken_0x2a20f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20F4u;
        // 0x2a20f8: 0xae11000c  sw          $s1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a20f4) {
            ctx->pc = 0x2A212Cu;
            goto label_2a212c;
        }
    }
    ctx->pc = 0x2A20FCu;
label_2a20fc:
    // 0x2a20fc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2a20fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2a2100:
    // 0x2a2100: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2100u;
    {
        const bool branch_taken_0x2a2100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2100u;
        // 0x2a2104: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2100) {
            ctx->pc = 0x2A2120u;
            goto label_2a2120;
        }
    }
    ctx->pc = 0x2A2108u;
    // 0x2a2108: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2a2108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2a210c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A210Cu;
    {
        const bool branch_taken_0x2a210c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A210Cu;
        // 0x2a2110: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a210c) {
            ctx->pc = 0x2A2124u;
            goto label_2a2124;
        }
    }
    ctx->pc = 0x2A2114u;
    // 0x2a2114: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2A2114u;
    SET_GPR_U32(ctx, 31, 0x2A211Cu);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2A2114u, 0x2A211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A211Cu;
label_2a211c:
    // 0x2a211c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2a211cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2a2120:
    // 0x2a2120: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2a2120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2a2124:
    // 0x2a2124: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x2a2124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x2a2128: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a2128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2a212c:
    // 0x2a212c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2a212cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2a2130: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x2a2130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x2a2134: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a2134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2138: 0xae150004  sw          $s5, 0x4($s0)
    ctx->pc = 0x2a2138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
    // 0x2a213c: 0xae130010  sw          $s3, 0x10($s0)
    ctx->pc = 0x2a213cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
    // 0x2a2140: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2a2140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2a2144:
    // 0x2a2144: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a2144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a2148: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2a2148u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a214c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a214cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2150: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a2150u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2154: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a2154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2158: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a2158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a215c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a215cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2160: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2160u;
        // 0x2a2164: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2168u;
}
