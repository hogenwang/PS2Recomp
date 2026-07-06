#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003020A0
// Address: 0x3020a0 - 0x3021d0
void sub_003020A0_0x3020a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003020A0_0x3020a0");
#endif

    switch (ctx->pc) {
        case 0x3020ecu: goto label_3020ec;
        case 0x3020f4u: goto label_3020f4;
        case 0x302100u: goto label_302100;
        case 0x30210cu: goto label_30210c;
        case 0x302118u: goto label_302118;
        case 0x302124u: goto label_302124;
        case 0x302198u: goto label_302198;
        case 0x3021acu: goto label_3021ac;
        default: break;
    }

    ctx->pc = 0x3020a0u;

    // 0x3020a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3020a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3020a4: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x3020a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x3020a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3020a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3020ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3020acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3020b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3020b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3020b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3020b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3020b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3020b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3020bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3020bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3020c0: 0x8c420c58  lw          $v0, 0xC58($v0)
    ctx->pc = 0x3020c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3160)));
    // 0x3020c4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3020C4u;
    {
        const bool branch_taken_0x3020c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3020C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3020C4u;
            // 0x3020c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020c4) {
            ctx->pc = 0x302148u;
            goto label_302148;
        }
    }
    ctx->pc = 0x3020CCu;
    // 0x3020cc: 0x3c1301cb  lui         $s3, 0x1CB
    ctx->pc = 0x3020ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)459 << 16));
    // 0x3020d0: 0x3c1201cc  lui         $s2, 0x1CC
    ctx->pc = 0x3020d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)460 << 16));
    // 0x3020d4: 0x3c1101cb  lui         $s1, 0x1CB
    ctx->pc = 0x3020d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)459 << 16));
    // 0x3020d8: 0x3c1001cc  lui         $s0, 0x1CC
    ctx->pc = 0x3020d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)460 << 16));
    // 0x3020dc: 0x26730cb0  addiu       $s3, $s3, 0xCB0
    ctx->pc = 0x3020dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3248));
    // 0x3020e0: 0x26522180  addiu       $s2, $s2, 0x2180
    ctx->pc = 0x3020e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8576));
    // 0x3020e4: 0x26310ce0  addiu       $s1, $s1, 0xCE0
    ctx->pc = 0x3020e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3296));
    // 0x3020e8: 0x26101e80  addiu       $s0, $s0, 0x1E80
    ctx->pc = 0x3020e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7808));
label_3020ec:
    // 0x3020ec: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3020ECu;
    SET_GPR_U32(ctx, 31, 0x3020F4u);
    ctx->pc = 0x3020F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3020ECu;
            // 0x3020f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3020F4u; }
        if (ctx->pc != 0x3020F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3020F4u; }
        if (ctx->pc != 0x3020F4u) { return; }
    }
    ctx->pc = 0x3020F4u;
label_3020f4:
    // 0x3020f4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3020f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3020f8: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x3020F8u;
    SET_GPR_U32(ctx, 31, 0x302100u);
    ctx->pc = 0x3020FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3020F8u;
            // 0x3020fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302100u; }
        if (ctx->pc != 0x302100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302100u; }
        if (ctx->pc != 0x302100u) { return; }
    }
    ctx->pc = 0x302100u;
label_302100:
    // 0x302100: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x302100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302104: 0xc040454  jal         func_101150
    ctx->pc = 0x302104u;
    SET_GPR_U32(ctx, 31, 0x30210Cu);
    ctx->pc = 0x302108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302104u;
            // 0x302108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30210Cu; }
        if (ctx->pc != 0x30210Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30210Cu; }
        if (ctx->pc != 0x30210Cu) { return; }
    }
    ctx->pc = 0x30210Cu;
label_30210c:
    // 0x30210c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x30210cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x302110: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x302110u;
    SET_GPR_U32(ctx, 31, 0x302118u);
    ctx->pc = 0x302114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302110u;
            // 0x302114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302118u; }
        if (ctx->pc != 0x302118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302118u; }
        if (ctx->pc != 0x302118u) { return; }
    }
    ctx->pc = 0x302118u;
