#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EAEE0
// Address: 0x1eaee0 - 0x1eb470
void sub_001EAEE0_0x1eaee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAEE0_0x1eaee0");
#endif

    switch (ctx->pc) {
        case 0x1eaf18u: goto label_1eaf18;
        case 0x1eaf78u: goto label_1eaf78;
        case 0x1eaf8cu: goto label_1eaf8c;
        case 0x1eafc4u: goto label_1eafc4;
        case 0x1eb0c0u: goto label_1eb0c0;
        case 0x1eb120u: goto label_1eb120;
        case 0x1eb130u: goto label_1eb130;
        case 0x1eb180u: goto label_1eb180;
        case 0x1eb194u: goto label_1eb194;
        case 0x1eb1b8u: goto label_1eb1b8;
        case 0x1eb218u: goto label_1eb218;
        case 0x1eb22cu: goto label_1eb22c;
        case 0x1eb264u: goto label_1eb264;
        case 0x1eb368u: goto label_1eb368;
        case 0x1eb3c8u: goto label_1eb3c8;
        case 0x1eb3d8u: goto label_1eb3d8;
        case 0x1eb424u: goto label_1eb424;
        case 0x1eb438u: goto label_1eb438;
        case 0x1eb458u: goto label_1eb458;
        case 0x1eb460u: goto label_1eb460;
        default: break;
    }

    ctx->pc = 0x1eaee0u;

    // 0x1eaee0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1eaee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1eaee4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1eaee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eaee8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eaee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eaeec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eaeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eaef0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eaef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eaef4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1eaef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1eaef8: 0x24841378  addiu       $a0, $a0, 0x1378
    ctx->pc = 0x1eaef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4984));
    // 0x1eaefc: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1eaefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1eaf00: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EAF00u;
    {
        const bool branch_taken_0x1eaf00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EAF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF00u;
            // 0x1eaf04: 0x461821  addu        $v1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf00) {
            ctx->pc = 0x1EAF0Cu;
            goto label_1eaf0c;
        }
    }
    ctx->pc = 0x1EAF08u;
    // 0x1eaf08: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x1eaf08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_1eaf0c:
    // 0x1eaf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EAF14u;
    // 0x1eaf14: 0x0  nop
    ctx->pc = 0x1eaf14u;
    // NOP
label_1eaf18:
    // 0x1eaf18: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1eaf18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1eaf1c: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1eaf1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1eaf20: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1eaf20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eaf24: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1eaf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1eaf28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eaf28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eaf2c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1eaf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1eaf30: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eaf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eaf34: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1eaf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1eaf38: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1eaf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1eaf3c: 0x24871368  addiu       $a3, $a0, 0x1368
    ctx->pc = 0x1eaf3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4968));
    // 0x1eaf40: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1eaf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1eaf44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eaf44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eaf48: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1eaf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1eaf4c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1eaf4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1eaf50: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1eaf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1eaf54: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1eaf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1eaf58: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1eaf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1eaf5c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1eaf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1eaf60: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1eaf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1eaf64: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EAF64u;
    {
        const bool branch_taken_0x1eaf64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF64u;
            // 0x1eaf68: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf64) {
            ctx->pc = 0x1EAF80u;
            goto label_1eaf80;
        }
    }
    ctx->pc = 0x1EAF6Cu;
    // 0x1eaf6c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1eaf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1eaf70: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1EAF70u;
    SET_GPR_U32(ctx, 31, 0x1EAF78u);
    ctx->pc = 0x1EAF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF70u;
            // 0x1eaf74: 0x34a50401  ori         $a1, $a1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1025);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF78u; }
        if (ctx->pc != 0x1EAF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED700_0x1ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF78u; }
        if (ctx->pc != 0x1EAF78u) { return; }
    }
    ctx->pc = 0x1EAF78u;
label_1eaf78:
    // 0x1eaf78: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1EAF78u;
    {
        const bool branch_taken_0x1eaf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF78u;
            // 0x1eaf7c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf78) {
            ctx->pc = 0x1EB094u;
            goto label_1eb094;
        }
    }
    ctx->pc = 0x1EAF80u;
