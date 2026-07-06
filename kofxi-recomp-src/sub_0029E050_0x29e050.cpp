#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029E050
// Address: 0x29e050 - 0x29e128
void sub_0029E050_0x29e050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E050_0x29e050");
#endif

    switch (ctx->pc) {
        case 0x29e0b0u: goto label_29e0b0;
        case 0x29e0d0u: goto label_29e0d0;
        case 0x29e0e0u: goto label_29e0e0;
        case 0x29e100u: goto label_29e100;
        case 0x29e108u: goto label_29e108;
        case 0x29e110u: goto label_29e110;
        default: break;
    }

    ctx->pc = 0x29e050u;

    // 0x29e050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29e050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29e054: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x29e054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e058: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29e058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29e05c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29e05cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e060: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29e060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29e064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e068: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29e068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x29e06c: 0xb28826  xor         $s1, $a1, $s2
    ctx->pc = 0x29e06cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 18));
    // 0x29e070: 0x30490001  andi        $t1, $v0, 0x1
    ctx->pc = 0x29e070u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29e074: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x29e074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x29e078: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x29e078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x29e07c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x29e07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x29e080: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29e080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e084: 0x2114023  subu        $t0, $s0, $s1
    ctx->pc = 0x29e084u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x29e088: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x29e088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x29e08c: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29E08Cu;
    {
        const bool branch_taken_0x29e08c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E08Cu;
            // 0x29e090: 0x22042  srl         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e08c) {
            ctx->pc = 0x29E098u;
            goto label_29e098;
        }
    }
    ctx->pc = 0x29E094u;
    // 0x29e094: 0x2503ffec  addiu       $v1, $t0, -0x14
    ctx->pc = 0x29e094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967276));
label_29e098:
    // 0x29e098: 0x5520000f  bnel        $t1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x29E098u;
    {
        const bool branch_taken_0x29e098 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e098) {
            ctx->pc = 0x29E09Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29E098u;
            // 0x29e09c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29E0D8u;
            goto label_29e0d8;
        }
    }
    ctx->pc = 0x29E0A0u;
    // 0x29e0a0: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x29e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
    // 0x29e0a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29e0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e0a8: 0xc0a784a  jal         func_29E128
    ctx->pc = 0x29E0A8u;
    SET_GPR_U32(ctx, 31, 0x29E0B0u);
    ctx->pc = 0x29E0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E0A8u;
            // 0x29e0ac: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E128u;
    if (runtime->hasFunction(0x29E128u)) {
        auto targetFn = runtime->lookupFunction(0x29E128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E0B0u; }
        if (ctx->pc != 0x29E0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E128_0x29e128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E0B0u; }
        if (ctx->pc != 0x29E0B0u) { return; }
    }
    ctx->pc = 0x29E0B0u;
label_29e0b0:
    // 0x29e0b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e0b4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x29e0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e0b8: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x29e0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x29e0bc: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x29e0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29e0c0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x29e0c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e0c4: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x29e0c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29e0c8: 0xc0a7a6c  jal         func_29E9B0
    ctx->pc = 0x29E0C8u;
    SET_GPR_U32(ctx, 31, 0x29E0D0u);
    ctx->pc = 0x29E0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E0C8u;
            // 0x29e0cc: 0x863023  subu        $a2, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E9B0u;
    if (runtime->hasFunction(0x29E9B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E0D0u; }
        if (ctx->pc != 0x29E0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E9B0_0x29e9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E0D0u; }
        if (ctx->pc != 0x29E0D0u) { return; }
    }
    ctx->pc = 0x29E0D0u;
label_29e0d0:
    // 0x29e0d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29E0D0u;
    {
        const bool branch_taken_0x29e0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e0d0) {
            ctx->pc = 0x29E100u;
            goto label_29e100;
        }
    }
    ctx->pc = 0x29E0D8u;
label_29e0d8:
    // 0x29e0d8: 0xc0a784a  jal         func_29E128
    ctx->pc = 0x29E0D8u;
    SET_GPR_U32(ctx, 31, 0x29E0E0u);
    ctx->pc = 0x29E0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E0D8u;
            // 0x29e0dc: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E128u;
    if (runtime->hasFunction(0x29E128u)) {
        auto targetFn = runtime->lookupFunction(0x29E128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E0E0u; }
        if (ctx->pc != 0x29E0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E128_0x29e128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E0E0u; }
        if (ctx->pc != 0x29E0E0u) { return; }
    }
    ctx->pc = 0x29E0E0u;
label_29e0e0:
    // 0x29e0e0: 0x2112023  subu        $a0, $s0, $s1
    ctx->pc = 0x29e0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x29e0e4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x29e0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e0e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29e0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e0ec: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x29e0ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29e0f0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x29e0f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e0f4: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x29e0f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29e0f8: 0xc0a78a2  jal         func_29E288
    ctx->pc = 0x29E0F8u;
    SET_GPR_U32(ctx, 31, 0x29E100u);
    ctx->pc = 0x29E0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E0F8u;
            // 0x29e0fc: 0x863023  subu        $a2, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E288u;
    if (runtime->hasFunction(0x29E288u)) {
        auto targetFn = runtime->lookupFunction(0x29E288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E100u; }
        if (ctx->pc != 0x29E100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E288_0x29e288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E100u; }
        if (ctx->pc != 0x29E100u) { return; }
    }
    ctx->pc = 0x29E100u;
label_29e100:
    // 0x29e100: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x29E100u;
    SET_GPR_U32(ctx, 31, 0x29E108u);
    ctx->pc = 0x29E104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E100u;
            // 0x29e104: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E108u; }
        if (ctx->pc != 0x29E108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E108u; }
        if (ctx->pc != 0x29E108u) { return; }
    }
    ctx->pc = 0x29E108u;
label_29e108:
    // 0x29e108: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x29E108u;
    SET_GPR_U32(ctx, 31, 0x29E110u);
    ctx->pc = 0x29E10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E108u;
            // 0x29e10c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E110u; }
        if (ctx->pc != 0x29E110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E110u; }
        if (ctx->pc != 0x29E110u) { return; }
    }
    ctx->pc = 0x29E110u;
label_29e110:
    // 0x29e110: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29e110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e114: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x29e114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e118: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29e118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e11c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x29e11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29e120: 0x3e00008  jr          $ra
    ctx->pc = 0x29E120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E120u;
            // 0x29e124: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29E128u;
    ctx->pc = 0x29e128u;
}
