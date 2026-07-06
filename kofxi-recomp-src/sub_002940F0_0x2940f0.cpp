#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002940F0
// Address: 0x2940f0 - 0x294238
void sub_002940F0_0x2940f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002940F0_0x2940f0");
#endif

    switch (ctx->pc) {
        case 0x294130u: goto label_294130;
        case 0x294148u: goto label_294148;
        case 0x294194u: goto label_294194;
        case 0x2941a8u: goto label_2941a8;
        case 0x2941c0u: goto label_2941c0;
        case 0x2941e0u: goto label_2941e0;
        case 0x2941f0u: goto label_2941f0;
        case 0x294200u: goto label_294200;
        default: break;
    }

    ctx->pc = 0x2940f0u;

    // 0x2940f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2940f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2940f4: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2940f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2940f8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2940f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2940fc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2940fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294100: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x294100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x294104: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x294104u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x294108: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x294108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x29410c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x29410cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294110: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x294110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x294114: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x294114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294118: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x294118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x29411c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29411cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294120: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x294120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x294124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294128: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x294128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x29412c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x29412cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_294130:
    // 0x294130: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x294130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x294134: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x294134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294138: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x294138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29413c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x29413cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294140: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x294140u;
    SET_GPR_U32(ctx, 31, 0x294148u);
    ctx->pc = 0x294144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294140u;
            // 0x294144: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294148u; }
        if (ctx->pc != 0x294148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294148u; }
        if (ctx->pc != 0x294148u) { return; }
    }
    ctx->pc = 0x294148u;
label_294148:
    // 0x294148: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x294148u;
    {
        const bool branch_taken_0x294148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294148) {
            ctx->pc = 0x29414Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x294148u;
            // 0x29414c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x294178u;
            goto label_294178;
        }
    }
    ctx->pc = 0x294150u;
    // 0x294150: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x294150u;
    {
        const bool branch_taken_0x294150 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x294154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294150u;
            // 0x294154: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294150) {
            ctx->pc = 0x294160u;
            goto label_294160;
        }
    }
    ctx->pc = 0x294158u;
    // 0x294158: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x294158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x29415c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x29415cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_294160:
    // 0x294160: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x294160u;
    {
        const bool branch_taken_0x294160 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x294164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294160u;
            // 0x294164: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294160) {
            ctx->pc = 0x294170u;
            goto label_294170;
        }
    }
    ctx->pc = 0x294168u;
    // 0x294168: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x294168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29416c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x29416cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_294170:
    // 0x294170: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x294170u;
    {
        const bool branch_taken_0x294170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294170u;
            // 0x294174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294170) {
            ctx->pc = 0x294214u;
            goto label_294214;
        }
    }
    ctx->pc = 0x294178u;
label_294178:
    // 0x294178: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x294178u;
    {
        const bool branch_taken_0x294178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294178) {
            ctx->pc = 0x294200u;
            goto label_294200;
        }
    }
    ctx->pc = 0x294180u;
    // 0x294180: 0x12a0001f  beqz        $s5, . + 4 + (0x1F << 2)
    ctx->pc = 0x294180u;
    {
        const bool branch_taken_0x294180 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x294180) {
            ctx->pc = 0x294200u;
            goto label_294200;
        }
    }
    ctx->pc = 0x294188u;
    // 0x294188: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29418c: 0xc0a8812  jal         func_2A2048
    ctx->pc = 0x29418Cu;
    SET_GPR_U32(ctx, 31, 0x294194u);
    ctx->pc = 0x294190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29418Cu;
            // 0x294190: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2048u;
    if (runtime->hasFunction(0x2A2048u)) {
        auto targetFn = runtime->lookupFunction(0x2A2048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294194u; }
        if (ctx->pc != 0x294194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2048_0x2a2048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294194u; }
        if (ctx->pc != 0x294194u) { return; }
    }
    ctx->pc = 0x294194u;
label_294194:
    // 0x294194: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x294194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x294198: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x294198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29419c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29419cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2941a0: 0xc0a817c  jal         func_2A05F0
    ctx->pc = 0x2941A0u;
    SET_GPR_U32(ctx, 31, 0x2941A8u);
    ctx->pc = 0x2941A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2941A0u;
            // 0x2941a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A05F0u;
    if (runtime->hasFunction(0x2A05F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A05F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2941A8u; }
        if (ctx->pc != 0x2941A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A05F0_0x2a05f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2941A8u; }
        if (ctx->pc != 0x2941A8u) { return; }
    }
    ctx->pc = 0x2941A8u;