label_1eaf80:
    // 0x1eaf80: 0x24f00010  addiu       $s0, $a3, 0x10
    ctx->pc = 0x1eaf80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1eaf84: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1EAF84u;
    SET_GPR_U32(ctx, 31, 0x1EAF8Cu);
    ctx->pc = 0x1EAF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF84u;
            // 0x1eaf88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF8Cu; }
        if (ctx->pc != 0x1EAF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF8Cu; }
        if (ctx->pc != 0x1EAF8Cu) { return; }
    }
    ctx->pc = 0x1EAF8Cu;
label_1eaf8c:
    // 0x1eaf8c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1eaf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1eaf90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1eaf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaf94: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1eaf94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1eaf98: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1eaf98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1eaf9c: 0x8e13002c  lw          $s3, 0x2C($s0)
    ctx->pc = 0x1eaf9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1eafa0: 0x8e14001c  lw          $s4, 0x1C($s0)
    ctx->pc = 0x1eafa0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1eafa4: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x1eafa4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1eafa8: 0x8e17000c  lw          $s7, 0xC($s0)
    ctx->pc = 0x1eafa8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1eafac: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1eafacu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1eafb0: 0x8e1e0014  lw          $fp, 0x14($s0)
    ctx->pc = 0x1eafb0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eafb4: 0x8e160020  lw          $s6, 0x20($s0)
    ctx->pc = 0x1eafb4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1eafb8: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x1eafb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x1eafbc: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1EAFBCu;
    SET_GPR_U32(ctx, 31, 0x1EAFC4u);
    ctx->pc = 0x1EAFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAFBCu;
            // 0x1eafc0: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAFC4u; }
        if (ctx->pc != 0x1EAFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAFC4u; }
        if (ctx->pc != 0x1EAFC4u) { return; }
    }
    ctx->pc = 0x1EAFC4u;
label_1eafc4:
    // 0x1eafc4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1eafc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1eafc8: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x1eafc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x1eafcc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1eafccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1eafd0: 0xaeb20008  sw          $s2, 0x8($s5)
    ctx->pc = 0x1eafd0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
    // 0x1eafd4: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1eafd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1eafd8: 0xaeb70004  sw          $s7, 0x4($s5)
    ctx->pc = 0x1eafd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 23));
    // 0x1eafdc: 0xaeb10024  sw          $s1, 0x24($s5)
    ctx->pc = 0x1eafdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 17));
    // 0x1eafe0: 0xaeb30028  sw          $s3, 0x28($s5)
    ctx->pc = 0x1eafe0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 19));
    // 0x1eafe4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EAFE4u;
    {
        const bool branch_taken_0x1eafe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAFE4u;
            // 0x1eafe8: 0x7ba50010  lq          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eafe4) {
            ctx->pc = 0x1EB000u;
            goto label_1eb000;
        }
    }
    ctx->pc = 0x1EAFECu;
    // 0x1eafec: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x1eafecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
    // 0x1eaff0: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x1eaff0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x1eaff4: 0xaea00014  sw          $zero, 0x14($s5)
    ctx->pc = 0x1eaff4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
    // 0x1eaff8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1EAFF8u;
    {
        const bool branch_taken_0x1eaff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAFF8u;
            // 0x1eaffc: 0xaea00018  sw          $zero, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaff8) {
            ctx->pc = 0x1EB044u;
            goto label_1eb044;
        }
    }
    ctx->pc = 0x1EB000u;
label_1eb000:
    // 0x1eb000: 0x2d0102a  slt         $v0, $s6, $s0
    ctx->pc = 0x1eb000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1eb004: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EB004u;
    {
        const bool branch_taken_0x1eb004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb004) {
            ctx->pc = 0x1EB008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB004u;
            // 0x1eb008: 0x2961023  subu        $v0, $s4, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB050u;
            goto label_1eb050;
        }
    }
    ctx->pc = 0x1EB00Cu;
    // 0x1eb00c: 0x2161023  subu        $v0, $s0, $s6
    ctx->pc = 0x1eb00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x1eb010: 0x2ae30009  slti        $v1, $s7, 0x9
    ctx->pc = 0x1eb010u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1eb014: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1eb014u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x1eb018: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB018u;
    {
        const bool branch_taken_0x1eb018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB018u;
            // 0x1eb01c: 0x3d61021  addu        $v0, $fp, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb018) {
            ctx->pc = 0x1EB028u;
            goto label_1eb028;
        }
    }
    ctx->pc = 0x1EB020u;
    // 0x1eb020: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x1eb020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x1eb024: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1eb024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_1eb028:
    // 0x1eb028: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x1eb028u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x1eb02c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB02Cu;
    {
        const bool branch_taken_0x1eb02c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB02Cu;
            // 0x1eb030: 0xb61021  addu        $v0, $a1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb02c) {
            ctx->pc = 0x1EB03Cu;
            goto label_1eb03c;
        }
    }
    ctx->pc = 0x1EB034u;
    // 0x1eb034: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x1eb034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x1eb038: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1eb038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1eb03c:
    // 0x1eb03c: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x1eb03cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x1eb040: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x1eb040u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
