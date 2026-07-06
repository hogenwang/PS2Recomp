#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003098C0
// Address: 0x3098c0 - 0x309a20
void sub_003098C0_0x3098c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003098C0_0x3098c0");
#endif

    switch (ctx->pc) {
        case 0x30990cu: goto label_30990c;
        case 0x30993cu: goto label_30993c;
        case 0x309948u: goto label_309948;
        case 0x309954u: goto label_309954;
        case 0x309960u: goto label_309960;
        case 0x309970u: goto label_309970;
        case 0x30997cu: goto label_30997c;
        case 0x309988u: goto label_309988;
        case 0x309994u: goto label_309994;
        case 0x3099b4u: goto label_3099b4;
        case 0x3099c0u: goto label_3099c0;
        case 0x3099ccu: goto label_3099cc;
        case 0x3099d8u: goto label_3099d8;
        default: break;
    }

    ctx->pc = 0x3098c0u;

    // 0x3098c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3098c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3098c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3098c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3098c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3098c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3098cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3098ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3098d0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3098d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3098d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3098d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3098d8: 0x3c1401d3  lui         $s4, 0x1D3
    ctx->pc = 0x3098d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)467 << 16));
    // 0x3098dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3098dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3098e0: 0x3c1301d3  lui         $s3, 0x1D3
    ctx->pc = 0x3098e0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)467 << 16));
    // 0x3098e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3098e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3098e8: 0x3c1201d3  lui         $s2, 0x1D3
    ctx->pc = 0x3098e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)467 << 16));
    // 0x3098ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3098ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3098f0: 0x3c1101d3  lui         $s1, 0x1D3
    ctx->pc = 0x3098f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)467 << 16));
    // 0x3098f4: 0x3c1001d3  lui         $s0, 0x1D3
    ctx->pc = 0x3098f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)467 << 16));
    // 0x3098f8: 0x269439a0  addiu       $s4, $s4, 0x39A0
    ctx->pc = 0x3098f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 14752));
    // 0x3098fc: 0x26732da0  addiu       $s3, $s3, 0x2DA0
    ctx->pc = 0x3098fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 11680));
    // 0x309900: 0x26523aa0  addiu       $s2, $s2, 0x3AA0
    ctx->pc = 0x309900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 15008));
    // 0x309904: 0x263121a0  addiu       $s1, $s1, 0x21A0
    ctx->pc = 0x309904u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8608));
    // 0x309908: 0x26103b20  addiu       $s0, $s0, 0x3B20
    ctx->pc = 0x309908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15136));
label_30990c:
    // 0x30990c: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30990cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x309910: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x309910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x309914: 0x8c633ba0  lw          $v1, 0x3BA0($v1)
    ctx->pc = 0x309914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15264)));
    // 0x309918: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x309918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x30991c: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x30991cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x309920: 0x14a4001f  bne         $a1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x309920u;
    {
        const bool branch_taken_0x309920 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x309920) {
            ctx->pc = 0x3099A0u;
            goto label_3099a0;
        }
    }
    ctx->pc = 0x309928u;
    // 0x309928: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x309928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30992c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30992Cu;
    {
        const bool branch_taken_0x30992c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30992c) {
            ctx->pc = 0x309968u;
            goto label_309968;
        }
    }
    ctx->pc = 0x309934u;
    // 0x309934: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x309934u;
    SET_GPR_U32(ctx, 31, 0x30993Cu);
    ctx->pc = 0x309938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309934u;
            // 0x309938: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30993Cu; }
        if (ctx->pc != 0x30993Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30993Cu; }
        if (ctx->pc != 0x30993Cu) { return; }
    }
    ctx->pc = 0x30993Cu;
label_30993c:
    // 0x30993c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x30993cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x309940: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x309940u;
    SET_GPR_U32(ctx, 31, 0x309948u);
    ctx->pc = 0x309944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309940u;
            // 0x309944: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309948u; }
        if (ctx->pc != 0x309948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309948u; }
        if (ctx->pc != 0x309948u) { return; }
    }
    ctx->pc = 0x309948u;
label_309948:
    // 0x309948: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x309948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30994c: 0xc040454  jal         func_101150
    ctx->pc = 0x30994Cu;
    SET_GPR_U32(ctx, 31, 0x309954u);
    ctx->pc = 0x309950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30994Cu;
            // 0x309950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309954u; }
        if (ctx->pc != 0x309954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309954u; }
        if (ctx->pc != 0x309954u) { return; }
    }
    ctx->pc = 0x309954u;
label_309954:
    // 0x309954: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x309954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x309958: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x309958u;
    SET_GPR_U32(ctx, 31, 0x309960u);
    ctx->pc = 0x30995Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309958u;
            // 0x30995c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309960u; }
        if (ctx->pc != 0x309960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309960u; }
        if (ctx->pc != 0x309960u) { return; }
    }
    ctx->pc = 0x309960u;
label_309960:
    // 0x309960: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x309960u;
    {
        const bool branch_taken_0x309960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309960) {
            ctx->pc = 0x3099D8u;
            goto label_3099d8;
        }
    }
    ctx->pc = 0x309968u;
