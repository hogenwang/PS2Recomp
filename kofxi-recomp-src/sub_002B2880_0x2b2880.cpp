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

// Function: sub_002B2880
// Address: 0x2b2880 - 0x2b2a28
void sub_002B2880_0x2b2880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2880_0x2b2880");
#endif

    switch (ctx->pc) {
        case 0x2b2880u: goto label_2b2880;
        case 0x2b2884u: goto label_2b2884;
        case 0x2b2888u: goto label_2b2888;
        case 0x2b288cu: goto label_2b288c;
        case 0x2b2890u: goto label_2b2890;
        case 0x2b2894u: goto label_2b2894;
        case 0x2b2898u: goto label_2b2898;
        case 0x2b289cu: goto label_2b289c;
        case 0x2b28a0u: goto label_2b28a0;
        case 0x2b28a4u: goto label_2b28a4;
        case 0x2b28a8u: goto label_2b28a8;
        case 0x2b28acu: goto label_2b28ac;
        case 0x2b28b0u: goto label_2b28b0;
        case 0x2b28b4u: goto label_2b28b4;
        case 0x2b28b8u: goto label_2b28b8;
        case 0x2b28bcu: goto label_2b28bc;
        case 0x2b28c0u: goto label_2b28c0;
        case 0x2b28c4u: goto label_2b28c4;
        case 0x2b28c8u: goto label_2b28c8;
        case 0x2b28ccu: goto label_2b28cc;
        case 0x2b28d0u: goto label_2b28d0;
        case 0x2b28d4u: goto label_2b28d4;
        case 0x2b28d8u: goto label_2b28d8;
        case 0x2b28dcu: goto label_2b28dc;
        case 0x2b28e0u: goto label_2b28e0;
        case 0x2b28e4u: goto label_2b28e4;
        case 0x2b28e8u: goto label_2b28e8;
        case 0x2b28ecu: goto label_2b28ec;
        case 0x2b28f0u: goto label_2b28f0;
        case 0x2b28f4u: goto label_2b28f4;
        case 0x2b28f8u: goto label_2b28f8;
        case 0x2b28fcu: goto label_2b28fc;
        case 0x2b2900u: goto label_2b2900;
        case 0x2b2904u: goto label_2b2904;
        case 0x2b2908u: goto label_2b2908;
        case 0x2b290cu: goto label_2b290c;
        case 0x2b2910u: goto label_2b2910;
        case 0x2b2914u: goto label_2b2914;
        case 0x2b2918u: goto label_2b2918;
        case 0x2b291cu: goto label_2b291c;
        case 0x2b2920u: goto label_2b2920;
        case 0x2b2924u: goto label_2b2924;
        case 0x2b2928u: goto label_2b2928;
        case 0x2b292cu: goto label_2b292c;
        case 0x2b2930u: goto label_2b2930;
        case 0x2b2934u: goto label_2b2934;
        case 0x2b2938u: goto label_2b2938;
        case 0x2b293cu: goto label_2b293c;
        case 0x2b2940u: goto label_2b2940;
        case 0x2b2944u: goto label_2b2944;
        case 0x2b2948u: goto label_2b2948;
        case 0x2b294cu: goto label_2b294c;
        case 0x2b2950u: goto label_2b2950;
        case 0x2b2954u: goto label_2b2954;
        case 0x2b2958u: goto label_2b2958;
        case 0x2b295cu: goto label_2b295c;
        case 0x2b2960u: goto label_2b2960;
        case 0x2b2964u: goto label_2b2964;
        case 0x2b2968u: goto label_2b2968;
        case 0x2b296cu: goto label_2b296c;
        case 0x2b2970u: goto label_2b2970;
        case 0x2b2974u: goto label_2b2974;
        case 0x2b2978u: goto label_2b2978;
        case 0x2b297cu: goto label_2b297c;
        case 0x2b2980u: goto label_2b2980;
        case 0x2b2984u: goto label_2b2984;
        case 0x2b2988u: goto label_2b2988;
        case 0x2b298cu: goto label_2b298c;
        case 0x2b2990u: goto label_2b2990;
        case 0x2b2994u: goto label_2b2994;
        case 0x2b2998u: goto label_2b2998;
        case 0x2b299cu: goto label_2b299c;
        case 0x2b29a0u: goto label_2b29a0;
        case 0x2b29a4u: goto label_2b29a4;
        case 0x2b29a8u: goto label_2b29a8;
        case 0x2b29acu: goto label_2b29ac;
        case 0x2b29b0u: goto label_2b29b0;
        case 0x2b29b4u: goto label_2b29b4;
        case 0x2b29b8u: goto label_2b29b8;
        case 0x2b29bcu: goto label_2b29bc;
        case 0x2b29c0u: goto label_2b29c0;
        case 0x2b29c4u: goto label_2b29c4;
        case 0x2b29c8u: goto label_2b29c8;
        case 0x2b29ccu: goto label_2b29cc;
        case 0x2b29d0u: goto label_2b29d0;
        case 0x2b29d4u: goto label_2b29d4;
        case 0x2b29d8u: goto label_2b29d8;
        case 0x2b29dcu: goto label_2b29dc;
        case 0x2b29e0u: goto label_2b29e0;
        case 0x2b29e4u: goto label_2b29e4;
        case 0x2b29e8u: goto label_2b29e8;
        case 0x2b29ecu: goto label_2b29ec;
        case 0x2b29f0u: goto label_2b29f0;
        case 0x2b29f4u: goto label_2b29f4;
        case 0x2b29f8u: goto label_2b29f8;
        case 0x2b29fcu: goto label_2b29fc;
        case 0x2b2a00u: goto label_2b2a00;
        case 0x2b2a04u: goto label_2b2a04;
        case 0x2b2a08u: goto label_2b2a08;
        case 0x2b2a0cu: goto label_2b2a0c;
        case 0x2b2a10u: goto label_2b2a10;
        case 0x2b2a14u: goto label_2b2a14;
        case 0x2b2a18u: goto label_2b2a18;
        case 0x2b2a1cu: goto label_2b2a1c;
        case 0x2b2a20u: goto label_2b2a20;
        case 0x2b2a24u: goto label_2b2a24;
        default: break;
    }

    ctx->pc = 0x2b2880u;