label_2941a8:
    // 0x2941a8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2941A8u;
    {
        const bool branch_taken_0x2941a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2941ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2941A8u;
            // 0x2941ac: 0x8fa90010  lw          $t1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2941a8) {
            ctx->pc = 0x294200u;
            goto label_294200;
        }
    }
    ctx->pc = 0x2941B0u;
    // 0x2941b0: 0x55200005  bnel        $t1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2941B0u;
    {
        const bool branch_taken_0x2941b0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2941b0) {
            ctx->pc = 0x2941B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2941B0u;
            // 0x2941b4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2941C8u;
            goto label_2941c8;
        }
    }
    ctx->pc = 0x2941B8u;
    // 0x2941b8: 0xc0a88a4  jal         func_2A2290
    ctx->pc = 0x2941B8u;
    SET_GPR_U32(ctx, 31, 0x2941C0u);
    ctx->pc = 0x2941BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2941B8u;
            // 0x2941bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2290u;
    if (runtime->hasFunction(0x2A2290u)) {
        auto targetFn = runtime->lookupFunction(0x2A2290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2941C0u; }
        if (ctx->pc != 0x2941C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2290_0x2a2290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2941C0u; }
        if (ctx->pc != 0x2941C0u) { return; }
    }
    ctx->pc = 0x2941C0u;
label_2941c0:
    // 0x2941c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2941C0u;
    {
        const bool branch_taken_0x2941c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2941c0) {
            ctx->pc = 0x294200u;
            goto label_294200;
        }
    }
    ctx->pc = 0x2941C8u;
label_2941c8:
    // 0x2941c8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2941c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2941cc: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x2941ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2941d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2941d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2941d4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2941d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2941d8: 0xc0a88fc  jal         func_2A23F0
    ctx->pc = 0x2941D8u;
    SET_GPR_U32(ctx, 31, 0x2941E0u);
    ctx->pc = 0x2941DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2941D8u;
            // 0x2941dc: 0x240a0012  addiu       $t2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A23F0u;
    if (runtime->hasFunction(0x2A23F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2941E0u; }
        if (ctx->pc != 0x2941E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A23F0_0x2a23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2941E0u; }
        if (ctx->pc != 0x2941E0u) { return; }
    }
    ctx->pc = 0x2941E0u;
label_2941e0:
    // 0x2941e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2941E0u;
    {
        const bool branch_taken_0x2941e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2941e0) {
            ctx->pc = 0x2941F8u;
            goto label_2941f8;
        }
    }
    ctx->pc = 0x2941E8u;
    // 0x2941e8: 0xc0a88a4  jal         func_2A2290
    ctx->pc = 0x2941E8u;
    SET_GPR_U32(ctx, 31, 0x2941F0u);
    ctx->pc = 0x2941ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2941E8u;
            // 0x2941ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2290u;
    if (runtime->hasFunction(0x2A2290u)) {
        auto targetFn = runtime->lookupFunction(0x2A2290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2941F0u; }
        if (ctx->pc != 0x2941F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2290_0x2a2290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2941F0u; }
        if (ctx->pc != 0x2941F0u) { return; }
    }
    ctx->pc = 0x2941F0u;
label_2941f0:
    // 0x2941f0: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x2941F0u;
    {
        const bool branch_taken_0x2941f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2941F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2941F0u;
            // 0x2941f4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2941f0) {
            ctx->pc = 0x294130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_294130;
        }
    }
    ctx->pc = 0x2941F8u;
label_2941f8:
    // 0x2941f8: 0xc0a88a4  jal         func_2A2290
    ctx->pc = 0x2941F8u;
    SET_GPR_U32(ctx, 31, 0x294200u);
    ctx->pc = 0x2941FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2941F8u;
            // 0x2941fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2290u;
    if (runtime->hasFunction(0x2A2290u)) {
        auto targetFn = runtime->lookupFunction(0x2A2290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294200u; }
        if (ctx->pc != 0x294200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2290_0x2a2290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294200u; }
        if (ctx->pc != 0x294200u) { return; }
    }
    ctx->pc = 0x294200u;
label_294200:
    // 0x294200: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x294200u;
    {
        const bool branch_taken_0x294200 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x294200) {
            ctx->pc = 0x294204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x294200u;
            // 0x294204: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x294208u;
            goto label_294208;
        }
    }
    ctx->pc = 0x294208u;
label_294208:
    // 0x294208: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x294208u;
    {
        const bool branch_taken_0x294208 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x294208) {
            ctx->pc = 0x29420Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x294208u;
            // 0x29420c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x294210u;
            goto label_294210;
        }
    }
    ctx->pc = 0x294210u;
label_294210:
    // 0x294210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294214:
    // 0x294214: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x294214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x294218: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x294218u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29421c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x29421cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x294220: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x294220u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x294224: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x294224u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x294228: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x294228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29422c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x29422cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294230: 0x3e00008  jr          $ra
    ctx->pc = 0x294230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294230u;
            // 0x294234: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294238u;
    ctx->pc = 0x294238u;
}
