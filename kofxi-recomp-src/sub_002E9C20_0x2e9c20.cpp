#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E9C20
// Address: 0x2e9c20 - 0x2e9ef0
void sub_002E9C20_0x2e9c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9C20_0x2e9c20");
#endif

    switch (ctx->pc) {
        case 0x2e9c4cu: goto label_2e9c4c;
        case 0x2e9d00u: goto label_2e9d00;
        case 0x2e9d08u: goto label_2e9d08;
        case 0x2e9d14u: goto label_2e9d14;
        case 0x2e9d30u: goto label_2e9d30;
        case 0x2e9d48u: goto label_2e9d48;
        case 0x2e9d98u: goto label_2e9d98;
        case 0x2e9e88u: goto label_2e9e88;
        default: break;
    }

    ctx->pc = 0x2e9c20u;

    // 0x2e9c20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e9c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2e9c24: 0x3403c021  ori         $v1, $zero, 0xC021
    ctx->pc = 0x2e9c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49185);
    // 0x2e9c28: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2e9c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2e9c2c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2e9c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2e9c30: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2e9c30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c34: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2e9c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2e9c38: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e9c38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c3c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2e9c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2e9c40: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2e9c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2e9c44: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2e9c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2e9c48: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2e9c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2e9c4c:
    // 0x2e9c4c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2e9c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2e9c50: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2e9c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2e9c54: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e9c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e9c58: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x2e9c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e9c5c: 0x90c50002  lbu         $a1, 0x2($a2)
    ctx->pc = 0x2e9c5cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2e9c60: 0x90c40003  lbu         $a0, 0x3($a2)
    ctx->pc = 0x2e9c60u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x2e9c64: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x2e9c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2e9c68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e9c6c: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E9C6Cu;
    {
        const bool branch_taken_0x2e9c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e9c6c) {
            ctx->pc = 0x2E9C98u;
            goto label_2e9c98;
        }
    }
    ctx->pc = 0x2E9C74u;
    // 0x2e9c74: 0x8ec20290  lw          $v0, 0x290($s6)
    ctx->pc = 0x2e9c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 656)));
    // 0x2e9c78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E9C78u;
    {
        const bool branch_taken_0x2e9c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9C78u;
            // 0x2e9c7c: 0x24c30002  addiu       $v1, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9c78) {
            ctx->pc = 0x2E9C98u;
            goto label_2e9c98;
        }
    }
    ctx->pc = 0x2E9C80u;
    // 0x2e9c80: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2e9c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2e9c84: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x2e9c84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x2e9c88: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2e9c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2e9c8c: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x2e9c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x2e9c90: 0x90c40003  lbu         $a0, 0x3($a2)
    ctx->pc = 0x2e9c90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x2e9c94: 0x90c50002  lbu         $a1, 0x2($a2)
    ctx->pc = 0x2e9c94u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_2e9c98:
    // 0x2e9c98: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2E9C98u;
    {
        const bool branch_taken_0x2e9c98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9c98) {
            ctx->pc = 0x2E9C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9C98u;
            // 0x2e9c9c: 0x8ec37ff0  lw          $v1, 0x7FF0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32752)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9CC8u;
            goto label_2e9cc8;
        }
    }
    ctx->pc = 0x2E9CA0u;
    // 0x2e9ca0: 0x8ec20288  lw          $v0, 0x288($s6)
    ctx->pc = 0x2e9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 648)));
    // 0x2e9ca4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E9CA4u;
    {
        const bool branch_taken_0x2e9ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9ca4) {
            ctx->pc = 0x2E9CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9CA4u;
            // 0x2e9ca8: 0x8ec37ff0  lw          $v1, 0x7FF0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32752)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9CC8u;
            goto label_2e9cc8;
        }
    }
    ctx->pc = 0x2E9CACu;
    // 0x2e9cac: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2e9cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e9cb0: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x2e9cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2e9cb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e9cb8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e9cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e9cbc: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x2e9cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x2e9cc0: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x2e9cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
    // 0x2e9cc4: 0x8ec37ff0  lw          $v1, 0x7FF0($s6)
    ctx->pc = 0x2e9cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32752)));
label_2e9cc8:
    // 0x2e9cc8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9CC8u;
    {
        const bool branch_taken_0x2e9cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9CC8u;
            // 0x2e9ccc: 0x26d36484  addiu       $s3, $s6, 0x6484 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 25732));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9cc8) {
            ctx->pc = 0x2E9CDCu;
            goto label_2e9cdc;
        }
    }
    ctx->pc = 0x2E9CD0u;
    // 0x2e9cd0: 0x8ec25c54  lw          $v0, 0x5C54($s6)
    ctx->pc = 0x2e9cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 23636)));
    // 0x2e9cd4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E9CD4u;
    {
        const bool branch_taken_0x2e9cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9cd4) {
            ctx->pc = 0x2E9CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9CD4u;
            // 0x2e9cd8: 0x8e850008  lw          $a1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9CF4u;
            goto label_2e9cf4;
        }
    }
    ctx->pc = 0x2E9CDCu;
