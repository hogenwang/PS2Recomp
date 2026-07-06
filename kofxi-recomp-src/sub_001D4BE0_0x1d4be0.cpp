#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D4BE0
// Address: 0x1d4be0 - 0x1d5148
void sub_001D4BE0_0x1d4be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4BE0_0x1d4be0");
#endif

    ctx->pc = 0x1d4be0u;

    // 0x1d4be0: 0x248b0180  addiu       $t3, $a0, 0x180
    ctx->pc = 0x1d4be0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1d4be4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d4be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4be8: 0x8d62043c  lw          $v0, 0x43C($t3)
    ctx->pc = 0x1d4be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1084)));
    // 0x1d4bec: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x1d4becu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4bf0: 0x8d640308  lw          $a0, 0x308($t3)
    ctx->pc = 0x1d4bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 776)));
    // 0x1d4bf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d4bf8: 0xad630420  sw          $v1, 0x420($t3)
    ctx->pc = 0x1d4bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1056), GPR_U32(ctx, 3));
    // 0x1d4bfc: 0xad62043c  sw          $v0, 0x43C($t3)
    ctx->pc = 0x1d4bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1084), GPR_U32(ctx, 2));
    // 0x1d4c00: 0xad6004a4  sw          $zero, 0x4A4($t3)
    ctx->pc = 0x1d4c00u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1188), GPR_U32(ctx, 0));
    // 0x1d4c04: 0xad6004a8  sw          $zero, 0x4A8($t3)
    ctx->pc = 0x1d4c04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1192), GPR_U32(ctx, 0));
    // 0x1d4c08: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4C08u;
    {
        const bool branch_taken_0x1d4c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C08u;
        // 0x1d4c0c: 0xad6004ac  sw          $zero, 0x4AC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 1196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c08) {
            ctx->pc = 0x1D4C1Cu;
            goto label_1d4c1c;
        }
    }
    ctx->pc = 0x1D4C10u;
    // 0x1d4c10: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d4c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d4c14: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4C14u;
    {
        const bool branch_taken_0x1d4c14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4c14) {
            ctx->pc = 0x1D4C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4C14u;
            // 0x1d4c18: 0x8d620494  lw          $v0, 0x494($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4C2Cu;
            goto label_1d4c2c;
        }
    }
    ctx->pc = 0x1D4C1Cu;
label_1d4c1c:
    // 0x1d4c1c: 0x8d62030c  lw          $v0, 0x30C($t3)
    ctx->pc = 0x1d4c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 780)));
    // 0x1d4c20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4C20u;
    {
        const bool branch_taken_0x1d4c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C20u;
        // 0x1d4c24: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c20) {
            ctx->pc = 0x1D4C38u;
            goto label_1d4c38;
        }
    }
    ctx->pc = 0x1D4C28u;
    // 0x1d4c28: 0x8d620494  lw          $v0, 0x494($t3)
    ctx->pc = 0x1d4c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
label_1d4c2c:
    // 0x1d4c2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d4c30: 0xad620494  sw          $v0, 0x494($t3)
    ctx->pc = 0x1d4c30u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1172), GPR_U32(ctx, 2));
    // 0x1d4c34: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1d4c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d4c38:
    // 0x1d4c38: 0x1824024  and         $t0, $t4, $v0
    ctx->pc = 0x1d4c38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x1d4c3c: 0x1881823  subu        $v1, $t4, $t0
    ctx->pc = 0x1d4c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x1d4c40: 0x81090000  lb          $t1, 0x0($t0)
    ctx->pc = 0x1d4c40u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4c44: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4c48: 0x350c0  sll         $t2, $v1, 3
    ctx->pc = 0x1d4c48u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d4c4c: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1d4c4cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4c50: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4c50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4c54: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x1d4c54u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4c58: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4c5c: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x1d4c5cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4c60: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4c60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4c64: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d4c64u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4c68: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4c6c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d4c6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4c70: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4c70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4c74: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1d4c74u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1d4c78: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4c78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4c7c: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x1d4c7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x1d4c80: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d4c80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d4c84: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d4c84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4c88: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4c88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4c8c: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1d4c8cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1d4c90: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4c90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4c94: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x1d4c94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x1d4c98: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d4c98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4c9c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d4c9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d4ca0: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1d4ca0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1d4ca4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4ca8: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x1d4ca8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x1d4cac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4cb0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d4cb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d4cb4: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4CB4u;
    {
        const bool branch_taken_0x1d4cb4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CB4u;
        // 0x1d4cb8: 0x1494804  sllv        $t1, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 10) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cb4) {
            ctx->pc = 0x1D4CD8u;
            goto label_1d4cd8;
        }
    }
    ctx->pc = 0x1D4CBCu;
    // 0x1d4cbc: 0xa1023  negu        $v0, $t2
    ctx->pc = 0x1d4cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x1d4cc0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d4cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4cc4: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x1d4cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d4cc8: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1d4cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1d4ccc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4CCCu;
    {
        const bool branch_taken_0x1d4ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CCCu;
        // 0x1d4cd0: 0xad6200b8  sw          $v0, 0xB8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ccc) {
            ctx->pc = 0x1D4CE0u;
            goto label_1d4ce0;
        }
    }
    ctx->pc = 0x1D4CD4u;
    // 0x1d4cd4: 0x0  nop
    ctx->pc = 0x1d4cd4u;
    // NOP
