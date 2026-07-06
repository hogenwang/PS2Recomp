#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BEF18
// Address: 0x2bef18 - 0x2bf088
void sub_002BEF18_0x2bef18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEF18_0x2bef18");
#endif

    switch (ctx->pc) {
        case 0x2bef50u: goto label_2bef50;
        case 0x2bef78u: goto label_2bef78;
        case 0x2befa4u: goto label_2befa4;
        default: break;
    }

    ctx->pc = 0x2bef18u;

    // 0x2bef18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bef18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2bef1c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2bef1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bef20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bef20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bef24: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2bef24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bef28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bef28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bef2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bef2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bef30: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2bef30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2bef34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bef34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bef38: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2bef38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2bef3c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2bef3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bef40: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2bef40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2bef44: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2bef44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bef48: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x2BEF48u;
    SET_GPR_U32(ctx, 31, 0x2BEF50u);
    ctx->pc = 0x2BEF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF48u;
            // 0x2bef4c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (runtime->hasFunction(0x28F740u)) {
        auto targetFn = runtime->lookupFunction(0x28F740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF50u; }
        if (ctx->pc != 0x2BEF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F740_0x28f740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF50u; }
        if (ctx->pc != 0x2BEF50u) { return; }
    }
    ctx->pc = 0x2BEF50u;
label_2bef50:
    // 0x2bef50: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BEF50u;
    {
        const bool branch_taken_0x2bef50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF50u;
            // 0x2bef54: 0x24420230  addiu       $v0, $v0, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef50) {
            ctx->pc = 0x2BEF60u;
            goto label_2bef60;
        }
    }
    ctx->pc = 0x2BEF58u;
    // 0x2bef58: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2BEF58u;
    {
        const bool branch_taken_0x2bef58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF58u;
            // 0x2bef5c: 0x24152721  addiu       $s5, $zero, 0x2721 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 10017));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef58) {
            ctx->pc = 0x2BF060u;
            goto label_2bf060;
        }
    }
    ctx->pc = 0x2BEF60u;
label_2bef60:
    // 0x2bef60: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x2bef60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bef64: 0x50880a  movz        $s1, $v0, $s0
    ctx->pc = 0x2bef64u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x2bef68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bef68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bef6c: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2bef6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2bef70: 0xc048382  jal         func_120E08
    ctx->pc = 0x2BEF70u;
    SET_GPR_U32(ctx, 31, 0x2BEF78u);
    ctx->pc = 0x2BEF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF70u;
            // 0x2bef74: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120E08u;
    if (runtime->hasFunction(0x120E08u)) {
        auto targetFn = runtime->lookupFunction(0x120E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF78u; }
        if (ctx->pc != 0x2BEF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120E08_0x120e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF78u; }
        if (ctx->pc != 0x2BEF78u) { return; }
    }
    ctx->pc = 0x2BEF78u;
label_2bef78:
    // 0x2bef78: 0x23178  dsll        $a2, $v0, 5
    ctx->pc = 0x2bef78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 5);
    // 0x2bef7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bef7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bef80: 0xc2302f  dsubu       $a2, $a2, $v0
    ctx->pc = 0x2bef80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 2));
    // 0x2bef84: 0x619b8  dsll        $v1, $a2, 6
    ctx->pc = 0x2bef84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 6);
    // 0x2bef88: 0x66182f  dsubu       $v1, $v1, $a2
    ctx->pc = 0x2bef88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 6));
    // 0x2bef8c: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x2bef8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x2bef90: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x2bef90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2bef94: 0x381bc  dsll32      $s0, $v1, 6
    ctx->pc = 0x2bef94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 6));
    // 0x2bef98: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2bef98u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2bef9c: 0xc04818c  jal         func_120630
    ctx->pc = 0x2BEF9Cu;
    SET_GPR_U32(ctx, 31, 0x2BEFA4u);
    ctx->pc = 0x2BEFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF9Cu;
            // 0x2befa0: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (runtime->hasFunction(0x120630u)) {
        auto targetFn = runtime->lookupFunction(0x120630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFA4u; }
        if (ctx->pc != 0x2BEFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120630_0x120630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFA4u; }
        if (ctx->pc != 0x2BEFA4u) { return; }
    }
    ctx->pc = 0x2BEFA4u;