label_1eb044:
    // 0x1eb044: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x1eb044u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x1eb048: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EB048u;
    {
        const bool branch_taken_0x1eb048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB048u;
            // 0x1eb04c: 0xaea0001c  sw          $zero, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb048) {
            ctx->pc = 0x1EB08Cu;
            goto label_1eb08c;
        }
    }
    ctx->pc = 0x1EB050u;
label_1eb050:
    // 0x1eb050: 0x2ae30009  slti        $v1, $s7, 0x9
    ctx->pc = 0x1eb050u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1eb054: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1eb054u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x1eb058: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB058u;
    {
        const bool branch_taken_0x1eb058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB058u;
            // 0x1eb05c: 0x3d61021  addu        $v0, $fp, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb058) {
            ctx->pc = 0x1EB068u;
            goto label_1eb068;
        }
    }
    ctx->pc = 0x1EB060u;
    // 0x1eb060: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x1eb060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x1eb064: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1eb064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_1eb068:
    // 0x1eb068: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x1eb068u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x1eb06c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB06Cu;
    {
        const bool branch_taken_0x1eb06c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB06Cu;
            // 0x1eb070: 0xb61021  addu        $v0, $a1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb06c) {
            ctx->pc = 0x1EB07Cu;
            goto label_1eb07c;
        }
    }
    ctx->pc = 0x1EB074u;
    // 0x1eb074: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x1eb074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x1eb078: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1eb078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1eb07c:
    // 0x1eb07c: 0xaea50020  sw          $a1, 0x20($s5)
    ctx->pc = 0x1eb07cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 5));
    // 0x1eb080: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x1eb080u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x1eb084: 0xaeb00010  sw          $s0, 0x10($s5)
    ctx->pc = 0x1eb084u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
    // 0x1eb088: 0xaebe001c  sw          $fp, 0x1C($s5)
    ctx->pc = 0x1eb088u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 30));
label_1eb08c:
    // 0x1eb08c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eb08cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb090: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1eb090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1eb094:
    // 0x1eb094: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1eb094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eb098: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1eb098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb09c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1eb09cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eb0a0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1eb0a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eb0a4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1eb0a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eb0a8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1eb0a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eb0ac: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1eb0acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1eb0b0: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1eb0b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1eb0b4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1eb0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1eb0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB0B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB0B8u;
            // 0x1eb0bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB0C0u;
label_1eb0c0:
    // 0x1eb0c0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1eb0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1eb0c4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eb0c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eb0c8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1eb0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1eb0cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1eb0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1eb0d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eb0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eb0d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1eb0d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1eb0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1eb0dc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1eb0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1eb0e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eb0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eb0e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1eb0e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0e8: 0x26461368  addiu       $a2, $s2, 0x1368
    ctx->pc = 0x1eb0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4968));
    // 0x1eb0ec: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1eb0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1eb0f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1eb0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1eb0f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eb0f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1eb0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1eb0fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1eb0fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb100: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1EB100u;
    {
        const bool branch_taken_0x1eb100 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB100u;
            // 0x1eb104: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb100) {
            ctx->pc = 0x1EB198u;
            goto label_1eb198;
        }
    }
    ctx->pc = 0x1EB108u;
    // 0x1eb108: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1eb108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1eb10c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB10Cu;
    {
        const bool branch_taken_0x1eb10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb10c) {
            ctx->pc = 0x1EB110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB10Cu;
            // 0x1eb110: 0x24d00010  addiu       $s0, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB128u;
            goto label_1eb128;
        }
    }
    ctx->pc = 0x1EB114u;
    // 0x1eb114: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1eb114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1eb118: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1EB118u;
    SET_GPR_U32(ctx, 31, 0x1EB120u);
    ctx->pc = 0x1EB11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB118u;
            // 0x1eb11c: 0x34a50401  ori         $a1, $a1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1025);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB120u; }
        if (ctx->pc != 0x1EB120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED700_0x1ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB120u; }
        if (ctx->pc != 0x1EB120u) { return; }
    }
    ctx->pc = 0x1EB120u;