label_1d4cd8:
    // 0x1d4cd8: 0xad6900b8  sw          $t1, 0xB8($t3)
    ctx->pc = 0x1d4cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 184), GPR_U32(ctx, 9));
    // 0x1d4cdc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d4cdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ce0:
    // 0x1d4ce0: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d4ce0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4ce4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4ce8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d4ce8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4cec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4cecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4cf0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4cf4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d4cf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4cf8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d4cf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d4cfc: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x1d4cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d4d00: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4d00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4d04: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4d04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4d08: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1d4d08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4d0c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4d10: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d4d10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d4d14: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4d14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4d18: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D4D18u;
    {
        const bool branch_taken_0x1d4d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D18u;
        // 0x1d4d1c: 0xe43825  or          $a3, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d18) {
            ctx->pc = 0x1D4D90u;
            goto label_1d4d90;
        }
    }
    ctx->pc = 0x1D4D20u;
    // 0x1d4d20: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x1d4d20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x1d4d24: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4D24u;
    {
        const bool branch_taken_0x1d4d24 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D24u;
        // 0x1d4d28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d24) {
            ctx->pc = 0x1D4D48u;
            goto label_1d4d48;
        }
    }
    ctx->pc = 0x1D4D2Cu;
    // 0x1d4d2c: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1d4d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d4d30: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d4d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4d34: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d4d34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d4d38: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x1d4d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1d4d3c: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1d4d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1d4d40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4D40u;
    {
        const bool branch_taken_0x1d4d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D40u;
        // 0x1d4d44: 0xad6300bc  sw          $v1, 0xBC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d40) {
            ctx->pc = 0x1D4D54u;
            goto label_1d4d54;
        }
    }
    ctx->pc = 0x1D4D48u;
label_1d4d48:
    // 0x1d4d48: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1d4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1d4d4c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d4d4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d50: 0xad6200bc  sw          $v0, 0xBC($t3)
    ctx->pc = 0x1d4d50u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 188), GPR_U32(ctx, 2));
label_1d4d54:
    // 0x1d4d54: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d4d54u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4d58: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4d58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4d5c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d4d5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4d60: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4d64: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4d64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4d68: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d4d68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4d6c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d4d6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d4d70: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4d70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4d74: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4d74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4d78: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d4d78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4d7c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d4d7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d4d80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4d80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4d84: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4d84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4d88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4D88u;
    {
        const bool branch_taken_0x1d4d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D88u;
        // 0x1d4d8c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d88) {
            ctx->pc = 0x1D4DA0u;
            goto label_1d4da0;
        }
    }
    ctx->pc = 0x1D4D90u;
