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

// Function: sub_002C21E8
// Address: 0x2c21e8 - 0x2c22d8
void sub_002C21E8_0x2c21e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C21E8_0x2c21e8");
#endif

    switch (ctx->pc) {
        case 0x2c222cu: goto label_2c222c;
        case 0x2c2234u: goto label_2c2234;
        case 0x2c2254u: goto label_2c2254;
        case 0x2c226cu: goto label_2c226c;
        case 0x2c22acu: goto label_2c22ac;
        default: break;
    }

    ctx->pc = 0x2c21e8u;

    // 0x2c21e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c21e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c21ec: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2c21ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2c21f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2c21f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c21f4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2c21f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c21f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c21f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c21fc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2c21fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2200: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c2200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c2204: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c2204u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2208: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c2208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c220c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c220cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2210: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c2210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2c2214: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c2214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2218: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2218u;
    {
        const bool branch_taken_0x2c2218 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2218u;
        // 0x2c221c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2218) {
            ctx->pc = 0x2C222Cu;
            goto label_2c222c;
        }
    }
    ctx->pc = 0x2C2220u;
    // 0x2c2220: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c2220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c2224: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C2224u;
    {
        const bool branch_taken_0x2c2224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2224u;
        // 0x2c2228: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2224) {
            ctx->pc = 0x2C2248u;
            goto label_2c2248;
        }
    }
    ctx->pc = 0x2C222Cu;
label_2c222c:
    // 0x2c222c: 0xc0a096e  jal         func_2825B8
    ctx->pc = 0x2C222Cu;
    SET_GPR_U32(ctx, 31, 0x2C2234u);
    ctx->pc = 0x2825B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2825B8u, 0x2C222Cu, 0x2C2234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2234u;
label_2c2234:
    // 0x2c2234: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2238: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2238u;
    {
        const bool branch_taken_0x2c2238 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2238u;
        // 0x2c223c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2238) {
            ctx->pc = 0x2C224Cu;
            goto label_2c224c;
        }
    }
    ctx->pc = 0x2C2240u;
    // 0x2c2240: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C2240u;
    {
        const bool branch_taken_0x2c2240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2240u;
        // 0x2c2244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2240) {
            ctx->pc = 0x2C22B0u;
            goto label_2c22b0;
        }
    }
    ctx->pc = 0x2C2248u;
label_2c2248:
    // 0x2c2248: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c2248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c224c:
    // 0x2c224c: 0xc0b08b6  jal         func_2C22D8
    ctx->pc = 0x2C224Cu;
    SET_GPR_U32(ctx, 31, 0x2C2254u);
    ctx->pc = 0x2C2250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C224Cu;
    // 0x2c2250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C22D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C22D8u, 0x2C224Cu, 0x2C2254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2254u;
label_2c2254:
    // 0x2c2254: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C2254u;
    {
        const bool branch_taken_0x2c2254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2254u;
        // 0x2c2258: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2254) {
            ctx->pc = 0x2C2290u;
            goto label_2c2290;
        }
    }
    ctx->pc = 0x2C225Cu;
    // 0x2c225c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c225cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2260: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2c2260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2264: 0xc0b08d2  jal         func_2C2348
    ctx->pc = 0x2C2264u;
    SET_GPR_U32(ctx, 31, 0x2C226Cu);
    ctx->pc = 0x2C2268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2264u;
    // 0x2c2268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2348u, 0x2C2264u, 0x2C226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C226Cu;
label_2c226c:
    // 0x2c226c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C226Cu;
    {
        const bool branch_taken_0x2c226c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c226c) {
            ctx->pc = 0x2C2290u;
            goto label_2c2290;
        }
    }
    ctx->pc = 0x2C2274u;
    // 0x2c2274: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C2274u;
    {
        const bool branch_taken_0x2c2274 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2274u;
        // 0x2c2278: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2274) {
            ctx->pc = 0x2C22B0u;
            goto label_2c22b0;
        }
    }
    ctx->pc = 0x2C227Cu;
    // 0x2c227c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c2280: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C2280u;
    {
        const bool branch_taken_0x2c2280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2280) {
            ctx->pc = 0x2C2284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2280u;
            // 0x2c2284: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2288u;
            goto label_2c2288;
        }
    }
    ctx->pc = 0x2C2288u;
label_2c2288:
    // 0x2c2288: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2288u;
    {
        const bool branch_taken_0x2c2288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2288u;
        // 0x2c228c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2288) {
            ctx->pc = 0x2C22B0u;
            goto label_2c22b0;
        }
    }
    ctx->pc = 0x2C2290u;
label_2c2290:
    // 0x2c2290: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2290u;
    {
        const bool branch_taken_0x2c2290 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2290) {
            ctx->pc = 0x2C22A4u;
            goto label_2c22a4;
        }
    }
    ctx->pc = 0x2C2298u;
    // 0x2c2298: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c2298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c229c: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C229Cu;
    {
        const bool branch_taken_0x2c229c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C229Cu;
        // 0x2c22a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c229c) {
            ctx->pc = 0x2C22B0u;
            goto label_2c22b0;
        }
    }
    ctx->pc = 0x2C22A4u;
label_2c22a4:
    // 0x2c22a4: 0xc0a098c  jal         func_282630
    ctx->pc = 0x2C22A4u;
    SET_GPR_U32(ctx, 31, 0x2C22ACu);
    ctx->pc = 0x2C22A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C22A4u;
    // 0x2c22a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282630u, 0x2C22A4u, 0x2C22ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C22ACu;
label_2c22ac:
    // 0x2c22ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c22acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c22b0:
    // 0x2c22b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c22b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c22b4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2c22b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c22b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c22b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c22bc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c22bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c22c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c22c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c22c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c22c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c22c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c22c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c22cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C22CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C22D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22CCu;
        // 0x2c22d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C22CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C22D4u;
    // 0x2c22d4: 0x0  nop
    ctx->pc = 0x2c22d4u;
    // NOP
}