label_2b2880:
    // 0x2b2880: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b2880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2b2884:
    // 0x2b2884: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b2884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b2888:
    // 0x2b2888: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2b2888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2b288c:
    // 0x2b288c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b288cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b2890:
    // 0x2b2890: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b2890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2b2894:
    // 0x2b2894: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2b2894u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b2898:
    // 0x2b2898: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b2898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2b289c:
    // 0x2b289c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2b289cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b28a0:
    // 0x2b28a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b28a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2b28a4:
    // 0x2b28a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2b28a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2b28a8:
    // 0x2b28a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b28a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b28ac:
    // 0x2b28ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b28acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b28b0:
    // 0x2b28b0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b28b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b28b4:
    // 0x2b28b4: 0xc0ac604  jal         func_2B1810
label_2b28b8:
    if (ctx->pc == 0x2B28B8u) {
        ctx->pc = 0x2B28B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28B4u;
        // 0x2b28b8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B28BCu;
        goto label_2b28bc;
    }
    ctx->pc = 0x2B28B4u;
    SET_GPR_U32(ctx, 31, 0x2B28BCu);
    ctx->pc = 0x2B28B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B28B4u;
    // 0x2b28b8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1810u, 0x2B28B4u, 0x2B28BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B28BCu;
label_2b28bc:
    // 0x2b28bc: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x2b28bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
label_2b28c0:
    // 0x2b28c0: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_2b28c4:
    if (ctx->pc == 0x2B28C4u) {
        ctx->pc = 0x2B28C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28C0u;
        // 0x2b28c4: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B28C8u;
        goto label_2b28c8;
    }
    ctx->pc = 0x2B28C0u;
    {
        const bool branch_taken_0x2b28c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b28c0) {
            ctx->pc = 0x2B28C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B28C0u;
            // 0x2b28c4: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2928u;
            goto label_2b2928;
        }
    }
    ctx->pc = 0x2B28C8u;