label_1d4d90:
    // 0x1d4d90: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1d4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1d4d94: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1d4d94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1d4d98: 0xad6200bc  sw          $v0, 0xBC($t3)
    ctx->pc = 0x1d4d98u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 188), GPR_U32(ctx, 2));
    // 0x1d4d9c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d4d9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1d4da0:
    // 0x1d4da0: 0x2942001b  slti        $v0, $t2, 0x1B
    ctx->pc = 0x1d4da0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1d4da4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D4DA4u;
    {
        const bool branch_taken_0x1d4da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DA4u;
        // 0x1d4da8: 0x916c2  srl         $v0, $t1, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4da4) {
            ctx->pc = 0x1D4E20u;
            goto label_1d4e20;
        }
    }
    ctx->pc = 0x1D4DACu;
    // 0x1d4dac: 0x254affe5  addiu       $t2, $t2, -0x1B
    ctx->pc = 0x1d4dacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967269));
    // 0x1d4db0: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4DB0u;
    {
        const bool branch_taken_0x1d4db0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DB0u;
        // 0x1d4db4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4db0) {
            ctx->pc = 0x1D4DD8u;
            goto label_1d4dd8;
        }
    }
    ctx->pc = 0x1D4DB8u;
    // 0x1d4db8: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1d4db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d4dbc: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d4dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4dc0: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d4dc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d4dc4: 0x91ec2  srl         $v1, $t1, 27
    ctx->pc = 0x1d4dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
    // 0x1d4dc8: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1d4dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1d4dcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4DCCu;
    {
        const bool branch_taken_0x1d4dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DCCu;
        // 0x1d4dd0: 0xad6300c0  sw          $v1, 0xC0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4dcc) {
            ctx->pc = 0x1D4DE4u;
            goto label_1d4de4;
        }
    }
    ctx->pc = 0x1D4DD4u;
    // 0x1d4dd4: 0x0  nop
    ctx->pc = 0x1d4dd4u;
    // NOP
label_1d4dd8:
    // 0x1d4dd8: 0x916c2  srl         $v0, $t1, 27
    ctx->pc = 0x1d4dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
    // 0x1d4ddc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d4ddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4de0: 0xad6200c0  sw          $v0, 0xC0($t3)
    ctx->pc = 0x1d4de0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 192), GPR_U32(ctx, 2));
label_1d4de4:
    // 0x1d4de4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d4de4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4de8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4de8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4dec: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d4decu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4df0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4df0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4df4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4df4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4df8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d4df8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4dfc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d4dfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d4e00: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4e00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4e04: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4e04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4e08: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d4e08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4e0c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d4e0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d4e10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4e14: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4e14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4e18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4E18u;
    {
        const bool branch_taken_0x1d4e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E18u;
        // 0x1d4e1c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e18) {
            ctx->pc = 0x1D4E2Cu;
            goto label_1d4e2c;
        }
    }
    ctx->pc = 0x1D4E20u;
label_1d4e20:
    // 0x1d4e20: 0x94940  sll         $t1, $t1, 5
    ctx->pc = 0x1d4e20u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x1d4e24: 0xad6200c0  sw          $v0, 0xC0($t3)
    ctx->pc = 0x1d4e24u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 192), GPR_U32(ctx, 2));
    // 0x1d4e28: 0x254a0005  addiu       $t2, $t2, 0x5
    ctx->pc = 0x1d4e28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 5));
label_1d4e2c:
    // 0x1d4e2c: 0x2942001a  slti        $v0, $t2, 0x1A
    ctx->pc = 0x1d4e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1d4e30: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D4E30u;
    {
        const bool branch_taken_0x1d4e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E30u;
        // 0x1d4e34: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e30) {
            ctx->pc = 0x1D4EA8u;
            goto label_1d4ea8;
        }
    }
    ctx->pc = 0x1D4E38u;
    // 0x1d4e38: 0x254affe6  addiu       $t2, $t2, -0x1A
    ctx->pc = 0x1d4e38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967270));
    // 0x1d4e3c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4E3Cu;
    {
        const bool branch_taken_0x1d4e3c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E3Cu;
        // 0x1d4e40: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e3c) {
            ctx->pc = 0x1D4E60u;
            goto label_1d4e60;
        }
    }
    ctx->pc = 0x1D4E44u;
    // 0x1d4e44: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1d4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d4e48: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d4e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4e4c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d4e4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d4e50: 0x91e82  srl         $v1, $t1, 26
    ctx->pc = 0x1d4e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x1d4e54: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1d4e54u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1d4e58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4E58u;
    {
        const bool branch_taken_0x1d4e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E58u;
        // 0x1d4e5c: 0xad6300c4  sw          $v1, 0xC4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e58) {
            ctx->pc = 0x1D4E6Cu;
            goto label_1d4e6c;
        }
    }
    ctx->pc = 0x1D4E60u;
label_1d4e60:
    // 0x1d4e60: 0x91682  srl         $v0, $t1, 26
    ctx->pc = 0x1d4e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x1d4e64: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d4e64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e68: 0xad6200c4  sw          $v0, 0xC4($t3)
    ctx->pc = 0x1d4e68u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 196), GPR_U32(ctx, 2));
