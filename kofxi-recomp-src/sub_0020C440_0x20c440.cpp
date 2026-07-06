#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020C440
// Address: 0x20c440 - 0x20c550
void sub_0020C440_0x20c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C440_0x20c440");
#endif

    switch (ctx->pc) {
        case 0x20c4b4u: goto label_20c4b4;
        case 0x20c4bcu: goto label_20c4bc;
        case 0x20c4ccu: goto label_20c4cc;
        case 0x20c4d8u: goto label_20c4d8;
        case 0x20c50cu: goto label_20c50c;
        case 0x20c514u: goto label_20c514;
        case 0x20c524u: goto label_20c524;
        case 0x20c530u: goto label_20c530;
        default: break;
    }

    ctx->pc = 0x20c440u;

    // 0x20c440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20c440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20c444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20c444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20c448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20c448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20c44c: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
    ctx->pc = 0x20C44Cu;
    {
        const bool branch_taken_0x20c44c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C44Cu;
            // 0x20c450: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c44c) {
            ctx->pc = 0x20C530u;
            goto label_20c530;
        }
    }
    ctx->pc = 0x20C454u;
    // 0x20c454: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x20c454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x20c458: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x20c458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x20c45c: 0x8c47b7e8  lw          $a3, -0x4818($v0)
    ctx->pc = 0x20c45cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948840)));
    // 0x20c460: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x20c460u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20c464: 0x3466b400  ori         $a2, $v1, 0xB400
    ctx->pc = 0x20c464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x20c468: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x20c468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x20c46c: 0x519c0  sll         $v1, $a1, 7
    ctx->pc = 0x20c46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x20c470: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x20c470u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20c474: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x20c474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x20c478: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x20c478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x20c47c: 0x2442a860  addiu       $v0, $v0, -0x57A0
    ctx->pc = 0x20c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944864));
    // 0x20c480: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20c480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20c484: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x20c484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x20c488: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20c488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20c48c: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x20c48cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20c490: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x20c490u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20c494: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20c494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20c498: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20c498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c49c: 0x2484a390  addiu       $a0, $a0, -0x5C70
    ctx->pc = 0x20c49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943632));
    // 0x20c4a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20c4a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c4a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20c4a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c4a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20c4a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c4ac: 0xc040532  jal         func_1014C8
    ctx->pc = 0x20C4ACu;
    SET_GPR_U32(ctx, 31, 0x20C4B4u);
    ctx->pc = 0x20C4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C4ACu;
            // 0x20c4b0: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C4B4u; }
        if (ctx->pc != 0x20C4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C4B4u; }
        if (ctx->pc != 0x20C4B4u) { return; }
    }
    ctx->pc = 0x20C4B4u;
label_20c4b4:
    // 0x20c4b4: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x20C4B4u;
    SET_GPR_U32(ctx, 31, 0x20C4BCu);
    ctx->pc = 0x20C4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C4B4u;
            // 0x20c4b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C4BCu; }
        if (ctx->pc != 0x20C4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C4BCu; }
        if (ctx->pc != 0x20C4BCu) { return; }
    }
    ctx->pc = 0x20C4BCu;
label_20c4bc:
    // 0x20c4bc: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20c4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20c4c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c4c4: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x20C4C4u;
    SET_GPR_U32(ctx, 31, 0x20C4CCu);
    ctx->pc = 0x20C4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C4C4u;
            // 0x20c4c8: 0x2484a390  addiu       $a0, $a0, -0x5C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C4CCu; }
        if (ctx->pc != 0x20C4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C4CCu; }
        if (ctx->pc != 0x20C4CCu) { return; }
    }
    ctx->pc = 0x20C4CCu;
label_20c4cc:
    // 0x20c4cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c4d0: 0xc040454  jal         func_101150
    ctx->pc = 0x20C4D0u;
    SET_GPR_U32(ctx, 31, 0x20C4D8u);
    ctx->pc = 0x20C4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C4D0u;
            // 0x20c4d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C4D8u; }
        if (ctx->pc != 0x20C4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C4D8u; }
        if (ctx->pc != 0x20C4D8u) { return; }
    }
    ctx->pc = 0x20C4D8u;
label_20c4d8:
    // 0x20c4d8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x20c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x20c4dc: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20c4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20c4e0: 0x2442a850  addiu       $v0, $v0, -0x57B0
    ctx->pc = 0x20c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944848));
    // 0x20c4e4: 0x2484a3f0  addiu       $a0, $a0, -0x5C10
    ctx->pc = 0x20c4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943728));
    // 0x20c4e8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20c4ec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20c4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20c4f0: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x20c4f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20c4f4: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x20c4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20c4f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20c4f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c4fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20c4fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c500: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x20c500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20c504: 0xc040532  jal         func_1014C8
    ctx->pc = 0x20C504u;
    SET_GPR_U32(ctx, 31, 0x20C50Cu);
    ctx->pc = 0x20C508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C504u;
            // 0x20c508: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C50Cu; }
        if (ctx->pc != 0x20C50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C50Cu; }
        if (ctx->pc != 0x20C50Cu) { return; }
    }
    ctx->pc = 0x20C50Cu;
label_20c50c:
    // 0x20c50c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x20C50Cu;
    SET_GPR_U32(ctx, 31, 0x20C514u);
    ctx->pc = 0x20C510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C50Cu;
            // 0x20c510: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C514u; }
        if (ctx->pc != 0x20C514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C514u; }
        if (ctx->pc != 0x20C514u) { return; }
    }
    ctx->pc = 0x20C514u;
label_20c514:
    // 0x20c514: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20c514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20c518: 0x26250400  addiu       $a1, $s1, 0x400
    ctx->pc = 0x20c518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x20c51c: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x20C51Cu;
    SET_GPR_U32(ctx, 31, 0x20C524u);
    ctx->pc = 0x20C520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C51Cu;
            // 0x20c520: 0x2484a3f0  addiu       $a0, $a0, -0x5C10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C524u; }
        if (ctx->pc != 0x20C524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C524u; }
        if (ctx->pc != 0x20C524u) { return; }
    }
    ctx->pc = 0x20C524u;
label_20c524:
    // 0x20c524: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c528: 0xc040454  jal         func_101150
    ctx->pc = 0x20C528u;
    SET_GPR_U32(ctx, 31, 0x20C530u);
    ctx->pc = 0x20C52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C528u;
            // 0x20c52c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C530u; }
        if (ctx->pc != 0x20C530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C530u; }
        if (ctx->pc != 0x20C530u) { return; }
    }
    ctx->pc = 0x20C530u;
label_20c530:
    // 0x20c530: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20c530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20c534: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20c534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c538: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20c538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c53c: 0x3e00008  jr          $ra
    ctx->pc = 0x20C53Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C53Cu;
            // 0x20c540: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20C544u;
    // 0x20c544: 0x0  nop
    ctx->pc = 0x20c544u;
    // NOP
    // 0x20c548: 0x0  nop
    ctx->pc = 0x20c548u;
    // NOP
    // 0x20c54c: 0x0  nop
    ctx->pc = 0x20c54cu;
    // NOP
    ctx->pc = 0x20c550u;
}
