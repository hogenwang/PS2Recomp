#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00140C00
// Address: 0x140c00 - 0x140f50
void sub_00140C00_0x140c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140C00_0x140c00");
#endif

    switch (ctx->pc) {
        case 0x140c68u: goto label_140c68;
        case 0x140c80u: goto label_140c80;
        case 0x140ca8u: goto label_140ca8;
        case 0x140cbcu: goto label_140cbc;
        case 0x140cd0u: goto label_140cd0;
        case 0x140d2cu: goto label_140d2c;
        case 0x140d44u: goto label_140d44;
        case 0x140d94u: goto label_140d94;
        case 0x140dacu: goto label_140dac;
        case 0x140dd0u: goto label_140dd0;
        case 0x140e18u: goto label_140e18;
        case 0x140e2cu: goto label_140e2c;
        case 0x140e48u: goto label_140e48;
        case 0x140e98u: goto label_140e98;
        case 0x140eb8u: goto label_140eb8;
        case 0x140ed4u: goto label_140ed4;
        case 0x140ef0u: goto label_140ef0;
        case 0x140f00u: goto label_140f00;
        case 0x140f2cu: goto label_140f2c;
        case 0x140f40u: goto label_140f40;
        default: break;
    }

    ctx->pc = 0x140c00u;

label_140c00:
    // 0x140c00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x140c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x140c04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x140c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x140c08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x140c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x140c0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x140c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x140c10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140c14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x140c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x140c1c: 0x8ca30220  lw          $v1, 0x220($a1)
    ctx->pc = 0x140c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 544)));
    // 0x140c20: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x140C20u;
    {
        const bool branch_taken_0x140c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x140C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140C20u;
            // 0x140c24: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c20) {
            ctx->pc = 0x140C40u;
            goto label_140c40;
        }
    }
    ctx->pc = 0x140C28u;
    // 0x140c28: 0x8e240238  lw          $a0, 0x238($s1)
    ctx->pc = 0x140c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x140c2c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x140c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x140c30: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x140c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x140c34: 0xae230238  sw          $v1, 0x238($s1)
    ctx->pc = 0x140c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 3));
    // 0x140c38: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x140C38u;
    {
        const bool branch_taken_0x140c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140C38u;
            // 0x140c3c: 0xae200220  sw          $zero, 0x220($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c38) {
            ctx->pc = 0x140DB0u;
            goto label_140db0;
        }
    }
    ctx->pc = 0x140C40u;
label_140c40:
    // 0x140c40: 0x8e24023c  lw          $a0, 0x23C($s1)
    ctx->pc = 0x140c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x140c44: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x140c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x140c48: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x140c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x140c4c: 0x54600059  bnel        $v1, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x140C4Cu;
    {
        const bool branch_taken_0x140c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140c4c) {
            ctx->pc = 0x140C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140C4Cu;
            // 0x140c50: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140DB4u;
            goto label_140db4;
        }
    }
    ctx->pc = 0x140C54u;
    // 0x140c54: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x140c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x140c58: 0x5060002c  beql        $v1, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x140C58u;
    {
        const bool branch_taken_0x140c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140c58) {
            ctx->pc = 0x140C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140C58u;
            // 0x140c5c: 0x86230228  lh          $v1, 0x228($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 552)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140D0Cu;
            goto label_140d0c;
        }
    }
    ctx->pc = 0x140C60u;
    // 0x140c60: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x140C60u;
    SET_GPR_U32(ctx, 31, 0x140C68u);
    ctx->pc = 0x140C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140C60u;
            // 0x140c64: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C68u; }
        if (ctx->pc != 0x140C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C68u; }
        if (ctx->pc != 0x140C68u) { return; }
    }
    ctx->pc = 0x140C68u;
label_140c68:
    // 0x140c68: 0x962500ea  lhu         $a1, 0xEA($s1)
    ctx->pc = 0x140c68u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
    // 0x140c6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x140c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c70: 0x922600f7  lbu         $a2, 0xF7($s1)
    ctx->pc = 0x140c70u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 247)));
    // 0x140c74: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x140c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x140c78: 0xc063720  jal         func_18DC80
    ctx->pc = 0x140C78u;
    SET_GPR_U32(ctx, 31, 0x140C80u);
    ctx->pc = 0x140C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140C78u;
            // 0x140c7c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DC80u;
    if (runtime->hasFunction(0x18DC80u)) {
        auto targetFn = runtime->lookupFunction(0x18DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C80u; }
        if (ctx->pc != 0x140C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC80_0x18dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C80u; }
        if (ctx->pc != 0x140C80u) { return; }
    }
    ctx->pc = 0x140C80u;