label_2b28c8:
    // 0x2b28c8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2b28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2b28cc:
    // 0x2b28cc: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_2b28d0:
    if (ctx->pc == 0x2B28D0u) {
        ctx->pc = 0x2B28D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28CCu;
        // 0x2b28d0: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B28D4u;
        goto label_2b28d4;
    }
    ctx->pc = 0x2B28CCu;
    {
        const bool branch_taken_0x2b28cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b28cc) {
            ctx->pc = 0x2B28D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B28CCu;
            // 0x2b28d0: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2928u;
            goto label_2b2928;
        }
    }
    ctx->pc = 0x2B28D4u;
label_2b28d4:
    // 0x2b28d4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b28d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2b28d8:
    // 0x2b28d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b28dc:
    if (ctx->pc == 0x2B28DCu) {
        ctx->pc = 0x2B28DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28D8u;
        // 0x2b28dc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B28E0u;
        goto label_2b28e0;
    }
    ctx->pc = 0x2B28D8u;
    {
        const bool branch_taken_0x2b28d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B28DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28D8u;
        // 0x2b28dc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28d8) {
            ctx->pc = 0x2B28ECu;
            goto label_2b28ec;
        }
    }
    ctx->pc = 0x2B28E0u;
label_2b28e0:
    // 0x2b28e0: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x2b28e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2b28e4:
    // 0x2b28e4: 0x1000000b  b           . + 4 + (0xB << 2)
label_2b28e8:
    if (ctx->pc == 0x2B28E8u) {
        ctx->pc = 0x2B28E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28E4u;
        // 0x2b28e8: 0x2406044d  addiu       $a2, $zero, 0x44D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B28ECu;
        goto label_2b28ec;
    }
    ctx->pc = 0x2B28E4u;
    {
        const bool branch_taken_0x2b28e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B28E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28E4u;
        // 0x2b28e8: 0x2406044d  addiu       $a2, $zero, 0x44D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28e4) {
            ctx->pc = 0x2B2914u;
            goto label_2b2914;
        }
    }
    ctx->pc = 0x2B28ECu;
label_2b28ec:
    // 0x2b28ec: 0x40f809  jalr        $v0
label_2b28f0:
    if (ctx->pc == 0x2B28F0u) {
        ctx->pc = 0x2B28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28ECu;
        // 0x2b28f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B28F4u;
        goto label_2b28f4;
    }
    ctx->pc = 0x2B28ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B28F4u);
        ctx->pc = 0x2B28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28ECu;
        // 0x2b28f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B28ECu, 0x2B28F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B28F4u;
label_2b28f4:
    // 0x2b28f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b28f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b28f8:
    // 0x2b28f8: 0x6000041  bltz        $s0, . + 4 + (0x41 << 2)
label_2b28fc:
    if (ctx->pc == 0x2B28FCu) {
        ctx->pc = 0x2B28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28F8u;
        // 0x2b28fc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2900u;
        goto label_2b2900;
    }
    ctx->pc = 0x2B28F8u;
    {
        const bool branch_taken_0x2b28f8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2B28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28F8u;
        // 0x2b28fc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28f8) {
            ctx->pc = 0x2B2A00u;
            goto label_2b2a00;
        }
    }
    ctx->pc = 0x2B2900u;
label_2b2900:
    // 0x2b2900: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
label_2b2904:
    if (ctx->pc == 0x2B2904u) {
        ctx->pc = 0x2B2904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2900u;
        // 0x2b2904: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2908u;
        goto label_2b2908;
    }
    ctx->pc = 0x2B2900u;
    {
        const bool branch_taken_0x2b2900 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2900) {
            ctx->pc = 0x2B2904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2900u;
            // 0x2b2904: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2928u;
            goto label_2b2928;
        }
    }
    ctx->pc = 0x2B2908u;
label_2b2908:
    // 0x2b2908: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b2908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b290c:
    // 0x2b290c: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x2b290cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2b2910:
    // 0x2b2910: 0x240600e5  addiu       $a2, $zero, 0xE5
    ctx->pc = 0x2b2910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
label_2b2914:
    // 0x2b2914: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b2914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2918:
    // 0x2b2918: 0xc0a5648  jal         func_295920
label_2b291c:
    if (ctx->pc == 0x2B291Cu) {
        ctx->pc = 0x2B291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2918u;
        // 0x2b291c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2920u;
        goto label_2b2920;
    }
    ctx->pc = 0x2B2918u;
    SET_GPR_U32(ctx, 31, 0x2B2920u);
    ctx->pc = 0x2B291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2918u;
    // 0x2b291c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B2918u, 0x2B2920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2920u;
