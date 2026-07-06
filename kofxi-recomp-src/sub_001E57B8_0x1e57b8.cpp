#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E57B8
// Address: 0x1e57b8 - 0x1e5968
void sub_001E57B8_0x1e57b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E57B8_0x1e57b8");
#endif

    switch (ctx->pc) {
        case 0x1e57e8u: goto label_1e57e8;
        case 0x1e5828u: goto label_1e5828;
        case 0x1e5830u: goto label_1e5830;
        case 0x1e5838u: goto label_1e5838;
        case 0x1e584cu: goto label_1e584c;
        case 0x1e5858u: goto label_1e5858;
        case 0x1e5860u: goto label_1e5860;
        case 0x1e58a0u: goto label_1e58a0;
        case 0x1e58bcu: goto label_1e58bc;
        case 0x1e58d4u: goto label_1e58d4;
        case 0x1e58e8u: goto label_1e58e8;
        case 0x1e5908u: goto label_1e5908;
        case 0x1e5918u: goto label_1e5918;
        case 0x1e5938u: goto label_1e5938;
        case 0x1e5950u: goto label_1e5950;
        default: break;
    }

    ctx->pc = 0x1e57b8u;

    // 0x1e57b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e57b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e57bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e57bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e57c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e57c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e57c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e57c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e57c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e57c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e57cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e57ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e57d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e57d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e57d4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e57d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e57d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e57d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e57dc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1e57dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e57e0: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E57E0u;
    SET_GPR_U32(ctx, 31, 0x1E57E8u);
    ctx->pc = 0x1E57E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E57E0u;
            // 0x1e57e4: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E57E8u; }
        if (ctx->pc != 0x1E57E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E57E8u; }
        if (ctx->pc != 0x1E57E8u) { return; }
    }
    ctx->pc = 0x1E57E8u;
label_1e57e8:
    // 0x1e57e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e57e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e57ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e57ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e57f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e57f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e57f4: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E57F4u;
    {
        const bool branch_taken_0x1e57f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E57F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E57F4u;
            // 0x1e57f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57f4) {
            ctx->pc = 0x1E5828u;
            goto label_1e5828;
        }
    }
    ctx->pc = 0x1E57FCu;
    // 0x1e57fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e57fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e5800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5808: 0x2484e338  addiu       $a0, $a0, -0x1CC8
    ctx->pc = 0x1e5808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959928));
    // 0x1e580c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e580cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5810: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e5810u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e5814: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e5814u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5818: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e5818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e581c: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E581Cu;
    ctx->pc = 0x1E5820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E581Cu;
            // 0x1e5820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E5824u;
    // 0x1e5824: 0x0  nop
    ctx->pc = 0x1e5824u;
    // NOP
label_1e5828:
    // 0x1e5828: 0xc0786b2  jal         func_1E1AC8
    ctx->pc = 0x1E5828u;
    SET_GPR_U32(ctx, 31, 0x1E5830u);
    ctx->pc = 0x1E1AC8u;
    if (runtime->hasFunction(0x1E1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1E1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5830u; }
        if (ctx->pc != 0x1E5830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1AC8_0x1e1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5830u; }
        if (ctx->pc != 0x1E5830u) { return; }
    }
    ctx->pc = 0x1E5830u;
label_1e5830:
    // 0x1e5830: 0xc0718ae  jal         func_1C62B8
    ctx->pc = 0x1E5830u;
    SET_GPR_U32(ctx, 31, 0x1E5838u);
    ctx->pc = 0x1E5834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5830u;
            // 0x1e5834: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C62B8u;
    if (runtime->hasFunction(0x1C62B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C62B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5838u; }
        if (ctx->pc != 0x1E5838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C62B8_0x1c62b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5838u; }
        if (ctx->pc != 0x1E5838u) { return; }
    }
    ctx->pc = 0x1E5838u;
label_1e5838:
    // 0x1e5838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e583c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e583cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5840: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1e5840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5844: 0xc0795cc  jal         func_1E5730
    ctx->pc = 0x1E5844u;
    SET_GPR_U32(ctx, 31, 0x1E584Cu);
    ctx->pc = 0x1E5848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5844u;
            // 0x1e5848: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5730u;
    if (runtime->hasFunction(0x1E5730u)) {
        auto targetFn = runtime->lookupFunction(0x1E5730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E584Cu; }
        if (ctx->pc != 0x1E584Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5730_0x1e5730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E584Cu; }
        if (ctx->pc != 0x1E584Cu) { return; }
    }
    ctx->pc = 0x1E584Cu;