label_302118:
    // 0x302118: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x302118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30211c: 0xc040454  jal         func_101150
    ctx->pc = 0x30211Cu;
    SET_GPR_U32(ctx, 31, 0x302124u);
    ctx->pc = 0x302120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30211Cu;
            // 0x302120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302124u; }
        if (ctx->pc != 0x302124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302124u; }
        if (ctx->pc != 0x302124u) { return; }
    }
    ctx->pc = 0x302124u;
label_302124:
    // 0x302124: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x302124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x302128: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x302128u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x30212c: 0x8c420c58  lw          $v0, 0xC58($v0)
    ctx->pc = 0x30212cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3160)));
    // 0x302130: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x302130u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x302134: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x302134u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x302138: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x302138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x30213c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x30213cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x302140: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x302140u;
    {
        const bool branch_taken_0x302140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302140u;
            // 0x302144: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302140) {
            ctx->pc = 0x3020ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3020ec;
        }
    }
    ctx->pc = 0x302148u;
label_302148:
    // 0x302148: 0x3c0201cc  lui         $v0, 0x1CC
    ctx->pc = 0x302148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)460 << 16));
    // 0x30214c: 0x7c402490  sq          $zero, 0x2490($v0)
    ctx->pc = 0x30214cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 9360), GPR_VEC(ctx, 0));
    // 0x302150: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x302150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x302154: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x302154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x302158: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x302158u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x30215c: 0x8c480c60  lw          $t0, 0xC60($v0)
    ctx->pc = 0x30215cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3168)));
    // 0x302160: 0x24a524a0  addiu       $a1, $a1, 0x24A0
    ctx->pc = 0x302160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
    // 0x302164: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x302164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x302168: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x302168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30216c: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x30216cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x302170: 0x3c0201cc  lui         $v0, 0x1CC
    ctx->pc = 0x302170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)460 << 16));
    // 0x302174: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x302174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x302178: 0x64040  sll         $t0, $a2, 1
    ctx->pc = 0x302178u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x30217c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x30217cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x302180: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x302180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x302184: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x302184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x302188: 0xac472490  sw          $a3, 0x2490($v0)
    ctx->pc = 0x302188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9360), GPR_U32(ctx, 7));
    // 0x30218c: 0x7ca00000  sq          $zero, 0x0($a1)
    ctx->pc = 0x30218cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 0));
    // 0x302190: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x302190u;
    SET_GPR_U32(ctx, 31, 0x302198u);
    ctx->pc = 0x302194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302190u;
            // 0x302194: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302198u; }
        if (ctx->pc != 0x302198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302198u; }
        if (ctx->pc != 0x302198u) { return; }
    }
    ctx->pc = 0x302198u;
label_302198:
    // 0x302198: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x302198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30219c: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x30219cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x3021a0: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x3021a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x3021a4: 0xc040a04  jal         func_102810
    ctx->pc = 0x3021A4u;
    SET_GPR_U32(ctx, 31, 0x3021ACu);
    ctx->pc = 0x3021A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3021A4u;
            // 0x3021a8: 0x24a52490  addiu       $a1, $a1, 0x2490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (runtime->hasFunction(0x102810u)) {
        auto targetFn = runtime->lookupFunction(0x102810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3021ACu; }
        if (ctx->pc != 0x3021ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102810_0x102810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3021ACu; }
        if (ctx->pc != 0x3021ACu) { return; }
    }
    ctx->pc = 0x3021ACu;
label_3021ac:
    // 0x3021ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3021acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3021b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3021b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3021b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3021b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3021b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3021b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3021bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3021bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3021c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3021c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3021c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3021C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3021C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3021C4u;
            // 0x3021c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3021CCu;
    // 0x3021cc: 0x0  nop
    ctx->pc = 0x3021ccu;
    // NOP
    ctx->pc = 0x3021d0u;
}