label_1eb120:
    // 0x1eb120: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1EB120u;
    {
        const bool branch_taken_0x1eb120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB120u;
            // 0x1eb124: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb120) {
            ctx->pc = 0x1EB19Cu;
            goto label_1eb19c;
        }
    }
    ctx->pc = 0x1EB128u;
label_1eb128:
    // 0x1eb128: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1EB128u;
    SET_GPR_U32(ctx, 31, 0x1EB130u);
    ctx->pc = 0x1EB12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB128u;
            // 0x1eb12c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB130u; }
        if (ctx->pc != 0x1EB130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB130u; }
        if (ctx->pc != 0x1EB130u) { return; }
    }
    ctx->pc = 0x1EB130u;
label_1eb130:
    // 0x1eb130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eb130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb134: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1eb134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1eb138: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1eb138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1eb13c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1eb13cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1eb140: 0x34a50406  ori         $a1, $a1, 0x406
    ctx->pc = 0x1eb140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1030);
    // 0x1eb144: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1eb144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1eb148: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1eb148u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1eb14c: 0x463823  subu        $a3, $v0, $a2
    ctx->pc = 0x1eb14cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1eb150: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EB150u;
    {
        const bool branch_taken_0x1eb150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB150u;
            // 0x1eb154: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb150) {
            ctx->pc = 0x1EB15Cu;
            goto label_1eb15c;
        }
    }
    ctx->pc = 0x1EB158u;
    // 0x1eb158: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x1eb158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
label_1eb15c:
    // 0x1eb15c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1eb15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1eb160: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1eb160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1eb164: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1eb164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1eb168: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1eb168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1eb16c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1eb16cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1eb170: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB170u;
    {
        const bool branch_taken_0x1eb170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB170u;
            // 0x1eb174: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb170) {
            ctx->pc = 0x1EB184u;
            goto label_1eb184;
        }
    }
    ctx->pc = 0x1EB178u;
    // 0x1eb178: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1EB178u;
    SET_GPR_U32(ctx, 31, 0x1EB180u);
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB180u; }
        if (ctx->pc != 0x1EB180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED700_0x1ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB180u; }
        if (ctx->pc != 0x1EB180u) { return; }
    }
    ctx->pc = 0x1EB180u;
label_1eb180:
    // 0x1eb180: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1eb180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eb184:
    // 0x1eb184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb188: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1eb188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb18c: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1EB18Cu;
    SET_GPR_U32(ctx, 31, 0x1EB194u);
    ctx->pc = 0x1EB190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB18Cu;
            // 0x1eb190: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB194u; }
        if (ctx->pc != 0x1EB194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB194u; }
        if (ctx->pc != 0x1EB194u) { return; }
    }
    ctx->pc = 0x1EB194u;
label_1eb194:
    // 0x1eb194: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1eb194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1eb198:
    // 0x1eb198: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1eb198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb19c:
    // 0x1eb19c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1eb19cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eb1a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1eb1a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb1a4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1eb1a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eb1a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1eb1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB1ACu;
            // 0x1eb1b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB1B4u;
    // 0x1eb1b4: 0x0  nop
    ctx->pc = 0x1eb1b4u;
    // NOP
label_1eb1b8:
    // 0x1eb1b8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1eb1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1eb1bc: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1eb1bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1eb1c0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1eb1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eb1c4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1eb1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1eb1c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb1cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1eb1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1eb1d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eb1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eb1d4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1eb1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1eb1d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1eb1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1eb1dc: 0x24871368  addiu       $a3, $a0, 0x1368
    ctx->pc = 0x1eb1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4968));
    // 0x1eb1e0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1eb1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1eb1e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb1e8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1eb1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1eb1ec: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1eb1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1eb1f0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1eb1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1eb1f4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1eb1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1eb1f8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1eb1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1eb1fc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1eb1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1eb200: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1eb200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1eb204: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB204u;
    {
        const bool branch_taken_0x1eb204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB204u;
            // 0x1eb208: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb204) {
            ctx->pc = 0x1EB220u;
            goto label_1eb220;
        }
    }
    ctx->pc = 0x1EB20Cu;
    // 0x1eb20c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1eb20cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1eb210: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1EB210u;
    SET_GPR_U32(ctx, 31, 0x1EB218u);
    ctx->pc = 0x1EB214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB210u;
            // 0x1eb214: 0x34a50401  ori         $a1, $a1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1025);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB218u; }
        if (ctx->pc != 0x1EB218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED700_0x1ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB218u; }
        if (ctx->pc != 0x1EB218u) { return; }
    }
    ctx->pc = 0x1EB218u;
