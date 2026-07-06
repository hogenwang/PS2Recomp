#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164C60
// Address: 0x164c60 - 0x164ea0
void sub_00164C60_0x164c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164C60_0x164c60");
#endif

    switch (ctx->pc) {
        case 0x164cacu: goto label_164cac;
        case 0x164d78u: goto label_164d78;
        case 0x164da8u: goto label_164da8;
        case 0x164e30u: goto label_164e30;
        case 0x164e40u: goto label_164e40;
        default: break;
    }

    ctx->pc = 0x164c60u;

    // 0x164c60: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x164c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x164c64: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x164c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x164c68: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x164c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x164c6c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x164c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x164c70: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x164c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x164c74: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x164c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x164c78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x164c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x164c7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x164c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x164c80: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x164c80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x164c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x164c88: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x164c88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x164c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x164c90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x164c94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x164c98: 0x24510050  addiu       $s1, $v0, 0x50
    ctx->pc = 0x164c98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x164c9c: 0x948200ec  lhu         $v0, 0xEC($a0)
    ctx->pc = 0x164c9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x164ca0: 0x948400ea  lhu         $a0, 0xEA($a0)
    ctx->pc = 0x164ca0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 234)));
    // 0x164ca4: 0xc063694  jal         func_18DA50
    ctx->pc = 0x164CA4u;
    SET_GPR_U32(ctx, 31, 0x164CACu);
    ctx->pc = 0x164CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164CA4u;
            // 0x164ca8: 0x24520050  addiu       $s2, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA50u;
    if (runtime->hasFunction(0x18DA50u)) {
        auto targetFn = runtime->lookupFunction(0x18DA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164CACu; }
        if (ctx->pc != 0x164CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DA50_0x18da50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164CACu; }
        if (ctx->pc != 0x164CACu) { return; }
    }
    ctx->pc = 0x164CACu;
label_164cac:
    // 0x164cac: 0x92a400f7  lbu         $a0, 0xF7($s5)
    ctx->pc = 0x164cacu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 247)));
    // 0x164cb0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x164cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x164cb4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x164cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x164cb8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x164cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x164cbc: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x164cbcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164cc0: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x164CC0u;
    {
        const bool branch_taken_0x164cc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x164cc0) {
            ctx->pc = 0x164CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164CC0u;
            // 0x164cc4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164CD0u;
            goto label_164cd0;
        }
    }
    ctx->pc = 0x164CC8u;
    // 0x164cc8: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x164cc8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164ccc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x164cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_164cd0:
    // 0x164cd0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x164cd0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164cd4: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x164cd4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x164cd8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x164cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x164cdc: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x164cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x164ce0: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x164ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x164ce4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x164ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x164ce8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x164ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x164cec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164cf0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x164cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x164cf4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x164cf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x164cf8: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x164cf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x164cfc: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x164CFCu;
    {
        const bool branch_taken_0x164cfc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x164cfc) {
            ctx->pc = 0x164D00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164CFCu;
            // 0x164d00: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164D0Cu;
            goto label_164d0c;
        }
    }
    ctx->pc = 0x164D04u;
    // 0x164d04: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x164D04u;
    {
        const bool branch_taken_0x164d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164D04u;
            // 0x164d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d04) {
            ctx->pc = 0x164E64u;
            goto label_164e64;
        }
    }
    ctx->pc = 0x164D0Cu;
label_164d0c:
    // 0x164d0c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x164d0cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164d10: 0x51903  sra         $v1, $a1, 4
    ctx->pc = 0x164d10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 4));
    // 0x164d14: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x164d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x164d18: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x164d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x164d1c: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x164d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x164d20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x164d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x164d24: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x164d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x164d28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164D28u;
    {
        const bool branch_taken_0x164d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164D28u;
            // 0x164d2c: 0xafa300d4  sw          $v1, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d28) {
            ctx->pc = 0x164D38u;
            goto label_164d38;
        }
    }
    ctx->pc = 0x164D30u;
    // 0x164d30: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x164d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x164d34: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x164d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_164d38:
    // 0x164d38: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x164d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x164d3c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x164D3Cu;
    {
        const bool branch_taken_0x164d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164d3c) {
            ctx->pc = 0x164D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164D3Cu;
            // 0x164d40: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x164D54u;
            goto label_164d54;
        }
    }
    ctx->pc = 0x164D44u;
    // 0x164d44: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x164d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x164d48: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x164d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x164d4c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x164d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x164d50: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x164d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_164d54:
    // 0x164d54: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x164D54u;
    {
        const bool branch_taken_0x164d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164d54) {
            ctx->pc = 0x164D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164D54u;
            // 0x164d58: 0xafb200d8  sw          $s2, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164D6Cu;
            goto label_164d6c;
        }
    }
    ctx->pc = 0x164D5Cu;
    // 0x164d5c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x164d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x164d60: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x164d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x164d64: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x164d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x164d68: 0xafb200d8  sw          $s2, 0xD8($sp)
    ctx->pc = 0x164d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 18));