label_2b2920:
    // 0x2b2920: 0x10000036  b           . + 4 + (0x36 << 2)
label_2b2924:
    if (ctx->pc == 0x2B2924u) {
        ctx->pc = 0x2B2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2920u;
        // 0x2b2924: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2928u;
        goto label_2b2928;
    }
    ctx->pc = 0x2B2920u;
    {
        const bool branch_taken_0x2b2920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2920u;
        // 0x2b2924: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2920) {
            ctx->pc = 0x2B29FCu;
            goto label_2b29fc;
        }
    }
    ctx->pc = 0x2B2928u;
label_2b2928:
    // 0x2b2928: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b292c:
    if (ctx->pc == 0x2B292Cu) {
        ctx->pc = 0x2B2930u;
        goto label_2b2930;
    }
    ctx->pc = 0x2B2928u;
    {
        const bool branch_taken_0x2b2928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2928) {
            ctx->pc = 0x2B2944u;
            goto label_2b2944;
        }
    }
    ctx->pc = 0x2B2930u;
label_2b2930:
    // 0x2b2930: 0xc0acbf2  jal         func_2B2FC8
label_2b2934:
    if (ctx->pc == 0x2B2934u) {
        ctx->pc = 0x2B2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2930u;
        // 0x2b2934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2938u;
        goto label_2b2938;
    }
    ctx->pc = 0x2B2930u;
    SET_GPR_U32(ctx, 31, 0x2B2938u);
    ctx->pc = 0x2B2934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2930u;
    // 0x2b2934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FC8u, 0x2B2930u, 0x2B2938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2938u;
label_2b2938:
    // 0x2b2938: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x2b2938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2b293c:
    // 0x2b293c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_2b2940:
    if (ctx->pc == 0x2B2940u) {
        ctx->pc = 0x2B2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B293Cu;
        // 0x2b2940: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2944u;
        goto label_2b2944;
    }
    ctx->pc = 0x2B293Cu;
    {
        const bool branch_taken_0x2b293c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B293Cu;
        // 0x2b2940: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b293c) {
            ctx->pc = 0x2B29FCu;
            goto label_2b29fc;
        }
    }
    ctx->pc = 0x2B2944u;
label_2b2944:
    // 0x2b2944: 0xc0491f2  jal         func_1247C8
label_2b2948:
    if (ctx->pc == 0x2B2948u) {
        ctx->pc = 0x2B294Cu;
        goto label_2b294c;
    }
    ctx->pc = 0x2B2944u;
    SET_GPR_U32(ctx, 31, 0x2B294Cu);
    ctx->pc = 0x1247C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1247C8u, 0x2B2944u, 0x2B294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B294Cu;
label_2b294c:
    // 0x2b294c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b294cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2b2950:
    // 0x2b2950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2954:
    // 0x2b2954: 0x1e600003  bgtz        $s3, . + 4 + (0x3 << 2)
label_2b2958:
    if (ctx->pc == 0x2B2958u) {
        ctx->pc = 0x2B2958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2954u;
        // 0x2b2958: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B295Cu;
        goto label_2b295c;
    }
    ctx->pc = 0x2B2954u;
    {
        const bool branch_taken_0x2b2954 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x2B2958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2954u;
        // 0x2b2958: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2954) {
            ctx->pc = 0x2B2964u;
            goto label_2b2964;
        }
    }
    ctx->pc = 0x2B295Cu;
label_2b295c:
    // 0x2b295c: 0x10000027  b           . + 4 + (0x27 << 2)
label_2b2960:
    if (ctx->pc == 0x2B2960u) {
        ctx->pc = 0x2B2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B295Cu;
        // 0x2b2960: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2964u;
        goto label_2b2964;
    }
    ctx->pc = 0x2B295Cu;
    {
        const bool branch_taken_0x2b295c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B295Cu;
        // 0x2b2960: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b295c) {
            ctx->pc = 0x2B29FCu;
            goto label_2b29fc;
        }
    }
    ctx->pc = 0x2B2964u;