label_1eb218:
    // 0x1eb218: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1EB218u;
    {
        const bool branch_taken_0x1eb218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB218u;
            // 0x1eb21c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb218) {
            ctx->pc = 0x1EB33Cu;
            goto label_1eb33c;
        }
    }
    ctx->pc = 0x1EB220u;
label_1eb220:
    // 0x1eb220: 0x24f00010  addiu       $s0, $a3, 0x10
    ctx->pc = 0x1eb220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1eb224: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1EB224u;
    SET_GPR_U32(ctx, 31, 0x1EB22Cu);
    ctx->pc = 0x1EB228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB224u;
            // 0x1eb228: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB22Cu; }
        if (ctx->pc != 0x1EB22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB22Cu; }
        if (ctx->pc != 0x1EB22Cu) { return; }
    }
    ctx->pc = 0x1EB22Cu;
label_1eb22c:
    // 0x1eb22c: 0x8e140008  lw          $s4, 0x8($s0)
    ctx->pc = 0x1eb22cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1eb230: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1eb230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1eb234: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1eb234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb238: 0x8e13002c  lw          $s3, 0x2C($s0)
    ctx->pc = 0x1eb238u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1eb23c: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x1eb23cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1eb240: 0x8e16000c  lw          $s6, 0xC($s0)
    ctx->pc = 0x1eb240u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1eb244: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1eb244u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1eb248: 0x8e170014  lw          $s7, 0x14($s0)
    ctx->pc = 0x1eb248u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eb24c: 0x8e1e0018  lw          $fp, 0x18($s0)
    ctx->pc = 0x1eb24cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1eb250: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1eb250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1eb254: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1eb254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1eb258: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1eb258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1eb25c: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1EB25Cu;
    SET_GPR_U32(ctx, 31, 0x1EB264u);
    ctx->pc = 0x1EB260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB25Cu;
            // 0x1eb260: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB264u; }
        if (ctx->pc != 0x1EB264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB264u; }
        if (ctx->pc != 0x1EB264u) { return; }
    }
    ctx->pc = 0x1EB264u;
label_1eb264:
    // 0x1eb264: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x1eb264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1eb268: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x1eb268u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    // 0x1eb26c: 0xaeb20008  sw          $s2, 0x8($s5)
    ctx->pc = 0x1eb26cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
    // 0x1eb270: 0xaeb60004  sw          $s6, 0x4($s5)
    ctx->pc = 0x1eb270u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 22));
    // 0x1eb274: 0xaeb10024  sw          $s1, 0x24($s5)
    ctx->pc = 0x1eb274u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 17));
    // 0x1eb278: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB278u;
    {
        const bool branch_taken_0x1eb278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB278u;
            // 0x1eb27c: 0xaeb30028  sw          $s3, 0x28($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb278) {
            ctx->pc = 0x1EB298u;
            goto label_1eb298;
        }
    }
    ctx->pc = 0x1EB280u;
    // 0x1eb280: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x1eb280u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
    // 0x1eb284: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x1eb284u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x1eb288: 0xaea00014  sw          $zero, 0x14($s5)
    ctx->pc = 0x1eb288u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
    // 0x1eb28c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1EB28Cu;
    {
        const bool branch_taken_0x1eb28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB28Cu;
            // 0x1eb290: 0xaea00018  sw          $zero, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb28c) {
            ctx->pc = 0x1EB2E0u;
            goto label_1eb2e0;
        }
    }
    ctx->pc = 0x1EB294u;
    // 0x1eb294: 0x0  nop
    ctx->pc = 0x1eb294u;
    // NOP