label_309968:
    // 0x309968: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x309968u;
    SET_GPR_U32(ctx, 31, 0x309970u);
    ctx->pc = 0x30996Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309968u;
            // 0x30996c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309970u; }
        if (ctx->pc != 0x309970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309970u; }
        if (ctx->pc != 0x309970u) { return; }
    }
    ctx->pc = 0x309970u;
label_309970:
    // 0x309970: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x309970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309974: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x309974u;
    SET_GPR_U32(ctx, 31, 0x30997Cu);
    ctx->pc = 0x309978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309974u;
            // 0x309978: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30997Cu; }
        if (ctx->pc != 0x30997Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30997Cu; }
        if (ctx->pc != 0x30997Cu) { return; }
    }
    ctx->pc = 0x30997Cu;
label_30997c:
    // 0x30997c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30997cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309980: 0xc040454  jal         func_101150
    ctx->pc = 0x309980u;
    SET_GPR_U32(ctx, 31, 0x309988u);
    ctx->pc = 0x309984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309980u;
            // 0x309984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309988u; }
        if (ctx->pc != 0x309988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309988u; }
        if (ctx->pc != 0x309988u) { return; }
    }
    ctx->pc = 0x309988u;
label_309988:
    // 0x309988: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x309988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30998c: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x30998Cu;
    SET_GPR_U32(ctx, 31, 0x309994u);
    ctx->pc = 0x309990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30998Cu;
            // 0x309990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309994u; }
        if (ctx->pc != 0x309994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309994u; }
        if (ctx->pc != 0x309994u) { return; }
    }
    ctx->pc = 0x309994u;
label_309994:
    // 0x309994: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x309994u;
    {
        const bool branch_taken_0x309994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309994) {
            ctx->pc = 0x3099D8u;
            goto label_3099d8;
        }
    }
    ctx->pc = 0x30999Cu;
    // 0x30999c: 0x0  nop
    ctx->pc = 0x30999cu;
    // NOP
label_3099a0:
    // 0x3099a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3099a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3099a4: 0x14a3000c  bne         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3099A4u;
    {
        const bool branch_taken_0x3099a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3099a4) {
            ctx->pc = 0x3099D8u;
            goto label_3099d8;
        }
    }
    ctx->pc = 0x3099ACu;
    // 0x3099ac: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3099ACu;
    SET_GPR_U32(ctx, 31, 0x3099B4u);
    ctx->pc = 0x3099B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3099ACu;
            // 0x3099b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3099B4u; }
        if (ctx->pc != 0x3099B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3099B4u; }
        if (ctx->pc != 0x3099B4u) { return; }
    }
    ctx->pc = 0x3099B4u;
label_3099b4:
    // 0x3099b4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3099b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3099b8: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x3099B8u;
    SET_GPR_U32(ctx, 31, 0x3099C0u);
    ctx->pc = 0x3099BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3099B8u;
            // 0x3099bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3099C0u; }
        if (ctx->pc != 0x3099C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3099C0u; }
        if (ctx->pc != 0x3099C0u) { return; }
    }
    ctx->pc = 0x3099C0u;
label_3099c0:
    // 0x3099c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3099c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3099c4: 0xc040454  jal         func_101150
    ctx->pc = 0x3099C4u;
    SET_GPR_U32(ctx, 31, 0x3099CCu);
    ctx->pc = 0x3099C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3099C4u;
            // 0x3099c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3099CCu; }
        if (ctx->pc != 0x3099CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3099CCu; }
        if (ctx->pc != 0x3099CCu) { return; }
    }
    ctx->pc = 0x3099CCu;
label_3099cc:
    // 0x3099cc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3099ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3099d0: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x3099D0u;
    SET_GPR_U32(ctx, 31, 0x3099D8u);
    ctx->pc = 0x3099D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3099D0u;
            // 0x3099d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3099D8u; }
        if (ctx->pc != 0x3099D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3099D8u; }
        if (ctx->pc != 0x3099D8u) { return; }
    }
    ctx->pc = 0x3099D8u;
label_3099d8:
    // 0x3099d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3099d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3099dc: 0x2aa30007  slti        $v1, $s5, 0x7
    ctx->pc = 0x3099dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x3099e0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x3099e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x3099e4: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x3099e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x3099e8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3099e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3099ec: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x3099ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x3099f0: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x3099F0u;
    {
        const bool branch_taken_0x3099f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3099F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3099F0u;
            // 0x3099f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3099f0) {
            ctx->pc = 0x30990Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30990c;
        }
    }
    ctx->pc = 0x3099F8u;
    // 0x3099f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3099f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3099fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3099fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x309a00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x309a00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x309a04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x309a04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309a08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x309a08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309a0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x309a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309a10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x309a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309a14: 0x3e00008  jr          $ra
    ctx->pc = 0x309A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309A14u;
            // 0x309a18: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309A1Cu;
    // 0x309a1c: 0x0  nop
    ctx->pc = 0x309a1cu;
    // NOP
    ctx->pc = 0x309a20u;
}