label_164d6c:
    // 0x164d6c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x164d6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d70: 0x27be00d0  addiu       $fp, $sp, 0xD0
    ctx->pc = 0x164d70u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x164d74: 0x211b021  addu        $s6, $s0, $s1
    ctx->pc = 0x164d74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_164d78:
    // 0x164d78: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x164d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x164d7c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x164d7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x164d80: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x164d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x164d84: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x164D84u;
    {
        const bool branch_taken_0x164d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164d84) {
            ctx->pc = 0x164D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164D84u;
            // 0x164d88: 0x7ba200b0  lq          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164D94u;
            goto label_164d94;
        }
    }
    ctx->pc = 0x164D8Cu;
    // 0x164d8c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x164D8Cu;
    {
        const bool branch_taken_0x164d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164D8Cu;
            // 0x164d90: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d8c) {
            ctx->pc = 0x164E64u;
            goto label_164e64;
        }
    }
    ctx->pc = 0x164D94u;
label_164d94:
    // 0x164d94: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x164d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x164d98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164d9c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x164d9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164da0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x164da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x164da4: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x164da4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_164da8:
    // 0x164da8: 0x96670000  lhu         $a3, 0x0($s3)
    ctx->pc = 0x164da8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x164dac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x164dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x164db0: 0x50e20028  beql        $a3, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x164DB0u;
    {
        const bool branch_taken_0x164db0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x164db0) {
            ctx->pc = 0x164DB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164DB0u;
            // 0x164db4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164E54u;
            goto label_164e54;
        }
    }
    ctx->pc = 0x164DB8u;
    // 0x164db8: 0x96650002  lhu         $a1, 0x2($s3)
    ctx->pc = 0x164db8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x164dbc: 0x28e10051  slti        $at, $a3, 0x51
    ctx->pc = 0x164dbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)81) ? 1 : 0);
    // 0x164dc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x164dc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164dc4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x164DC4u;
    {
        const bool branch_taken_0x164dc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x164DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164DC4u;
            // 0x164dc8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164dc4) {
            ctx->pc = 0x164E08u;
            goto label_164e08;
        }
    }
    ctx->pc = 0x164DCCu;
    // 0x164dcc: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x164dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x164dd0: 0x92c60000  lbu         $a2, 0x0($s6)
    ctx->pc = 0x164dd0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x164dd4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x164dd4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164dd8: 0x30c200f0  andi        $v0, $a2, 0xF0
    ctx->pc = 0x164dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)240);
    // 0x164ddc: 0x308300f0  andi        $v1, $a0, 0xF0
    ctx->pc = 0x164ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x164de0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x164DE0u;
    {
        const bool branch_taken_0x164de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164de0) {
            ctx->pc = 0x164E08u;
            goto label_164e08;
        }
    }
    ctx->pc = 0x164DE8u;
    // 0x164de8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x164de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x164dec: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x164decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x164df0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x164DF0u;
    {
        const bool branch_taken_0x164df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164df0) {
            ctx->pc = 0x164E08u;
            goto label_164e08;
        }
    }
    ctx->pc = 0x164DF8u;
    // 0x164df8: 0x12510003  beq         $s2, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x164DF8u;
    {
        const bool branch_taken_0x164df8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        if (branch_taken_0x164df8) {
            ctx->pc = 0x164E08u;
            goto label_164e08;
        }
    }
    ctx->pc = 0x164E00u;
    // 0x164e00: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x164e00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164e04: 0x0  nop
    ctx->pc = 0x164e04u;
    // NOP