label_1eb298:
    // 0x1eb298: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1eb298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eb29c: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1eb29cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1eb2a0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EB2A0u;
    {
        const bool branch_taken_0x1eb2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb2a0) {
            ctx->pc = 0x1EB2A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2A0u;
            // 0x1eb2a4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB2F0u;
            goto label_1eb2f0;
        }
    }
    ctx->pc = 0x1EB2A8u;
    // 0x1eb2a8: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x1eb2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1eb2ac: 0x2ac30009  slti        $v1, $s6, 0x9
    ctx->pc = 0x1eb2acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1eb2b0: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1eb2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x1eb2b4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB2B4u;
    {
        const bool branch_taken_0x1eb2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2B4u;
            // 0x1eb2b8: 0x2f01021  addu        $v0, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb2b4) {
            ctx->pc = 0x1EB2C4u;
            goto label_1eb2c4;
        }
    }
    ctx->pc = 0x1EB2BCu;
    // 0x1eb2bc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1eb2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1eb2c0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1eb2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_1eb2c4:
    // 0x1eb2c4: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x1eb2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x1eb2c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB2C8u;
    {
        const bool branch_taken_0x1eb2c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2C8u;
            // 0x1eb2cc: 0x3d01021  addu        $v0, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb2c8) {
            ctx->pc = 0x1EB2D8u;
            goto label_1eb2d8;
        }
    }
    ctx->pc = 0x1EB2D0u;
    // 0x1eb2d0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1eb2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1eb2d4: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1eb2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_1eb2d8:
    // 0x1eb2d8: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x1eb2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x1eb2dc: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x1eb2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
label_1eb2e0:
    // 0x1eb2e0: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x1eb2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x1eb2e4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1EB2E4u;
    {
        const bool branch_taken_0x1eb2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2E4u;
            // 0x1eb2e8: 0xaea0001c  sw          $zero, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb2e4) {
            ctx->pc = 0x1EB334u;
            goto label_1eb334;
        }
    }
    ctx->pc = 0x1EB2ECu;
    // 0x1eb2ec: 0x0  nop
    ctx->pc = 0x1eb2ecu;
    // NOP
label_1eb2f0:
    // 0x1eb2f0: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x1eb2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1eb2f4: 0x2ac30009  slti        $v1, $s6, 0x9
    ctx->pc = 0x1eb2f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1eb2f8: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1eb2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x1eb2fc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB2FCu;
    {
        const bool branch_taken_0x1eb2fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2FCu;
            // 0x1eb300: 0x2f01021  addu        $v0, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb2fc) {
            ctx->pc = 0x1EB30Cu;
            goto label_1eb30c;
        }
    }
    ctx->pc = 0x1EB304u;
    // 0x1eb304: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1eb304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1eb308: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1eb308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_1eb30c:
    // 0x1eb30c: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x1eb30cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x1eb310: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB310u;
    {
        const bool branch_taken_0x1eb310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB310u;
            // 0x1eb314: 0x3d01021  addu        $v0, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb310) {
            ctx->pc = 0x1EB320u;
            goto label_1eb320;
        }
    }
    ctx->pc = 0x1EB318u;
    // 0x1eb318: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1eb318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1eb31c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1eb31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_1eb320:
    // 0x1eb320: 0xaebe0020  sw          $fp, 0x20($s5)
    ctx->pc = 0x1eb320u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 30));
    // 0x1eb324: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x1eb324u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x1eb328: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1eb328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eb32c: 0xaeb7001c  sw          $s7, 0x1C($s5)
    ctx->pc = 0x1eb32cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 23));
    // 0x1eb330: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x1eb330u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_1eb334:
    // 0x1eb334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eb334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb338: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1eb338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb33c:
    // 0x1eb33c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1eb33cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eb340: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1eb340u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb344: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1eb344u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eb348: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1eb348u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb34c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1eb34cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eb350: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1eb350u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eb354: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1eb354u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eb358: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1eb358u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eb35c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1eb35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1eb360: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB360u;
            // 0x1eb364: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB368u;