label_2b2964:
    // 0x2b2964: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2b2964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b2968:
    // 0x2b2968: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x2b2968u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2b296c:
    // 0x2b296c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2b296cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_2b2970:
    // 0x2b2970: 0x2729823  subu        $s3, $s3, $s2
    ctx->pc = 0x2b2970u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_2b2974:
    // 0x2b2974: 0x0  nop
    ctx->pc = 0x2b2974u;
    // NOP
label_2b2978:
    // 0x2b2978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b2978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b297c:
    // 0x2b297c: 0x2d22821  addu        $a1, $s6, $s2
    ctx->pc = 0x2b297cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_2b2980:
    // 0x2b2980: 0xc0acacc  jal         func_2B2B30
label_2b2984:
    if (ctx->pc == 0x2B2984u) {
        ctx->pc = 0x2B2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2980u;
        // 0x2b2984: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2988u;
        goto label_2b2988;
    }
    ctx->pc = 0x2B2980u;
    SET_GPR_U32(ctx, 31, 0x2B2988u);
    ctx->pc = 0x2B2984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2980u;
    // 0x2b2984: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2B30u, 0x2B2980u, 0x2B2988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2988u;
label_2b2988:
    // 0x2b2988: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2b2988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2b298c:
    // 0x2b298c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_2b2990:
    if (ctx->pc == 0x2B2990u) {
        ctx->pc = 0x2B2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B298Cu;
        // 0x2b2990: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2994u;
        goto label_2b2994;
    }
    ctx->pc = 0x2B298Cu;
    {
        const bool branch_taken_0x2b298c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B298Cu;
        // 0x2b2990: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b298c) {
            ctx->pc = 0x2B29D4u;
            goto label_2b29d4;
        }
    }
    ctx->pc = 0x2B2994u;
label_2b2994:
    // 0x2b2994: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x2b2994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_2b2998:
    // 0x2b2998: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b299c:
    if (ctx->pc == 0x2B299Cu) {
        ctx->pc = 0x2B299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2998u;
        // 0x2b299c: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B29A0u;
        goto label_2b29a0;
    }
    ctx->pc = 0x2B2998u;
    {
        const bool branch_taken_0x2b2998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2998) {
            ctx->pc = 0x2B299Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2998u;
            // 0x2b299c: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B29ACu;
            goto label_2b29ac;
        }
    }
    ctx->pc = 0x2B29A0u;
label_2b29a0:
    // 0x2b29a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b29a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b29a4:
    // 0x2b29a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b29a8:
    if (ctx->pc == 0x2B29A8u) {
        ctx->pc = 0x2B29A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29A4u;
        // 0x2b29a8: 0x8e3500d0  lw          $s5, 0xD0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B29ACu;
        goto label_2b29ac;
    }
    ctx->pc = 0x2B29A4u;
    {
        const bool branch_taken_0x2b29a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B29A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29A4u;
        // 0x2b29a8: 0x8e3500d0  lw          $s5, 0xD0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29a4) {
            ctx->pc = 0x2B29C0u;
            goto label_2b29c0;
        }
    }
    ctx->pc = 0x2B29ACu;
label_2b29ac:
    // 0x2b29ac: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2b29acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_2b29b0:
    // 0x2b29b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b29b4:
    if (ctx->pc == 0x2B29B4u) {
        ctx->pc = 0x2B29B8u;
        goto label_2b29b8;
    }
    ctx->pc = 0x2B29B0u;
    {
        const bool branch_taken_0x2b29b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b29b0) {
            ctx->pc = 0x2B29C0u;
            goto label_2b29c0;
        }
    }
    ctx->pc = 0x2B29B8u;
label_2b29b8:
    // 0x2b29b8: 0x8c55008c  lw          $s5, 0x8C($v0)
    ctx->pc = 0x2b29b8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2b29bc:
    // 0x2b29bc: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2b29bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b29c0:
    // 0x2b29c0: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_2b29c4:
    if (ctx->pc == 0x2B29C4u) {
        ctx->pc = 0x2B29C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29C0u;
        // 0x2b29c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B29C8u;
        goto label_2b29c8;
    }
    ctx->pc = 0x2B29C0u;
    {
        const bool branch_taken_0x2b29c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B29C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29C0u;
        // 0x2b29c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29c0) {
            ctx->pc = 0x2B29D4u;
            goto label_2b29d4;
        }
    }
    ctx->pc = 0x2B29C8u;