label_2e9cdc:
    // 0x2e9cdc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2e9cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e9ce0: 0x26d36485  addiu       $s3, $s6, 0x6485
    ctx->pc = 0x2e9ce0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 25733));
    // 0x2e9ce4: 0x2403007e  addiu       $v1, $zero, 0x7E
    ctx->pc = 0x2e9ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x2e9ce8: 0xaec27ff0  sw          $v0, 0x7FF0($s6)
    ctx->pc = 0x2e9ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 32752), GPR_U32(ctx, 2));
    // 0x2e9cec: 0xa2c36484  sb          $v1, 0x6484($s6)
    ctx->pc = 0x2e9cecu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 25732), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9cf0: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x2e9cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2e9cf4:
    // 0x2e9cf4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2e9cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e9cf8: 0xc0ba6f2  jal         func_2E9BC8
    ctx->pc = 0x2E9CF8u;
    SET_GPR_U32(ctx, 31, 0x2E9D00u);
    ctx->pc = 0x2E9CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9CF8u;
            // 0x2e9cfc: 0x8e86000c  lw          $a2, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E9BC8u;
    if (runtime->hasFunction(0x2E9BC8u)) {
        auto targetFn = runtime->lookupFunction(0x2E9BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9D00u; }
        if (ctx->pc != 0x2E9D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E9BC8_0x2e9bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9D00u; }
        if (ctx->pc != 0x2E9D00u) { return; }
    }
    ctx->pc = 0x2E9D00u;
label_2e9d00:
    // 0x2e9d00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9D00u;
    {
        const bool branch_taken_0x2e9d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9D00u;
            // 0x2e9d04: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d00) {
            ctx->pc = 0x2E9D18u;
            goto label_2e9d18;
        }
    }
    ctx->pc = 0x2E9D08u;
label_2e9d08:
    // 0x2e9d08: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2e9d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d0c: 0xc0ba6f2  jal         func_2E9BC8
    ctx->pc = 0x2E9D0Cu;
    SET_GPR_U32(ctx, 31, 0x2E9D14u);
    ctx->pc = 0x2E9D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9D0Cu;
            // 0x2e9d10: 0x8e86000c  lw          $a2, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E9BC8u;
    if (runtime->hasFunction(0x2E9BC8u)) {
        auto targetFn = runtime->lookupFunction(0x2E9BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9D14u; }
        if (ctx->pc != 0x2E9D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E9BC8_0x2e9bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9D14u; }
        if (ctx->pc != 0x2E9D14u) { return; }
    }
    ctx->pc = 0x2E9D14u;
label_2e9d14:
    // 0x2e9d14: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2e9d14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9d18:
    // 0x2e9d18: 0x8e910008  lw          $s1, 0x8($s4)
    ctx->pc = 0x2e9d18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e9d1c: 0x8e92000c  lw          $s2, 0xC($s4)
    ctx->pc = 0x2e9d1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2e9d20: 0x1a40002a  blez        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x2E9D20u;
    {
        const bool branch_taken_0x2e9d20 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2E9D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9D20u;
            // 0x2e9d24: 0x232a821  addu        $s5, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d20) {
            ctx->pc = 0x2E9DCCu;
            goto label_2e9dcc;
        }
    }
    ctx->pc = 0x2E9D28u;
    // 0x2e9d28: 0x241e007d  addiu       $fp, $zero, 0x7D
    ctx->pc = 0x2e9d28u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x2e9d2c: 0x0  nop
    ctx->pc = 0x2e9d2cu;
    // NOP
label_2e9d30:
    // 0x2e9d30: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x2e9d30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2e9d34: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E9D34u;
    {
        const bool branch_taken_0x2e9d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9D34u;
            // 0x2e9d38: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d34) {
            ctx->pc = 0x2E9D7Cu;
            goto label_2e9d7c;
        }
    }
    ctx->pc = 0x2E9D3Cu;
    // 0x2e9d3c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x2e9d3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e9d40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9D40u;
    {
        const bool branch_taken_0x2e9d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9D40u;
            // 0x2e9d44: 0x26c57f5c  addiu       $a1, $s6, 0x7F5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 32604));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d40) {
            ctx->pc = 0x2E9D58u;
            goto label_2e9d58;
        }
    }
    ctx->pc = 0x2E9D48u;
