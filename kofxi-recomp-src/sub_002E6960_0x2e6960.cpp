#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E6960
// Address: 0x2e6960 - 0x2e6a18
void sub_002E6960_0x2e6960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6960_0x2e6960");
#endif

    switch (ctx->pc) {
        case 0x2e6960u: goto label_2e6960;
        case 0x2e6964u: goto label_2e6964;
        case 0x2e6968u: goto label_2e6968;
        case 0x2e696cu: goto label_2e696c;
        case 0x2e6970u: goto label_2e6970;
        case 0x2e6974u: goto label_2e6974;
        case 0x2e6978u: goto label_2e6978;
        case 0x2e697cu: goto label_2e697c;
        case 0x2e6980u: goto label_2e6980;
        case 0x2e6984u: goto label_2e6984;
        case 0x2e6988u: goto label_2e6988;
        case 0x2e698cu: goto label_2e698c;
        case 0x2e6990u: goto label_2e6990;
        case 0x2e6994u: goto label_2e6994;
        case 0x2e6998u: goto label_2e6998;
        case 0x2e699cu: goto label_2e699c;
        case 0x2e69a0u: goto label_2e69a0;
        case 0x2e69a4u: goto label_2e69a4;
        case 0x2e69a8u: goto label_2e69a8;
        case 0x2e69acu: goto label_2e69ac;
        case 0x2e69b0u: goto label_2e69b0;
        case 0x2e69b4u: goto label_2e69b4;
        case 0x2e69b8u: goto label_2e69b8;
        case 0x2e69bcu: goto label_2e69bc;
        case 0x2e69c0u: goto label_2e69c0;
        case 0x2e69c4u: goto label_2e69c4;
        case 0x2e69c8u: goto label_2e69c8;
        case 0x2e69ccu: goto label_2e69cc;
        case 0x2e69d0u: goto label_2e69d0;
        case 0x2e69d4u: goto label_2e69d4;
        case 0x2e69d8u: goto label_2e69d8;
        case 0x2e69dcu: goto label_2e69dc;
        case 0x2e69e0u: goto label_2e69e0;
        case 0x2e69e4u: goto label_2e69e4;
        case 0x2e69e8u: goto label_2e69e8;
        case 0x2e69ecu: goto label_2e69ec;
        case 0x2e69f0u: goto label_2e69f0;
        case 0x2e69f4u: goto label_2e69f4;
        case 0x2e69f8u: goto label_2e69f8;
        case 0x2e69fcu: goto label_2e69fc;
        case 0x2e6a00u: goto label_2e6a00;
        case 0x2e6a04u: goto label_2e6a04;
        case 0x2e6a08u: goto label_2e6a08;
        case 0x2e6a0cu: goto label_2e6a0c;
        case 0x2e6a10u: goto label_2e6a10;
        case 0x2e6a14u: goto label_2e6a14;
        default: break;
    }

    ctx->pc = 0x2e6960u;

label_2e6960:
    // 0x2e6960: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e6960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2e6964:
    // 0x2e6964: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2e6964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2e6968:
    // 0x2e6968: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2e6968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2e696c:
    // 0x2e696c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e696cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e6970:
    // 0x2e6970: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e6970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2e6974:
    // 0x2e6974: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e6974u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e6978:
    // 0x2e6978: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e6978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2e697c:
    // 0x2e697c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e697cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e6980:
    // 0x2e6980: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e6980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2e6984:
    // 0x2e6984: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e6984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2e6988:
    // 0x2e6988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e6988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2e698c:
    // 0x2e698c: 0x380982d  daddu       $s3, $gp, $zero
    ctx->pc = 0x2e698cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2e6990:
    // 0x2e6990: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2e6990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
label_2e6994:
    // 0x2e6994: 0x8c50fd98  lw          $s0, -0x268($v0)
    ctx->pc = 0x2e6994u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966680)));
label_2e6998:
    // 0x2e6998: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2e699c:
    if (ctx->pc == 0x2E699Cu) {
        ctx->pc = 0x2E699Cu;
            // 0x2e699c: 0x2622fff6  addiu       $v0, $s1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967286));
        ctx->pc = 0x2E69A0u;
        goto label_2e69a0;
    }
    ctx->pc = 0x2E6998u;
    {
        const bool branch_taken_0x2e6998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E699Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6998u;
            // 0x2e699c: 0x2622fff6  addiu       $v0, $s1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6998) {
            ctx->pc = 0x2E69F4u;
            goto label_2e69f4;
        }
    }
    ctx->pc = 0x2E69A0u;
label_2e69a0:
    // 0x2e69a0: 0x2c520003  sltiu       $s2, $v0, 0x3
    ctx->pc = 0x2e69a0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2e69a4:
    // 0x2e69a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e69a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e69a8:
    // 0x2e69a8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_2e69ac:
    if (ctx->pc == 0x2E69ACu) {
        ctx->pc = 0x2E69ACu;
            // 0x2e69ac: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2E69B0u;
        goto label_2e69b0;
    }
    ctx->pc = 0x2E69A8u;
    {
        const bool branch_taken_0x2e69a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e69a8) {
            ctx->pc = 0x2E69ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E69A8u;
            // 0x2e69ac: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E69ECu;
            goto label_2e69ec;
        }
    }
    ctx->pc = 0x2E69B0u;