label_2b29c8:
    // 0x2b29c8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2b29c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b29cc:
    // 0x2b29cc: 0x280f809  jalr        $s4
label_2b29d0:
    if (ctx->pc == 0x2B29D0u) {
        ctx->pc = 0x2B29D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29CCu;
        // 0x2b29d0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B29D4u;
        goto label_2b29d4;
    }
    ctx->pc = 0x2B29CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2B29D4u);
        ctx->pc = 0x2B29D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29CCu;
        // 0x2b29d0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B29CCu, 0x2B29D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B29D4u;
label_2b29d4:
    // 0x2b29d4: 0x1e000004  bgtz        $s0, . + 4 + (0x4 << 2)
label_2b29d8:
    if (ctx->pc == 0x2B29D8u) {
        ctx->pc = 0x2B29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29D4u;
        // 0x2b29d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B29DCu;
        goto label_2b29dc;
    }
    ctx->pc = 0x2B29D4u;
    {
        const bool branch_taken_0x2b29d4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2B29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29D4u;
        // 0x2b29d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29d4) {
            ctx->pc = 0x2B29E8u;
            goto label_2b29e8;
        }
    }
    ctx->pc = 0x2B29DCu;
label_2b29dc:
    // 0x2b29dc: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2b29dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b29e0:
    // 0x2b29e0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b29e4:
    if (ctx->pc == 0x2B29E4u) {
        ctx->pc = 0x2B29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29E0u;
        // 0x2b29e4: 0xac720010  sw          $s2, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B29E8u;
        goto label_2b29e8;
    }
    ctx->pc = 0x2B29E0u;
    {
        const bool branch_taken_0x2b29e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29E0u;
        // 0x2b29e4: 0xac720010  sw          $s2, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29e0) {
            ctx->pc = 0x2B29FCu;
            goto label_2b29fc;
        }
    }
    ctx->pc = 0x2B29E8u;
label_2b29e8:
    // 0x2b29e8: 0x12130003  beq         $s0, $s3, . + 4 + (0x3 << 2)
label_2b29ec:
    if (ctx->pc == 0x2B29ECu) {
        ctx->pc = 0x2B29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29E8u;
        // 0x2b29ec: 0x2709823  subu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B29F0u;
        goto label_2b29f0;
    }
    ctx->pc = 0x2B29E8u;
    {
        const bool branch_taken_0x2b29e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x2B29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29E8u;
        // 0x2b29ec: 0x2709823  subu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29e8) {
            ctx->pc = 0x2B29F8u;
            goto label_2b29f8;
        }
    }
    ctx->pc = 0x2B29F0u;
label_2b29f0:
    // 0x2b29f0: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_2b29f4:
    if (ctx->pc == 0x2B29F4u) {
        ctx->pc = 0x2B29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29F0u;
        // 0x2b29f4: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B29F8u;
        goto label_2b29f8;
    }
    ctx->pc = 0x2B29F0u;
    {
        const bool branch_taken_0x2b29f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29F0u;
        // 0x2b29f4: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29f0) {
            ctx->pc = 0x2B2978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b2978;
        }
    }
    ctx->pc = 0x2B29F8u;
label_2b29f8:
    // 0x2b29f8: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x2b29f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2b29fc:
    // 0x2b29fc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2b29fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b2a00:
    // 0x2b2a00: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2b2a00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b2a04:
    // 0x2b2a04: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b2a04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b2a08:
    // 0x2b2a08: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b2a08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b2a0c:
    // 0x2b2a0c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b2a0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b2a10:
    // 0x2b2a10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b2a10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b2a14:
    // 0x2b2a14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b2a14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b2a18:
    // 0x2b2a18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b2a1c:
    // 0x2b2a1c: 0x3e00008  jr          $ra
label_2b2a20:
    if (ctx->pc == 0x2B2A20u) {
        ctx->pc = 0x2B2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A1Cu;
        // 0x2b2a20: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2A24u;
        goto label_2b2a24;
    }
    ctx->pc = 0x2B2A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A1Cu;
        // 0x2b2a20: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2A24u;
label_2b2a24:
    // 0x2b2a24: 0x0  nop
    ctx->pc = 0x2b2a24u;
    // NOP
}