label_140c80:
    // 0x140c80: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x140C80u;
    {
        const bool branch_taken_0x140c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140c80) {
            ctx->pc = 0x140DB0u;
            goto label_140db0;
        }
    }
    ctx->pc = 0x140C88u;
    // 0x140c88: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x140c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x140c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c90: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x140c90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140c94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c9c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x140c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x140ca0: 0xc05a888  jal         func_16A220
    ctx->pc = 0x140CA0u;
    SET_GPR_U32(ctx, 31, 0x140CA8u);
    ctx->pc = 0x140CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140CA0u;
            // 0x140ca4: 0x3053007f  andi        $s3, $v0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CA8u; }
        if (ctx->pc != 0x140CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CA8u; }
        if (ctx->pc != 0x140CA8u) { return; }
    }
    ctx->pc = 0x140CA8u;
label_140ca8:
    // 0x140ca8: 0x962500ea  lhu         $a1, 0xEA($s1)
    ctx->pc = 0x140ca8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
    // 0x140cac: 0x327300ff  andi        $s3, $s3, 0xFF
    ctx->pc = 0x140cacu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x140cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140cb4: 0xc05a814  jal         func_16A050
    ctx->pc = 0x140CB4u;
    SET_GPR_U32(ctx, 31, 0x140CBCu);
    ctx->pc = 0x140CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140CB4u;
            // 0x140cb8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A050u;
    if (runtime->hasFunction(0x16A050u)) {
        auto targetFn = runtime->lookupFunction(0x16A050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CBCu; }
        if (ctx->pc != 0x140CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A050_0x16a050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CBCu; }
        if (ctx->pc != 0x140CBCu) { return; }
    }
    ctx->pc = 0x140CBCu;
label_140cbc:
    // 0x140cbc: 0x962500ea  lhu         $a1, 0xEA($s1)
    ctx->pc = 0x140cbcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
    // 0x140cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140cc4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x140cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140cc8: 0xc05a994  jal         func_16A650
    ctx->pc = 0x140CC8u;
    SET_GPR_U32(ctx, 31, 0x140CD0u);
    ctx->pc = 0x140CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140CC8u;
            // 0x140ccc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A650u;
    if (runtime->hasFunction(0x16A650u)) {
        auto targetFn = runtime->lookupFunction(0x16A650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CD0u; }
        if (ctx->pc != 0x140CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A650_0x16a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CD0u; }
        if (ctx->pc != 0x140CD0u) { return; }
    }
    ctx->pc = 0x140CD0u;
label_140cd0:
    // 0x140cd0: 0xa622024c  sh          $v0, 0x24C($s1)
    ctx->pc = 0x140cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 588), (uint16_t)GPR_U32(ctx, 2));
    // 0x140cd4: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x140cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x140cd8: 0x8e25023c  lw          $a1, 0x23C($s1)
    ctx->pc = 0x140cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x140cdc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x140cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140ce0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x140ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x140ce4: 0xae24023c  sw          $a0, 0x23C($s1)
    ctx->pc = 0x140ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 4));
    // 0x140ce8: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x140ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
    // 0x140cec: 0xae200238  sw          $zero, 0x238($s1)
    ctx->pc = 0x140cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 0));
    // 0x140cf0: 0x86240228  lh          $a0, 0x228($s1)
    ctx->pc = 0x140cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x140cf4: 0xa624022a  sh          $a0, 0x22A($s1)
    ctx->pc = 0x140cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 554), (uint16_t)GPR_U32(ctx, 4));
    // 0x140cf8: 0xa6200228  sh          $zero, 0x228($s1)
    ctx->pc = 0x140cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 552), (uint16_t)GPR_U32(ctx, 0));
    // 0x140cfc: 0xa6200248  sh          $zero, 0x248($s1)
    ctx->pc = 0x140cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 584), (uint16_t)GPR_U32(ctx, 0));
    // 0x140d00: 0xa620024a  sh          $zero, 0x24A($s1)
    ctx->pc = 0x140d00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 586), (uint16_t)GPR_U32(ctx, 0));
    // 0x140d04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x140D04u;
    {
        const bool branch_taken_0x140d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140D04u;
            // 0x140d08: 0xa623020c  sh          $v1, 0x20C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 524), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140d04) {
            ctx->pc = 0x140D14u;
            goto label_140d14;
        }
    }
    ctx->pc = 0x140D0Cu;