label_1d4e6c:
    // 0x1d4e6c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d4e6cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4e70: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4e70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4e74: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d4e74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4e78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4e78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4e7c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4e80: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d4e80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4e84: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d4e84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d4e88: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4e88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4e8c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4e90: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d4e90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4e94: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d4e94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d4e98: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4e9c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4ea0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4EA0u;
    {
        const bool branch_taken_0x1d4ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EA0u;
        // 0x1d4ea4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ea0) {
            ctx->pc = 0x1D4EB4u;
            goto label_1d4eb4;
        }
    }
    ctx->pc = 0x1D4EA8u;
label_1d4ea8:
    // 0x1d4ea8: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1d4ea8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x1d4eac: 0xad6200c4  sw          $v0, 0xC4($t3)
    ctx->pc = 0x1d4eacu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 196), GPR_U32(ctx, 2));
    // 0x1d4eb0: 0x254a0006  addiu       $t2, $t2, 0x6
    ctx->pc = 0x1d4eb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6));
label_1d4eb4:
    // 0x1d4eb4: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x1d4eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d4eb8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D4EB8u;
    {
        const bool branch_taken_0x1d4eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EB8u;
        // 0x1d4ebc: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4eb8) {
            ctx->pc = 0x1D4F30u;
            goto label_1d4f30;
        }
    }
    ctx->pc = 0x1D4EC0u;
    // 0x1d4ec0: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x1d4ec0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x1d4ec4: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4EC4u;
    {
        const bool branch_taken_0x1d4ec4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EC4u;
        // 0x1d4ec8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ec4) {
            ctx->pc = 0x1D4EE8u;
            goto label_1d4ee8;
        }
    }
    ctx->pc = 0x1D4ECCu;
    // 0x1d4ecc: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1d4eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d4ed0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d4ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4ed4: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d4ed4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d4ed8: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x1d4ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1d4edc: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1d4edcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1d4ee0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4EE0u;
    {
        const bool branch_taken_0x1d4ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EE0u;
        // 0x1d4ee4: 0xad630018  sw          $v1, 0x18($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ee0) {
            ctx->pc = 0x1D4EF4u;
            goto label_1d4ef4;
        }
    }
    ctx->pc = 0x1D4EE8u;
label_1d4ee8:
    // 0x1d4ee8: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1d4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1d4eec: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d4eecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ef0: 0xad620018  sw          $v0, 0x18($t3)
    ctx->pc = 0x1d4ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 2));
label_1d4ef4:
    // 0x1d4ef4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d4ef4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4ef8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4efc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d4efcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4f00: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4f04: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4f04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4f08: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d4f08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4f0c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d4f0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d4f10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4f10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4f14: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4f14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4f18: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d4f18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4f1c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d4f1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d4f20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4f24: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4f24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4f28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4F28u;
    {
        const bool branch_taken_0x1d4f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F28u;
        // 0x1d4f2c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f28) {
            ctx->pc = 0x1D4F3Cu;
            goto label_1d4f3c;
        }
    }
    ctx->pc = 0x1D4F30u;
label_1d4f30:
    // 0x1d4f30: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1d4f30u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1d4f34: 0xad620018  sw          $v0, 0x18($t3)
    ctx->pc = 0x1d4f34u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 2));
    // 0x1d4f38: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d4f38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1d4f3c:
    // 0x1d4f3c: 0x2942001a  slti        $v0, $t2, 0x1A
    ctx->pc = 0x1d4f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1d4f40: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D4F40u;
    {
        const bool branch_taken_0x1d4f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F40u;
        // 0x1d4f44: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f40) {
            ctx->pc = 0x1D4FB8u;
            goto label_1d4fb8;
        }
    }
    ctx->pc = 0x1D4F48u;
    // 0x1d4f48: 0x254affe6  addiu       $t2, $t2, -0x1A
    ctx->pc = 0x1d4f48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967270));
    // 0x1d4f4c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4F4Cu;
    {
        const bool branch_taken_0x1d4f4c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F4Cu;
        // 0x1d4f50: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f4c) {
            ctx->pc = 0x1D4F70u;
            goto label_1d4f70;
        }
    }
    ctx->pc = 0x1D4F54u;
    // 0x1d4f54: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1d4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d4f58: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d4f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4f5c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d4f5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d4f60: 0x91e82  srl         $v1, $t1, 26
    ctx->pc = 0x1d4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x1d4f64: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1d4f64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1d4f68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4F68u;
    {
        const bool branch_taken_0x1d4f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F68u;
        // 0x1d4f6c: 0xad6300c8  sw          $v1, 0xC8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f68) {
            ctx->pc = 0x1D4F7Cu;
            goto label_1d4f7c;
        }
    }
    ctx->pc = 0x1D4F70u;