label_164e08:
    // 0x164e08: 0x14f10003  bne         $a3, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x164E08u;
    {
        const bool branch_taken_0x164e08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 17));
        if (branch_taken_0x164e08) {
            ctx->pc = 0x164E18u;
            goto label_164e18;
        }
    }
    ctx->pc = 0x164E10u;
    // 0x164e10: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x164e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164e14: 0x0  nop
    ctx->pc = 0x164e14u;
    // NOP
label_164e18:
    // 0x164e18: 0x1100ffe3  beqz        $t0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x164E18u;
    {
        const bool branch_taken_0x164e18 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x164e18) {
            ctx->pc = 0x164DA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_164da8;
        }
    }
    ctx->pc = 0x164E20u;
    // 0x164e20: 0x52800005  beql        $s4, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x164E20u;
    {
        const bool branch_taken_0x164e20 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x164e20) {
            ctx->pc = 0x164E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164E20u;
            // 0x164e24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164E38u;
            goto label_164e38;
        }
    }
    ctx->pc = 0x164E28u;
    // 0x164e28: 0xc05946c  jal         func_1651B0
    ctx->pc = 0x164E28u;
    SET_GPR_U32(ctx, 31, 0x164E30u);
    ctx->pc = 0x164E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164E28u;
            // 0x164e2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1651B0u;
    if (runtime->hasFunction(0x1651B0u)) {
        auto targetFn = runtime->lookupFunction(0x1651B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E30u; }
        if (ctx->pc != 0x164E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001651B0_0x1651b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E30u; }
        if (ctx->pc != 0x164E30u) { return; }
    }
    ctx->pc = 0x164E30u;
label_164e30:
    // 0x164e30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164E30u;
    {
        const bool branch_taken_0x164e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164E30u;
            // 0x164e34: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e30) {
            ctx->pc = 0x164E44u;
            goto label_164e44;
        }
    }
    ctx->pc = 0x164E38u;
label_164e38:
    // 0x164e38: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x164E38u;
    SET_GPR_U32(ctx, 31, 0x164E40u);
    ctx->pc = 0x164EA0u;
    if (runtime->hasFunction(0x164EA0u)) {
        auto targetFn = runtime->lookupFunction(0x164EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E40u; }
        if (ctx->pc != 0x164E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164EA0_0x164ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E40u; }
        if (ctx->pc != 0x164E40u) { return; }
    }
    ctx->pc = 0x164E40u;
label_164e40:
    // 0x164e40: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_164e44:
    // 0x164e44: 0x1040ffd8  beqz        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x164E44u;
    {
        const bool branch_taken_0x164e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164e44) {
            ctx->pc = 0x164DA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_164da8;
        }
    }
    ctx->pc = 0x164E4Cu;
    // 0x164e4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x164E4Cu;
    {
        const bool branch_taken_0x164e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164E4Cu;
            // 0x164e50: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e4c) {
            ctx->pc = 0x164E64u;
            goto label_164e64;
        }
    }
    ctx->pc = 0x164E54u;
label_164e54:
    // 0x164e54: 0x2ae20003  slti        $v0, $s7, 0x3
    ctx->pc = 0x164e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x164e58: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x164E58u;
    {
        const bool branch_taken_0x164e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164E58u;
            // 0x164e5c: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e58) {
            ctx->pc = 0x164D78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_164d78;
        }
    }
    ctx->pc = 0x164E60u;
    // 0x164e60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x164e60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164e64:
    // 0x164e64: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x164e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x164e68: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x164e68u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x164e6c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x164e6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x164e70: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x164e70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x164e74: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x164e74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x164e78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x164e78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x164e7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x164e7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164e80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x164e80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164e84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164e88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x164E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164E8Cu;
            // 0x164e90: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164E94u;
    // 0x164e94: 0x0  nop
    ctx->pc = 0x164e94u;
    // NOP
    // 0x164e98: 0x0  nop
    ctx->pc = 0x164e98u;
    // NOP
    // 0x164e9c: 0x0  nop
    ctx->pc = 0x164e9cu;
    // NOP
    ctx->pc = 0x164ea0u;
}