label_140d0c:
    // 0x140d0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x140d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x140d10: 0xa6230228  sh          $v1, 0x228($s1)
    ctx->pc = 0x140d10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 552), (uint16_t)GPR_U32(ctx, 3));
label_140d14:
    // 0x140d14: 0x8e230238  lw          $v1, 0x238($s1)
    ctx->pc = 0x140d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x140d18: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x140d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x140d1c: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x140D1Cu;
    {
        const bool branch_taken_0x140d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140d1c) {
            ctx->pc = 0x140DB0u;
            goto label_140db0;
        }
    }
    ctx->pc = 0x140D24u;
    // 0x140d24: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x140D24u;
    SET_GPR_U32(ctx, 31, 0x140D2Cu);
    ctx->pc = 0x140D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140D24u;
            // 0x140d28: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D2Cu; }
        if (ctx->pc != 0x140D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D2Cu; }
        if (ctx->pc != 0x140D2Cu) { return; }
    }
    ctx->pc = 0x140D2Cu;
label_140d2c:
    // 0x140d2c: 0x962500ea  lhu         $a1, 0xEA($s1)
    ctx->pc = 0x140d2cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
    // 0x140d30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x140d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140d34: 0x922600f7  lbu         $a2, 0xF7($s1)
    ctx->pc = 0x140d34u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 247)));
    // 0x140d38: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x140d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x140d3c: 0xc063720  jal         func_18DC80
    ctx->pc = 0x140D3Cu;
    SET_GPR_U32(ctx, 31, 0x140D44u);
    ctx->pc = 0x140D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140D3Cu;
            // 0x140d40: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DC80u;
    if (runtime->hasFunction(0x18DC80u)) {
        auto targetFn = runtime->lookupFunction(0x18DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D44u; }
        if (ctx->pc != 0x140D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC80_0x18dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D44u; }
        if (ctx->pc != 0x140D44u) { return; }
    }
    ctx->pc = 0x140D44u;
label_140d44:
    // 0x140d44: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x140D44u;
    {
        const bool branch_taken_0x140d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140d44) {
            ctx->pc = 0x140DB0u;
            goto label_140db0;
        }
    }
    ctx->pc = 0x140D4Cu;
    // 0x140d4c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x140d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x140d50: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x140d50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140d54: 0x3065007f  andi        $a1, $v1, 0x7F
    ctx->pc = 0x140d54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x140d58: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x140d58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x140d5c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x140D5Cu;
    {
        const bool branch_taken_0x140d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140d5c) {
            ctx->pc = 0x140DB0u;
            goto label_140db0;
        }
    }
    ctx->pc = 0x140D64u;
    // 0x140d64: 0x8e240238  lw          $a0, 0x238($s1)
    ctx->pc = 0x140d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x140d68: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x140d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x140d6c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x140D6Cu;
    {
        const bool branch_taken_0x140d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140d6c) {
            ctx->pc = 0x140DB0u;
            goto label_140db0;
        }
    }
    ctx->pc = 0x140D74u;
    // 0x140d74: 0x34822000  ori         $v0, $a0, 0x2000
    ctx->pc = 0x140d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x140d78: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x140d78u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x140d7c: 0xae220238  sw          $v0, 0x238($s1)
    ctx->pc = 0x140d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 2));
    // 0x140d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140d84: 0x962500ea  lhu         $a1, 0xEA($s1)
    ctx->pc = 0x140d84u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
    // 0x140d88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x140d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140d8c: 0xc05a994  jal         func_16A650
    ctx->pc = 0x140D8Cu;
    SET_GPR_U32(ctx, 31, 0x140D94u);
    ctx->pc = 0x140D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140D8Cu;
            // 0x140d90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A650u;
    if (runtime->hasFunction(0x16A650u)) {
        auto targetFn = runtime->lookupFunction(0x16A650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D94u; }
        if (ctx->pc != 0x140D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A650_0x16a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D94u; }
        if (ctx->pc != 0x140D94u) { return; }
    }
    ctx->pc = 0x140D94u;