label_2e69b0:
    // 0x2e69b0: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_2e69b4:
    if (ctx->pc == 0x2E69B4u) {
        ctx->pc = 0x2E69B4u;
            // 0x2e69b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2E69B8u;
        goto label_2e69b8;
    }
    ctx->pc = 0x2E69B0u;
    {
        const bool branch_taken_0x2e69b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E69B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E69B0u;
            // 0x2e69b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e69b0) {
            ctx->pc = 0x2E69CCu;
            goto label_2e69cc;
        }
    }
    ctx->pc = 0x2E69B8u;
label_2e69b8:
    // 0x2e69b8: 0xc0b9906  jal         func_2E6418
label_2e69bc:
    if (ctx->pc == 0x2E69BCu) {
        ctx->pc = 0x2E69BCu;
            // 0x2e69bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E69C0u;
        goto label_2e69c0;
    }
    ctx->pc = 0x2E69B8u;
    SET_GPR_U32(ctx, 31, 0x2E69C0u);
    ctx->pc = 0x2E69BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E69B8u;
            // 0x2e69bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E6418u;
    if (runtime->hasFunction(0x2E6418u)) {
        auto targetFn = runtime->lookupFunction(0x2E6418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E69C0u; }
        if (ctx->pc != 0x2E69C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E6418_0x2e6418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E69C0u; }
        if (ctx->pc != 0x2E69C0u) { return; }
    }
    ctx->pc = 0x2E69C0u;
label_2e69c0:
    // 0x2e69c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e69c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e69c4:
    // 0x2e69c4: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_2e69c8:
    if (ctx->pc == 0x2E69C8u) {
        ctx->pc = 0x2E69C8u;
            // 0x2e69c8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2E69CCu;
        goto label_2e69cc;
    }
    ctx->pc = 0x2E69C4u;
    {
        const bool branch_taken_0x2e69c4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2E69C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E69C4u;
            // 0x2e69c8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e69c4) {
            ctx->pc = 0x2E69F8u;
            goto label_2e69f8;
        }
    }
    ctx->pc = 0x2E69CCu;
label_2e69cc:
    // 0x2e69cc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2e69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2e69d0:
    // 0x2e69d0: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x2e69d0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e69d4:
    // 0x2e69d4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2e69d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e69d8:
    // 0x2e69d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e69d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e69dc:
    // 0x2e69dc: 0x60f809  jalr        $v1
label_2e69e0:
    if (ctx->pc == 0x2E69E0u) {
        ctx->pc = 0x2E69E0u;
            // 0x2e69e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E69E4u;
        goto label_2e69e4;
    }
    ctx->pc = 0x2E69DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E69E4u);
        ctx->pc = 0x2E69E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E69DCu;
            // 0x2e69e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E69E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E69E4u; }
            if (ctx->pc != 0x2E69E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2E69E4u;
label_2e69e4:
    // 0x2e69e4: 0x260e02d  daddu       $gp, $s3, $zero
    ctx->pc = 0x2e69e4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e69e8:
    // 0x2e69e8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2e69e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e69ec:
    // 0x2e69ec: 0x5600ffee  bnel        $s0, $zero, . + 4 + (-0x12 << 2)
label_2e69f0:
    if (ctx->pc == 0x2E69F0u) {
        ctx->pc = 0x2E69F0u;
            // 0x2e69f0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2E69F4u;
        goto label_2e69f4;
    }
    ctx->pc = 0x2E69ECu;
    {
        const bool branch_taken_0x2e69ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e69ec) {
            ctx->pc = 0x2E69F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E69ECu;
            // 0x2e69f0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E69A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e69a8;
        }
    }
    ctx->pc = 0x2E69F4u;
label_2e69f4:
    // 0x2e69f4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e69f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2e69f8:
    // 0x2e69f8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2e69f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e69fc:
    // 0x2e69fc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e69fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e6a00:
    // 0x2e6a00: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e6a00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e6a04:
    // 0x2e6a04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e6a04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e6a08:
    // 0x2e6a08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e6a08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e6a0c:
    // 0x2e6a0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e6a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e6a10:
    // 0x2e6a10: 0x3e00008  jr          $ra
label_2e6a14:
    if (ctx->pc == 0x2E6A14u) {
        ctx->pc = 0x2E6A14u;
            // 0x2e6a14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2E6A18u;
        goto label_fallthrough_0x2e6a10;
    }
    ctx->pc = 0x2E6A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A10u;
            // 0x2e6a14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e6a10:
    ctx->pc = 0x2E6A18u;
    ctx->pc = 0x2e6a18u;
}