label_1d4f70:
    // 0x1d4f70: 0x91682  srl         $v0, $t1, 26
    ctx->pc = 0x1d4f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x1d4f74: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d4f74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f78: 0xad6200c8  sw          $v0, 0xC8($t3)
    ctx->pc = 0x1d4f78u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 200), GPR_U32(ctx, 2));
label_1d4f7c:
    // 0x1d4f7c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d4f7cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4f80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4f84: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d4f84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4f88: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4f88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4f8c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4f90: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d4f90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4f94: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d4f94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d4f98: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4f9c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4fa0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d4fa0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4fa4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d4fa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d4fa8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4fac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d4facu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d4fb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4FB0u;
    {
        const bool branch_taken_0x1d4fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FB0u;
        // 0x1d4fb4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4fb0) {
            ctx->pc = 0x1D4FC4u;
            goto label_1d4fc4;
        }
    }
    ctx->pc = 0x1D4FB8u;
label_1d4fb8:
    // 0x1d4fb8: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1d4fb8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x1d4fbc: 0xad6200c8  sw          $v0, 0xC8($t3)
    ctx->pc = 0x1d4fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 200), GPR_U32(ctx, 2));
    // 0x1d4fc0: 0x254a0006  addiu       $t2, $t2, 0x6
    ctx->pc = 0x1d4fc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6));
label_1d4fc4:
    // 0x1d4fc4: 0x2942001a  slti        $v0, $t2, 0x1A
    ctx->pc = 0x1d4fc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1d4fc8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D4FC8u;
    {
        const bool branch_taken_0x1d4fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FC8u;
        // 0x1d4fcc: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4fc8) {
            ctx->pc = 0x1D5040u;
            goto label_1d5040;
        }
    }
    ctx->pc = 0x1D4FD0u;
    // 0x1d4fd0: 0x254affe6  addiu       $t2, $t2, -0x1A
    ctx->pc = 0x1d4fd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967270));
    // 0x1d4fd4: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4FD4u;
    {
        const bool branch_taken_0x1d4fd4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FD4u;
        // 0x1d4fd8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4fd4) {
            ctx->pc = 0x1D4FF8u;
            goto label_1d4ff8;
        }
    }
    ctx->pc = 0x1D4FDCu;
    // 0x1d4fdc: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1d4fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d4fe0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d4fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4fe4: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d4fe4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d4fe8: 0x91e82  srl         $v1, $t1, 26
    ctx->pc = 0x1d4fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x1d4fec: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1d4fecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1d4ff0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4FF0u;
    {
        const bool branch_taken_0x1d4ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FF0u;
        // 0x1d4ff4: 0xad6300cc  sw          $v1, 0xCC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ff0) {
            ctx->pc = 0x1D5004u;
            goto label_1d5004;
        }
    }
    ctx->pc = 0x1D4FF8u;
label_1d4ff8:
    // 0x1d4ff8: 0x91682  srl         $v0, $t1, 26
    ctx->pc = 0x1d4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x1d4ffc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d4ffcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5000: 0xad6200cc  sw          $v0, 0xCC($t3)
    ctx->pc = 0x1d5000u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 204), GPR_U32(ctx, 2));
label_1d5004:
    // 0x1d5004: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d5004u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5008: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d500c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d500cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5010: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5014: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d5014u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5018: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d5018u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d501c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d501cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d5020: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5024: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d5024u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5028: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d5028u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d502c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d502cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d5030: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5034: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d5034u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5038: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5038u;
    {
        const bool branch_taken_0x1d5038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5038u;
        // 0x1d503c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5038) {
            ctx->pc = 0x1D504Cu;
            goto label_1d504c;
        }
    }
    ctx->pc = 0x1D5040u;
label_1d5040:
    // 0x1d5040: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1d5040u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x1d5044: 0xad6200cc  sw          $v0, 0xCC($t3)
    ctx->pc = 0x1d5044u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 204), GPR_U32(ctx, 2));
    // 0x1d5048: 0x254a0006  addiu       $t2, $t2, 0x6
    ctx->pc = 0x1d5048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6));