label_140d94:
    // 0x140d94: 0xa6220248  sh          $v0, 0x248($s1)
    ctx->pc = 0x140d94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 584), (uint16_t)GPR_U32(ctx, 2));
    // 0x140d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140d9c: 0x962500ea  lhu         $a1, 0xEA($s1)
    ctx->pc = 0x140d9cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
    // 0x140da0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x140da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140da4: 0xc05a994  jal         func_16A650
    ctx->pc = 0x140DA4u;
    SET_GPR_U32(ctx, 31, 0x140DACu);
    ctx->pc = 0x140DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140DA4u;
            // 0x140da8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A650u;
    if (runtime->hasFunction(0x16A650u)) {
        auto targetFn = runtime->lookupFunction(0x16A650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DACu; }
        if (ctx->pc != 0x140DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A650_0x16a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DACu; }
        if (ctx->pc != 0x140DACu) { return; }
    }
    ctx->pc = 0x140DACu;
label_140dac:
    // 0x140dac: 0xa622024a  sh          $v0, 0x24A($s1)
    ctx->pc = 0x140dacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 586), (uint16_t)GPR_U32(ctx, 2));
label_140db0:
    // 0x140db0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x140db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_140db4:
    // 0x140db4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x140db4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140db8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140dbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x140DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140DC4u;
            // 0x140dc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140DCCu;
    // 0x140dcc: 0x0  nop
    ctx->pc = 0x140dccu;
    // NOP
label_140dd0:
    // 0x140dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x140dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x140dd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x140dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x140dd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140ddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x140de0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x140de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140de4: 0x8ca30220  lw          $v1, 0x220($a1)
    ctx->pc = 0x140de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 544)));
    // 0x140de8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x140DE8u;
    {
        const bool branch_taken_0x140de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x140DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140DE8u;
            // 0x140dec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140de8) {
            ctx->pc = 0x140DF8u;
            goto label_140df8;
        }
    }
    ctx->pc = 0x140DF0u;
    // 0x140df0: 0xae200238  sw          $zero, 0x238($s1)
    ctx->pc = 0x140df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 0));
    // 0x140df4: 0xae200220  sw          $zero, 0x220($s1)
    ctx->pc = 0x140df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 0));
label_140df8:
    // 0x140df8: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x140df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x140dfc: 0x50600045  beql        $v1, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x140DFCu;
    {
        const bool branch_taken_0x140dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140dfc) {
            ctx->pc = 0x140E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140DFCu;
            // 0x140e00: 0x92240254  lbu         $a0, 0x254($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 596)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140F14u;
            goto label_140f14;
        }
    }
    ctx->pc = 0x140E04u;
    // 0x140e04: 0x962500ea  lhu         $a1, 0xEA($s1)
    ctx->pc = 0x140e04u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
    // 0x140e08: 0x922600f7  lbu         $a2, 0xF7($s1)
    ctx->pc = 0x140e08u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 247)));
    // 0x140e0c: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x140e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x140e10: 0xc063720  jal         func_18DC80
    ctx->pc = 0x140E10u;
    SET_GPR_U32(ctx, 31, 0x140E18u);
    ctx->pc = 0x140E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140E10u;
            // 0x140e14: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DC80u;
    if (runtime->hasFunction(0x18DC80u)) {
        auto targetFn = runtime->lookupFunction(0x18DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E18u; }
        if (ctx->pc != 0x140E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC80_0x18dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E18u; }
        if (ctx->pc != 0x140E18u) { return; }
    }
    ctx->pc = 0x140E18u;
label_140e18:
    // 0x140e18: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x140E18u;
    {
        const bool branch_taken_0x140e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140e18) {
            ctx->pc = 0x140E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140E18u;
            // 0x140e1c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140F30u;
            goto label_140f30;
        }
    }
    ctx->pc = 0x140E20u;
    // 0x140e20: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x140e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x140e24: 0xc067c48  jal         func_19F120
    ctx->pc = 0x140E24u;
    SET_GPR_U32(ctx, 31, 0x140E2Cu);
    ctx->pc = 0x140E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140E24u;
            // 0x140e28: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E2Cu; }
        if (ctx->pc != 0x140E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E2Cu; }
        if (ctx->pc != 0x140E2Cu) { return; }
    }
    ctx->pc = 0x140E2Cu;