label_2e9d48:
    // 0x2e9d48: 0xd5102b  sltu        $v0, $a2, $s5
    ctx->pc = 0x2e9d48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2e9d4c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E9D4Cu;
    {
        const bool branch_taken_0x2e9d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9D4Cu;
            // 0x2e9d50: 0xd18023  subu        $s0, $a2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d4c) {
            ctx->pc = 0x2E9D80u;
            goto label_2e9d80;
        }
    }
    ctx->pc = 0x2E9D54u;
    // 0x2e9d54: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x2e9d54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2e9d58:
    // 0x2e9d58: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2e9d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2e9d5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e9d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e9d60: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2e9d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2e9d64: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2e9d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e9d68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e9d6c: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x2e9d6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2e9d70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e9d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e9d74: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E9D74u;
    {
        const bool branch_taken_0x2e9d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9d74) {
            ctx->pc = 0x2E9D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9D74u;
            // 0x2e9d78: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9D48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e9d48;
        }
    }
    ctx->pc = 0x2E9D7Cu;
label_2e9d7c:
    // 0x2e9d7c: 0xd18023  subu        $s0, $a2, $s1
    ctx->pc = 0x2e9d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_2e9d80:
    // 0x2e9d80: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E9D80u;
    {
        const bool branch_taken_0x2e9d80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9D80u;
            // 0x2e9d84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d80) {
            ctx->pc = 0x2E9DA0u;
            goto label_2e9da0;
        }
    }
    ctx->pc = 0x2E9D88u;
    // 0x2e9d88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e9d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e9d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d90: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2E9D90u;
    SET_GPR_U32(ctx, 31, 0x2E9D98u);
    ctx->pc = 0x2E9D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9D90u;
            // 0x2e9d94: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9D98u; }
        if (ctx->pc != 0x2E9D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9D98u; }
        if (ctx->pc != 0x2E9D98u) { return; }
    }
    ctx->pc = 0x2E9D98u;
label_2e9d98:
    // 0x2e9d98: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x2e9d98u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2e9d9c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x2e9d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2e9da0:
    // 0x2e9da0: 0x5240000b  beql        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2E9DA0u;
    {
        const bool branch_taken_0x2e9da0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9da0) {
            ctx->pc = 0x2E9DA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9DA0u;
            // 0x2e9da4: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9DD0u;
            goto label_2e9dd0;
        }
    }
    ctx->pc = 0x2E9DA8u;
    // 0x2e9da8: 0xa27e0000  sb          $fp, 0x0($s3)
    ctx->pc = 0x2e9da8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 30));
    // 0x2e9dac: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2e9dacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2e9db0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e9db0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e9db4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2e9db4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e9db8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e9db8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e9dbc: 0x38420020  xori        $v0, $v0, 0x20
    ctx->pc = 0x2e9dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)32);
    // 0x2e9dc0: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x2e9dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e9dc4: 0x1e40ffda  bgtz        $s2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2E9DC4u;
    {
        const bool branch_taken_0x2e9dc4 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x2E9DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9DC4u;
            // 0x2e9dc8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9dc4) {
            ctx->pc = 0x2E9D30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e9d30;
        }
    }
    ctx->pc = 0x2E9DCCu;
label_2e9dcc:
    // 0x2e9dcc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2e9dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e9dd0:
    // 0x2e9dd0: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x2E9DD0u;
    {
        const bool branch_taken_0x2e9dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9dd0) {
            ctx->pc = 0x2E9DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9DD0u;
            // 0x2e9dd4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9EACu;
            goto label_2e9eac;
        }
    }
    ctx->pc = 0x2E9DD8u;
    // 0x2e9dd8: 0x173827  nor         $a3, $zero, $s7
    ctx->pc = 0x2e9dd8u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x2e9ddc: 0x26c87f5c  addiu       $t0, $s6, 0x7F5C
    ctx->pc = 0x2e9ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 32604));
    // 0x2e9de0: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x2e9de0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2e9de4: 0x30e2001f  andi        $v0, $a3, 0x1F
    ctx->pc = 0x2e9de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x2e9de8: 0x61943  sra         $v1, $a2, 5
    ctx->pc = 0x2e9de8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 5));
    // 0x2e9dec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e9decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e9df0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2e9df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2e9df4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e9df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e9df8: 0x442007  srav        $a0, $a0, $v0
    ctx->pc = 0x2e9df8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e9dfc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2e9dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e9e00: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9E00u;
    {
        const bool branch_taken_0x2e9e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9E00u;
            // 0x2e9e04: 0x38c20020  xori        $v0, $a2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e00) {
            ctx->pc = 0x2E9E1Cu;
            goto label_2e9e1c;
        }
    }
    ctx->pc = 0x2E9E08u;
    // 0x2e9e08: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x2e9e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x2e9e0c: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x2e9e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9e10: 0x27a50002  addiu       $a1, $sp, 0x2
    ctx->pc = 0x2e9e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x2e9e14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9E14u;
    {
        const bool branch_taken_0x2e9e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9E14u;
            // 0x2e9e18: 0xa3a20001  sb          $v0, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e14) {
            ctx->pc = 0x2E9E24u;
            goto label_2e9e24;
        }
    }
    ctx->pc = 0x2E9E1Cu;