label_1eb368:
    // 0x1eb368: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1eb368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1eb36c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eb36cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eb370: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1eb370u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1eb374: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1eb374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1eb378: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eb378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eb37c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1eb37cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb380: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1eb380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1eb384: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1eb384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1eb388: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eb388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eb38c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1eb38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb390: 0x26461368  addiu       $a2, $s2, 0x1368
    ctx->pc = 0x1eb390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4968));
    // 0x1eb394: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1eb394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1eb398: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1eb398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1eb39c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eb39cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb3a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1eb3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1eb3a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1eb3a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb3a8: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1EB3A8u;
    {
        const bool branch_taken_0x1eb3a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3A8u;
            // 0x1eb3ac: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3a8) {
            ctx->pc = 0x1EB43Cu;
            goto label_1eb43c;
        }
    }
    ctx->pc = 0x1EB3B0u;
    // 0x1eb3b0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1eb3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1eb3b4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB3B4u;
    {
        const bool branch_taken_0x1eb3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb3b4) {
            ctx->pc = 0x1EB3B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3B4u;
            // 0x1eb3b8: 0x24d00010  addiu       $s0, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB3D0u;
            goto label_1eb3d0;
        }
    }
    ctx->pc = 0x1EB3BCu;
    // 0x1eb3bc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1eb3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1eb3c0: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1EB3C0u;
    SET_GPR_U32(ctx, 31, 0x1EB3C8u);
    ctx->pc = 0x1EB3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3C0u;
            // 0x1eb3c4: 0x34a50401  ori         $a1, $a1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1025);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3C8u; }
        if (ctx->pc != 0x1EB3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED700_0x1ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3C8u; }
        if (ctx->pc != 0x1EB3C8u) { return; }
    }
    ctx->pc = 0x1EB3C8u;
label_1eb3c8:
    // 0x1eb3c8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1EB3C8u;
    {
        const bool branch_taken_0x1eb3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3C8u;
            // 0x1eb3cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3c8) {
            ctx->pc = 0x1EB440u;
            goto label_1eb440;
        }
    }
    ctx->pc = 0x1EB3D0u;
label_1eb3d0:
    // 0x1eb3d0: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1EB3D0u;
    SET_GPR_U32(ctx, 31, 0x1EB3D8u);
    ctx->pc = 0x1EB3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3D0u;
            // 0x1eb3d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3D8u; }
        if (ctx->pc != 0x1EB3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3D8u; }
        if (ctx->pc != 0x1EB3D8u) { return; }
    }
    ctx->pc = 0x1EB3D8u;
label_1eb3d8:
    // 0x1eb3d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eb3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb3dc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1eb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1eb3e0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1eb3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1eb3e4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1eb3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1eb3e8: 0x34a50407  ori         $a1, $a1, 0x407
    ctx->pc = 0x1eb3e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1031);
    // 0x1eb3ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1eb3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1eb3f0: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x1eb3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eb3f4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1eb3f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1eb3f8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EB3F8u;
    {
        const bool branch_taken_0x1eb3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3F8u;
            // 0x1eb3fc: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3f8) {
            ctx->pc = 0x1EB404u;
            goto label_1eb404;
        }
    }
    ctx->pc = 0x1EB400u;
    // 0x1eb400: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x1eb400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
label_1eb404:
    // 0x1eb404: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1eb404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1eb408: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1eb408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1eb40c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1eb40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1eb410: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1eb410u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1eb414: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB414u;
    {
        const bool branch_taken_0x1eb414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB414u;
            // 0x1eb418: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb414) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB41Cu;
    // 0x1eb41c: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1EB41Cu;
    SET_GPR_U32(ctx, 31, 0x1EB424u);
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB424u; }
        if (ctx->pc != 0x1EB424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED700_0x1ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB424u; }
        if (ctx->pc != 0x1EB424u) { return; }
    }
    ctx->pc = 0x1EB424u;
label_1eb424:
    // 0x1eb424: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1eb424u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eb428:
    // 0x1eb428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb42c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1eb42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb430: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1EB430u;
    SET_GPR_U32(ctx, 31, 0x1EB438u);
    ctx->pc = 0x1EB434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB430u;
            // 0x1eb434: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB438u; }
        if (ctx->pc != 0x1EB438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB438u; }
        if (ctx->pc != 0x1EB438u) { return; }
    }
    ctx->pc = 0x1EB438u;
label_1eb438:
    // 0x1eb438: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1eb438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1eb43c:
    // 0x1eb43c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1eb43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb440:
    // 0x1eb440: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1eb440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eb444: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1eb444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb448: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1eb448u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eb44c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1eb44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb450: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB450u;
            // 0x1eb454: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB458u;
label_1eb458:
    // 0x1eb458: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB458u;
            // 0x1eb45c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB460u;
label_1eb460:
    // 0x1eb460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb464: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x1eb464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x1eb468: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB468u;
            // 0x1eb46c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB470u;
    ctx->pc = 0x1eb470u;
}