label_1e584c:
    // 0x1e584c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e584cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5850: 0xc0794e8  jal         func_1E53A0
    ctx->pc = 0x1E5850u;
    SET_GPR_U32(ctx, 31, 0x1E5858u);
    ctx->pc = 0x1E5854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5850u;
            // 0x1e5854: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E53A0u;
    if (runtime->hasFunction(0x1E53A0u)) {
        auto targetFn = runtime->lookupFunction(0x1E53A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5858u; }
        if (ctx->pc != 0x1E5858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E53A0_0x1e53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5858u; }
        if (ctx->pc != 0x1E5858u) { return; }
    }
    ctx->pc = 0x1E5858u;
label_1e5858:
    // 0x1e5858: 0xc0794c0  jal         func_1E5300
    ctx->pc = 0x1E5858u;
    SET_GPR_U32(ctx, 31, 0x1E5860u);
    ctx->pc = 0x1E585Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5858u;
            // 0x1e585c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5300u;
    if (runtime->hasFunction(0x1E5300u)) {
        auto targetFn = runtime->lookupFunction(0x1E5300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5860u; }
        if (ctx->pc != 0x1E5860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5300_0x1e5300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5860u; }
        if (ctx->pc != 0x1E5860u) { return; }
    }
    ctx->pc = 0x1E5860u;
label_1e5860:
    // 0x1e5860: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e5860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5864: 0x8e0304e4  lw          $v1, 0x4E4($s0)
    ctx->pc = 0x1e5864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1252)));
    // 0x1e5868: 0xae0204e8  sw          $v0, 0x4E8($s0)
    ctx->pc = 0x1e5868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1256), GPR_U32(ctx, 2));
    // 0x1e586c: 0xae1304f8  sw          $s3, 0x4F8($s0)
    ctx->pc = 0x1e586cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1272), GPR_U32(ctx, 19));
    // 0x1e5870: 0xae1404fc  sw          $s4, 0x4FC($s0)
    ctx->pc = 0x1e5870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1276), GPR_U32(ctx, 20));
    // 0x1e5874: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5874u;
    {
        const bool branch_taken_0x1e5874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5874u;
            // 0x1e5878: 0xae1104e0  sw          $s1, 0x4E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1248), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5874) {
            ctx->pc = 0x1E5880u;
            goto label_1e5880;
        }
    }
    ctx->pc = 0x1E587Cu;
    // 0x1e587c: 0xae1104ec  sw          $s1, 0x4EC($s0)
    ctx->pc = 0x1e587cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1260), GPR_U32(ctx, 17));
label_1e5880:
    // 0x1e5880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5884: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5888: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e5888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e588c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e588cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e5890: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e5890u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5894: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e5894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e5898: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E589Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5898u;
            // 0x1e589c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E58A0u;
label_1e58a0:
    // 0x1e58a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e58a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e58a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e58a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e58a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e58a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e58ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e58acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e58b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e58b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e58b4: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E58B4u;
    SET_GPR_U32(ctx, 31, 0x1E58BCu);
    ctx->pc = 0x1E58B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E58B4u;
            // 0x1e58b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E58BCu; }
        if (ctx->pc != 0x1E58BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E58BCu; }
        if (ctx->pc != 0x1E58BCu) { return; }
    }
    ctx->pc = 0x1E58BCu;
label_1e58bc:
    // 0x1e58bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e58bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e58c0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E58C0u;
    {
        const bool branch_taken_0x1e58c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E58C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E58C0u;
            // 0x1e58c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e58c0) {
            ctx->pc = 0x1E58E0u;
            goto label_1e58e0;
        }
    }
    ctx->pc = 0x1E58C8u;
    // 0x1e58c8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e58c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e58cc: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E58CCu;
    SET_GPR_U32(ctx, 31, 0x1E58D4u);
    ctx->pc = 0x1E58D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E58CCu;
            // 0x1e58d0: 0x2484e370  addiu       $a0, $a0, -0x1C90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E58D4u; }
        if (ctx->pc != 0x1E58D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E58D4u; }
        if (ctx->pc != 0x1E58D4u) { return; }
    }
    ctx->pc = 0x1E58D4u;