label_1d504c:
    // 0x1d504c: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x1d504cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d5050: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D5050u;
    {
        const bool branch_taken_0x1d5050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5050u;
        // 0x1d5054: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5050) {
            ctx->pc = 0x1D50C8u;
            goto label_1d50c8;
        }
    }
    ctx->pc = 0x1D5058u;
    // 0x1d5058: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x1d5058u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x1d505c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D505Cu;
    {
        const bool branch_taken_0x1d505c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D505Cu;
        // 0x1d5060: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d505c) {
            ctx->pc = 0x1D5080u;
            goto label_1d5080;
        }
    }
    ctx->pc = 0x1D5064u;
    // 0x1d5064: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1d5064u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d5068: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d5068u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d506c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d506cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d5070: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x1d5070u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1d5074: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1d5074u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1d5078: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5078u;
    {
        const bool branch_taken_0x1d5078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5078u;
        // 0x1d507c: 0xad6300d0  sw          $v1, 0xD0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5078) {
            ctx->pc = 0x1D508Cu;
            goto label_1d508c;
        }
    }
    ctx->pc = 0x1D5080u;
label_1d5080:
    // 0x1d5080: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1d5080u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1d5084: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d5084u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5088: 0xad6200d0  sw          $v0, 0xD0($t3)
    ctx->pc = 0x1d5088u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 208), GPR_U32(ctx, 2));
label_1d508c:
    // 0x1d508c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d508cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5090: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5094: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d5094u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5098: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d509c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d509cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d50a0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d50a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d50a4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d50a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d50a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d50a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d50ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d50acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d50b0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d50b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d50b4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d50b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d50b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d50b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d50bc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d50bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d50c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D50C0u;
    {
        const bool branch_taken_0x1d50c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D50C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50C0u;
        // 0x1d50c4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d50c0) {
            ctx->pc = 0x1D50D4u;
            goto label_1d50d4;
        }
    }
    ctx->pc = 0x1D50C8u;
label_1d50c8:
    // 0x1d50c8: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1d50c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1d50cc: 0xad6200d0  sw          $v0, 0xD0($t3)
    ctx->pc = 0x1d50ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 208), GPR_U32(ctx, 2));
    // 0x1d50d0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d50d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1d50d4:
    // 0x1d50d4: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x1d50d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d50d8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1D50D8u;
    {
        const bool branch_taken_0x1d50d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d50d8) {
            ctx->pc = 0x1D50DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D50D8u;
            // 0x1d50dc: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5118u;
            goto label_1d5118;
        }
    }
    ctx->pc = 0x1D50E0u;
    // 0x1d50e0: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x1d50e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x1d50e4: 0x51400008  beql        $t2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D50E4u;
    {
        const bool branch_taken_0x1d50e4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d50e4) {
            ctx->pc = 0x1D50E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D50E4u;
            // 0x1d50e8: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5108u;
            goto label_1d5108;
        }
    }
    ctx->pc = 0x1D50ECu;
    // 0x1d50ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d50ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d50f0: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1d50f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d50f4: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d50f8: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d50f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d50fc: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x1d50fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1d5100: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D5100u;
    {
        const bool branch_taken_0x1d5100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5100u;
        // 0x1d5104: 0xad6300d4  sw          $v1, 0xD4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5100) {
            ctx->pc = 0x1D510Cu;
            goto label_1d510c;
        }
    }
    ctx->pc = 0x1D5108u;
label_1d5108:
    // 0x1d5108: 0xad6200d4  sw          $v0, 0xD4($t3)
    ctx->pc = 0x1d5108u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 212), GPR_U32(ctx, 2));
label_1d510c:
    // 0x1d510c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D510Cu;
    {
        const bool branch_taken_0x1d510c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D510Cu;
        // 0x1d5110: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d510c) {
            ctx->pc = 0x1D5120u;
            goto label_1d5120;
        }
    }
    ctx->pc = 0x1D5114u;
    // 0x1d5114: 0x0  nop
    ctx->pc = 0x1d5114u;
    // NOP
label_1d5118:
    // 0x1d5118: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d5118u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d511c: 0xad6200d4  sw          $v0, 0xD4($t3)
    ctx->pc = 0x1d511cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 212), GPR_U32(ctx, 2));
label_1d5120:
    // 0x1d5120: 0x10c1823  subu        $v1, $t0, $t4
    ctx->pc = 0x1d5120u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x1d5124: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d5124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d5128: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1d5128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1d512c: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x1d512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x1d5130: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x1d5130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x1d5134: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1d5134u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d5138: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1d5138u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1d513c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1d513cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1d5140: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5140u;
        // 0x1d5144: 0x1821021  addu        $v0, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5148u;
}