label_2e9e1c:
    // 0x2e9e1c: 0xa3a60000  sb          $a2, 0x0($sp)
    ctx->pc = 0x2e9e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2e9e20: 0x27a50001  addiu       $a1, $sp, 0x1
    ctx->pc = 0x2e9e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
label_2e9e24:
    // 0x2e9e24: 0x71203  sra         $v0, $a3, 8
    ctx->pc = 0x2e9e24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 8));
    // 0x2e9e28: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x2e9e28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e9e2c: 0x61943  sra         $v1, $a2, 5
    ctx->pc = 0x2e9e2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 5));
    // 0x2e9e30: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2e9e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2e9e34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e9e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e9e38: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2e9e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2e9e3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e9e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e9e40: 0x442007  srav        $a0, $a0, $v0
    ctx->pc = 0x2e9e40u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e9e44: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2e9e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e9e48: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9E48u;
    {
        const bool branch_taken_0x2e9e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9E48u;
            // 0x2e9e4c: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e48) {
            ctx->pc = 0x2E9E64u;
            goto label_2e9e64;
        }
    }
    ctx->pc = 0x2E9E50u;
    // 0x2e9e50: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2e9e50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e9e54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e9e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e9e58: 0x38c20020  xori        $v0, $a2, 0x20
    ctx->pc = 0x2e9e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)32);
    // 0x2e9e5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9E5Cu;
    {
        const bool branch_taken_0x2e9e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9E5Cu;
            // 0x2e9e60: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e5c) {
            ctx->pc = 0x2E9E68u;
            goto label_2e9e68;
        }
    }
    ctx->pc = 0x2E9E64u;
label_2e9e64:
    // 0x2e9e64: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x2e9e64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
label_2e9e68:
    // 0x2e9e68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e9e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e9e6c: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x2e9e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x2e9e70: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2e9e70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e9e74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e9e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e9e78: 0x3a5102b  sltu        $v0, $sp, $a1
    ctx->pc = 0x2e9e78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 29) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2e9e7c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E9E7Cu;
    {
        const bool branch_taken_0x2e9e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9E7Cu;
            // 0x2e9e80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e7c) {
            ctx->pc = 0x2E9EA4u;
            goto label_2e9ea4;
        }
    }
    ctx->pc = 0x2E9E84u;
    // 0x2e9e84: 0x0  nop
    ctx->pc = 0x2e9e84u;
    // NOP
label_2e9e88:
    // 0x2e9e88: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2e9e88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e9e8c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e9e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e9e90: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x2e9e90u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e9e94: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x2e9e94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2e9e98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e9e98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e9e9c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E9E9Cu;
    {
        const bool branch_taken_0x2e9e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9e9c) {
            ctx->pc = 0x2E9E88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e9e88;
        }
    }
    ctx->pc = 0x2E9EA4u;
label_2e9ea4:
    // 0x2e9ea4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2e9ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e9ea8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e9ea8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9eac:
    // 0x2e9eac: 0x5680ff96  bnel        $s4, $zero, . + 4 + (-0x6A << 2)
    ctx->pc = 0x2E9EACu;
    {
        const bool branch_taken_0x2e9eac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9eac) {
            ctx->pc = 0x2E9EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9EACu;
            // 0x2e9eb0: 0x8e850008  lw          $a1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9D08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e9d08;
        }
    }
    ctx->pc = 0x2E9EB4u;
    // 0x2e9eb4: 0x26629b7c  addiu       $v0, $s3, -0x6484
    ctx->pc = 0x2e9eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941564));
    // 0x2e9eb8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2e9eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e9ebc: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x2e9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2e9ec0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2e9ec0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e9ec4: 0xaec26480  sw          $v0, 0x6480($s6)
    ctx->pc = 0x2e9ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 25728), GPR_U32(ctx, 2));
    // 0x2e9ec8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2e9ec8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e9ecc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2e9eccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e9ed0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2e9ed0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e9ed4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2e9ed4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e9ed8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2e9ed8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e9edc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2e9edcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e9ee0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2e9ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9ee4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e9ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9EE8u;
            // 0x2e9eec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9EF0u;
    ctx->pc = 0x2e9ef0u;
}