label_1e58d4:
    // 0x1e58d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E58D4u;
    {
        const bool branch_taken_0x1e58d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E58D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E58D4u;
            // 0x1e58d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e58d4) {
            ctx->pc = 0x1E5938u;
            goto label_1e5938;
        }
    }
    ctx->pc = 0x1E58DCu;
    // 0x1e58dc: 0x0  nop
    ctx->pc = 0x1e58dcu;
    // NOP
label_1e58e0:
    // 0x1e58e0: 0xc079564  jal         func_1E5590
    ctx->pc = 0x1E58E0u;
    SET_GPR_U32(ctx, 31, 0x1E58E8u);
    ctx->pc = 0x1E5590u;
    if (runtime->hasFunction(0x1E5590u)) {
        auto targetFn = runtime->lookupFunction(0x1E5590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E58E8u; }
        if (ctx->pc != 0x1E58E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5590_0x1e5590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E58E8u; }
        if (ctx->pc != 0x1E58E8u) { return; }
    }
    ctx->pc = 0x1E58E8u;
label_1e58e8:
    // 0x1e58e8: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x1e58e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e58ec: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E58ECu;
    {
        const bool branch_taken_0x1e58ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E58F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E58ECu;
            // 0x1e58f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e58ec) {
            ctx->pc = 0x1E5938u;
            goto label_1e5938;
        }
    }
    ctx->pc = 0x1E58F4u;
    // 0x1e58f4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E58F4u;
    {
        const bool branch_taken_0x1e58f4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1E58F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E58F4u;
            // 0x1e58f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e58f4) {
            ctx->pc = 0x1E5910u;
            goto label_1e5910;
        }
    }
    ctx->pc = 0x1E58FCu;
    // 0x1e58fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e58fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e5900: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E5900u;
    SET_GPR_U32(ctx, 31, 0x1E5908u);
    ctx->pc = 0x1E5904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5900u;
            // 0x1e5904: 0x2484e3a0  addiu       $a0, $a0, -0x1C60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5908u; }
        if (ctx->pc != 0x1E5908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5908u; }
        if (ctx->pc != 0x1E5908u) { return; }
    }
    ctx->pc = 0x1E5908u;
label_1e5908:
    // 0x1e5908: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E5908u;
    {
        const bool branch_taken_0x1e5908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E590Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5908u;
            // 0x1e590c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5908) {
            ctx->pc = 0x1E5938u;
            goto label_1e5938;
        }
    }
    ctx->pc = 0x1E5910u;
label_1e5910:
    // 0x1e5910: 0xc07965a  jal         func_1E5968
    ctx->pc = 0x1E5910u;
    SET_GPR_U32(ctx, 31, 0x1E5918u);
    ctx->pc = 0x1E5914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5910u;
            // 0x1e5914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5968u;
    if (runtime->hasFunction(0x1E5968u)) {
        auto targetFn = runtime->lookupFunction(0x1E5968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5918u; }
        if (ctx->pc != 0x1E5918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5968_0x1e5968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5918u; }
        if (ctx->pc != 0x1E5918u) { return; }
    }
    ctx->pc = 0x1E5918u;
label_1e5918:
    // 0x1e5918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e5918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e591c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e591cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e5920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5924: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5928: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e592c: 0x8079660  j           func_1E5980
    ctx->pc = 0x1E592Cu;
    ctx->pc = 0x1E5930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E592Cu;
            // 0x1e5930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5980u;
    {
        auto targetFn = runtime->lookupFunction(0x1E5980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E5934u;
    // 0x1e5934: 0x0  nop
    ctx->pc = 0x1e5934u;
    // NOP
label_1e5938:
    // 0x1e5938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e593c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e593cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5944: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5944u;
            // 0x1e5948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E594Cu;
    // 0x1e594c: 0x0  nop
    ctx->pc = 0x1e594cu;
    // NOP
label_1e5950:
    // 0x1e5950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e5950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e5954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5958: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x1e5958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1e595c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e595cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5960: 0x807191e  j           func_1C6478
    ctx->pc = 0x1E5960u;
    ctx->pc = 0x1E5964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5960u;
            // 0x1e5964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6478u;
    if (runtime->hasFunction(0x1C6478u)) {
        auto targetFn = runtime->lookupFunction(0x1C6478u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C6478_0x1c6478(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E5968u;
    ctx->pc = 0x1e5968u;
}