label_140e2c:
    // 0x140e2c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x140e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x140e30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x140e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x140e38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x140e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e3c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x140e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x140e40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x140e40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x140e44: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x140e44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_140e48:
    // 0x140e48: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x140e48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x140e4c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x140e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x140e50: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x140e50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x140e54: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x140E54u;
    {
        const bool branch_taken_0x140e54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140e54) {
            ctx->pc = 0x140E70u;
            goto label_140e70;
        }
    }
    ctx->pc = 0x140E5Cu;
    // 0x140e5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x140e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x140e60: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x140e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x140e64: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x140E64u;
    {
        const bool branch_taken_0x140e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140E64u;
            // 0x140e68: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140e64) {
            ctx->pc = 0x140E48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_140e48;
        }
    }
    ctx->pc = 0x140E6Cu;
    // 0x140e6c: 0x0  nop
    ctx->pc = 0x140e6cu;
    // NOP
label_140e70:
    // 0x140e70: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x140e70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x140e74: 0x28203  sra         $s0, $v0, 8
    ctx->pc = 0x140e74u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 8));
    // 0x140e78: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x140e78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x140e7c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x140E7Cu;
    {
        const bool branch_taken_0x140e7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x140E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140E7Cu;
            // 0x140e80: 0xae200238  sw          $zero, 0x238($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140e7c) {
            ctx->pc = 0x140EA0u;
            goto label_140ea0;
        }
    }
    ctx->pc = 0x140E84u;
    // 0x140e84: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x140e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x140e88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x140e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e8c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x140e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x140e90: 0xc0500d4  jal         func_140350
    ctx->pc = 0x140E90u;
    SET_GPR_U32(ctx, 31, 0x140E98u);
    ctx->pc = 0x140E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140E90u;
            // 0x140e94: 0x2444000a  addiu       $a0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140350u;
    if (runtime->hasFunction(0x140350u)) {
        auto targetFn = runtime->lookupFunction(0x140350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E98u; }
        if (ctx->pc != 0x140E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140350_0x140350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E98u; }
        if (ctx->pc != 0x140E98u) { return; }
    }
    ctx->pc = 0x140E98u;
label_140e98:
    // 0x140e98: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x140E98u;
    {
        const bool branch_taken_0x140e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140E98u;
            // 0x140e9c: 0xa2300254  sb          $s0, 0x254($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 596), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140e98) {
            ctx->pc = 0x140F04u;
            goto label_140f04;
        }
    }
    ctx->pc = 0x140EA0u;
label_140ea0:
    // 0x140ea0: 0x2a010008  slti        $at, $s0, 0x8
    ctx->pc = 0x140ea0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x140ea4: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x140EA4u;
    {
        const bool branch_taken_0x140ea4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140ea4) {
            ctx->pc = 0x140EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140EA4u;
            // 0x140ea8: 0x2a01000a  slti        $at, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x140EC0u;
            goto label_140ec0;
        }
    }
    ctx->pc = 0x140EACu;
    // 0x140eac: 0x2604fffe  addiu       $a0, $s0, -0x2
    ctx->pc = 0x140eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x140eb0: 0xc0501d0  jal         func_140740
    ctx->pc = 0x140EB0u;
    SET_GPR_U32(ctx, 31, 0x140EB8u);
    ctx->pc = 0x140EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140EB0u;
            // 0x140eb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140740u;
    if (runtime->hasFunction(0x140740u)) {
        auto targetFn = runtime->lookupFunction(0x140740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140EB8u; }
        if (ctx->pc != 0x140EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140740_0x140740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140EB8u; }
        if (ctx->pc != 0x140EB8u) { return; }
    }
    ctx->pc = 0x140EB8u;
label_140eb8:
    // 0x140eb8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x140EB8u;
    {
        const bool branch_taken_0x140eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140eb8) {
            ctx->pc = 0x140F00u;
            goto label_140f00;
        }
    }
    ctx->pc = 0x140EC0u;
label_140ec0:
    // 0x140ec0: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x140EC0u;
    {
        const bool branch_taken_0x140ec0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140ec0) {
            ctx->pc = 0x140EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140EC0u;
            // 0x140ec4: 0x2a010014  slti        $at, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x140EDCu;
            goto label_140edc;
        }
    }
    ctx->pc = 0x140EC8u;
    // 0x140ec8: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x140ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x140ecc: 0xc0501d0  jal         func_140740
    ctx->pc = 0x140ECCu;
    SET_GPR_U32(ctx, 31, 0x140ED4u);
    ctx->pc = 0x140ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140ECCu;
            // 0x140ed0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140740u;
    if (runtime->hasFunction(0x140740u)) {
        auto targetFn = runtime->lookupFunction(0x140740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140ED4u; }
        if (ctx->pc != 0x140ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140740_0x140740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140ED4u; }
        if (ctx->pc != 0x140ED4u) { return; }
    }
    ctx->pc = 0x140ED4u;