label_2befa4:
    // 0x2befa4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2befa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2befa8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2befa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2befac: 0x102023  negu        $a0, $s0
    ctx->pc = 0x2befacu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x2befb0: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2befb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2befb4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2befb4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2befb8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x2befb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2befbc: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x2befbcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x2befc0: 0x601000a  bgez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BEFC0u;
    {
        const bool branch_taken_0x2befc0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2BEFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEFC0u;
            // 0x2befc4: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2befc0) {
            ctx->pc = 0x2BEFECu;
            goto label_2befec;
        }
    }
    ctx->pc = 0x2BEFC8u;
    // 0x2befc8: 0x101023  negu        $v0, $s0
    ctx->pc = 0x2befc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x2befcc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2befccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2befd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BEFD0u;
    {
        const bool branch_taken_0x2befd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEFD0u;
            // 0x2befd4: 0x3c023b9a  lui         $v0, 0x3B9A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15258 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2befd0) {
            ctx->pc = 0x2BEFECu;
            goto label_2befec;
        }
    }
    ctx->pc = 0x2BEFD8u;
    // 0x2befd8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2befd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2befdc: 0x3442ca00  ori         $v0, $v0, 0xCA00
    ctx->pc = 0x2befdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51712);
    // 0x2befe0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2befe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2befe4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BEFE4u;
    {
        const bool branch_taken_0x2befe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEFE4u;
            // 0x2befe8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2befe4) {
            ctx->pc = 0x2BF014u;
            goto label_2bf014;
        }
    }
    ctx->pc = 0x2BEFECu;
label_2befec:
    // 0x2befec: 0x3c023b9a  lui         $v0, 0x3B9A
    ctx->pc = 0x2befecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15258 << 16));
    // 0x2beff0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2beff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2beff4: 0x3442c9ff  ori         $v0, $v0, 0xC9FF
    ctx->pc = 0x2beff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51711);
    // 0x2beff8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2beff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2beffc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BEFFCu;
    {
        const bool branch_taken_0x2beffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEFFCu;
            // 0x2bf000: 0xae440008  sw          $a0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beffc) {
            ctx->pc = 0x2BF018u;
            goto label_2bf018;
        }
    }
    ctx->pc = 0x2BF004u;
    // 0x2bf004: 0x3c02c465  lui         $v0, 0xC465
    ctx->pc = 0x2bf004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50277 << 16));
    // 0x2bf008: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2bf008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2bf00c: 0x34423600  ori         $v0, $v0, 0x3600
    ctx->pc = 0x2bf00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13824);
    // 0x2bf010: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bf010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2bf014:
    // 0x2bf014: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2bf014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2bf018:
    // 0x2bf018: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2bf018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bf01c: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x2bf01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2bf020: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BF020u;
    {
        const bool branch_taken_0x2bf020 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2BF024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF020u;
            // 0x2bf024: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf020) {
            ctx->pc = 0x2BF03Cu;
            goto label_2bf03c;
        }
    }
    ctx->pc = 0x2BF028u;
    // 0x2bf028: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2bf028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2bf02c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF02Cu;
    {
        const bool branch_taken_0x2bf02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf02c) {
            ctx->pc = 0x2BF03Cu;
            goto label_2bf03c;
        }
    }
    ctx->pc = 0x2BF034u;
    // 0x2bf034: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF034u;
    {
        const bool branch_taken_0x2bf034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF034u;
            // 0x2bf038: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf034) {
            ctx->pc = 0x2BF054u;
            goto label_2bf054;
        }
    }
    ctx->pc = 0x2BF03Cu;
label_2bf03c:
    // 0x2bf03c: 0x4c30006  bgezl       $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BF03Cu;
    {
        const bool branch_taken_0x2bf03c = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x2bf03c) {
            ctx->pc = 0x2BF040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF03Cu;
            // 0x2bf040: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF058u;
            goto label_2bf058;
        }
    }
    ctx->pc = 0x2BF044u;
    // 0x2bf044: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2bf044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2bf048: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x2bf048u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bf04c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2bf04cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bf050: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x2bf050u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_2bf054:
    // 0x2bf054: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bf054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf058:
    // 0x2bf058: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2bf058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2bf05c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2bf05cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2bf060:
    // 0x2bf060: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2bf060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf064: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2bf064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bf068: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2bf068u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bf06c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2bf06cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bf070: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2bf070u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bf074: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bf074u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf078: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bf078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf07c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bf07cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf080: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF080u;
            // 0x2bf084: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BF088u;
    ctx->pc = 0x2bf088u;
}