label_140ed4:
    // 0x140ed4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x140ED4u;
    {
        const bool branch_taken_0x140ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140ed4) {
            ctx->pc = 0x140F00u;
            goto label_140f00;
        }
    }
    ctx->pc = 0x140EDCu;
label_140edc:
    // 0x140edc: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x140EDCu;
    {
        const bool branch_taken_0x140edc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140edc) {
            ctx->pc = 0x140EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140EDCu;
            // 0x140ee0: 0x2604ffec  addiu       $a0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140EF8u;
            goto label_140ef8;
        }
    }
    ctx->pc = 0x140EE4u;
    // 0x140ee4: 0x2604fff7  addiu       $a0, $s0, -0x9
    ctx->pc = 0x140ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967287));
    // 0x140ee8: 0xc05023c  jal         func_1408F0
    ctx->pc = 0x140EE8u;
    SET_GPR_U32(ctx, 31, 0x140EF0u);
    ctx->pc = 0x140EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140EE8u;
            // 0x140eec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1408F0u;
    if (runtime->hasFunction(0x1408F0u)) {
        auto targetFn = runtime->lookupFunction(0x1408F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140EF0u; }
        if (ctx->pc != 0x140EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001408F0_0x1408f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140EF0u; }
        if (ctx->pc != 0x140EF0u) { return; }
    }
    ctx->pc = 0x140EF0u;
label_140ef0:
    // 0x140ef0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x140EF0u;
    {
        const bool branch_taken_0x140ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140ef0) {
            ctx->pc = 0x140F00u;
            goto label_140f00;
        }
    }
    ctx->pc = 0x140EF8u;
label_140ef8:
    // 0x140ef8: 0xc050300  jal         func_140C00
    ctx->pc = 0x140EF8u;
    SET_GPR_U32(ctx, 31, 0x140F00u);
    ctx->pc = 0x140EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140EF8u;
            // 0x140efc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140C00u;
    goto label_140c00;
    ctx->pc = 0x140F00u;
label_140f00:
    // 0x140f00: 0xa2300254  sb          $s0, 0x254($s1)
    ctx->pc = 0x140f00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 596), (uint8_t)GPR_U32(ctx, 16));
label_140f04:
    // 0x140f04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x140f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140f08: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x140f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
    // 0x140f0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x140F0Cu;
    {
        const bool branch_taken_0x140f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F0Cu;
            // 0x140f10: 0xa623020c  sh          $v1, 0x20C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 524), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f0c) {
            ctx->pc = 0x140F2Cu;
            goto label_140f2c;
        }
    }
    ctx->pc = 0x140F14u;
label_140f14:
    // 0x140f14: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x140f14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x140f18: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x140F18u;
    {
        const bool branch_taken_0x140f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140f18) {
            ctx->pc = 0x140F2Cu;
            goto label_140f2c;
        }
    }
    ctx->pc = 0x140F20u;
    // 0x140f20: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x140f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x140f24: 0xc050300  jal         func_140C00
    ctx->pc = 0x140F24u;
    SET_GPR_U32(ctx, 31, 0x140F2Cu);
    ctx->pc = 0x140F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140F24u;
            // 0x140f28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140C00u;
    goto label_140c00;
    ctx->pc = 0x140F2Cu;
label_140f2c:
    // 0x140f2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x140f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_140f30:
    // 0x140f30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140f30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140f34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140f38: 0x3e00008  jr          $ra
    ctx->pc = 0x140F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F38u;
            // 0x140f3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140F40u;
label_140f40:
    // 0x140f40: 0x3e00008  jr          $ra
    ctx->pc = 0x140F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140F48u;
    // 0x140f48: 0x0  nop
    ctx->pc = 0x140f48u;
    // NOP
    // 0x140f4c: 0x0  nop
    ctx->pc = 0x140f4cu;
    // NOP
    ctx->pc = 0x140f50u;
}
