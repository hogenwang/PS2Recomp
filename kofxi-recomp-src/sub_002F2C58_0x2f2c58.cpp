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

// Function: sub_002F2C58
// Address: 0x2f2c58 - 0x2f2e08
void sub_002F2C58_0x2f2c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2C58_0x2f2c58");
#endif

    switch (ctx->pc) {
        case 0x2f2cd8u: goto label_2f2cd8;
        case 0x2f2d3cu: goto label_2f2d3c;
        case 0x2f2d4cu: goto label_2f2d4c;
        case 0x2f2d64u: goto label_2f2d64;
        case 0x2f2d90u: goto label_2f2d90;
        case 0x2f2da0u: goto label_2f2da0;
        case 0x2f2dc8u: goto label_2f2dc8;
        default: break;
    }

    ctx->pc = 0x2f2c58u;

    // 0x2f2c58: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f2c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f2c5c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2f2c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2f2c60: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2f2c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f2c64: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2f2c64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c68: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f2c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f2c6c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2f2c6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c70: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f2c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f2c74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f2c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f2c78: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2f2c78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f2c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f2c80: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f2c80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f2c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f2c88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f2c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f2c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f2c90: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x2f2c90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c94: 0x8eaa0000  lw          $t2, 0x0($s5)
    ctx->pc = 0x2f2c94u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f2c98: 0x1140000a  beqz        $t2, . + 4 + (0xA << 2)
    ctx->pc = 0x2F2C98u;
    {
        const bool branch_taken_0x2f2c98 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C98u;
        // 0x2f2c9c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c98) {
            ctx->pc = 0x2F2CC4u;
            goto label_2f2cc4;
        }
    }
    ctx->pc = 0x2F2CA0u;
    // 0x2f2ca0: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2CA0u;
    {
        const bool branch_taken_0x2f2ca0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CA0u;
        // 0x2f2ca4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ca0) {
            ctx->pc = 0x2F2CC4u;
            goto label_2f2cc4;
        }
    }
    ctx->pc = 0x2F2CA8u;
    // 0x2f2ca8: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x2f2ca8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f2cac: 0x80431bc9  lb          $v1, 0x1BC9($v0)
    ctx->pc = 0x2f2cacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 7113)));
    // 0x2f2cb0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2CB0u;
    {
        const bool branch_taken_0x2f2cb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CB0u;
        // 0x2f2cb4: 0x2563821  addu        $a3, $s2, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2cb0) {
            ctx->pc = 0x2F2CC8u;
            goto label_2f2cc8;
        }
    }
    ctx->pc = 0x2F2CB8u;
    // 0x2f2cb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2cbc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2F2CBCu;
    {
        const bool branch_taken_0x2f2cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CBCu;
        // 0x2f2cc0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2cbc) {
            ctx->pc = 0x2F2D7Cu;
            goto label_2f2d7c;
        }
    }
    ctx->pc = 0x2F2CC4u;
label_2f2cc4:
    // 0x2f2cc4: 0x2563821  addu        $a3, $s2, $s6
    ctx->pc = 0x2f2cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
label_2f2cc8:
    // 0x2f2cc8: 0x247102b  sltu        $v0, $s2, $a3
    ctx->pc = 0x2f2cc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2f2ccc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F2CCCu;
    {
        const bool branch_taken_0x2f2ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CCCu;
        // 0x2f2cd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ccc) {
            ctx->pc = 0x2F2D2Cu;
            goto label_2f2d2c;
        }
    }
    ctx->pc = 0x2F2CD4u;
    // 0x2f2cd4: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f2cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
label_2f2cd8:
    // 0x2f2cd8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x2f2cd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f2cdc: 0x81021bc8  lb          $v0, 0x1BC8($t0)
    ctx->pc = 0x2f2cdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 7112)));
    // 0x2f2ce0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F2CE0u;
    {
        const bool branch_taken_0x2f2ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CE0u;
        // 0x2f2ce4: 0x25061bc8  addiu       $a2, $t0, 0x1BC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 7112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ce0) {
            ctx->pc = 0x2F2D10u;
            goto label_2f2d10;
        }
    }
    ctx->pc = 0x2F2CE8u;
    // 0x2f2ce8: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x2f2ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f2cec: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x2f2cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2f2cf0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2F2CF0u;
    {
        const bool branch_taken_0x2f2cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2cf0) {
            ctx->pc = 0x2F2CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2CF0u;
            // 0x2f2cf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2D20u;
            goto label_2f2d20;
        }
    }
    ctx->pc = 0x2F2CF8u;
    // 0x2f2cf8: 0x80c30001  lb          $v1, 0x1($a2)
    ctx->pc = 0x2f2cf8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2f2cfc: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x2f2cfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2f2d00: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2D00u;
    {
        const bool branch_taken_0x2f2d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f2d00) {
            ctx->pc = 0x2F2D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2D00u;
            // 0x2f2d04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2D20u;
            goto label_2f2d20;
        }
    }
    ctx->pc = 0x2F2D08u;
    // 0x2f2d08: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2F2D08u;
    {
        const bool branch_taken_0x2f2d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D08u;
        // 0x2f2d0c: 0x2642fffe  addiu       $v0, $s2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d08) {
            ctx->pc = 0x2F2D78u;
            goto label_2f2d78;
        }
    }
    ctx->pc = 0x2F2D10u;
label_2f2d10:
    // 0x2f2d10: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x2f2d10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2f2d14: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F2D14u;
    {
        const bool branch_taken_0x2f2d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D14u;
        // 0x2f2d18: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d14) {
            ctx->pc = 0x2F2D74u;
            goto label_2f2d74;
        }
    }
    ctx->pc = 0x2F2D1Cu;
    // 0x2f2d1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f2d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f2d20:
    // 0x2f2d20: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x2f2d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2f2d24: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F2D24u;
    {
        const bool branch_taken_0x2f2d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D24u;
        // 0x2f2d28: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d24) {
            ctx->pc = 0x2F2CD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f2cd8;
        }
    }
    ctx->pc = 0x2F2D2Cu;
label_2f2d2c:
    // 0x2f2d2c: 0x11600005  beqz        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2D2Cu;
    {
        const bool branch_taken_0x2f2d2c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D2Cu;
        // 0x2f2d30: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d2c) {
            ctx->pc = 0x2F2D44u;
            goto label_2f2d44;
        }
    }
    ctx->pc = 0x2F2D34u;
    // 0x2f2d34: 0xc0be46c  jal         func_2F91B0
    ctx->pc = 0x2F2D34u;
    SET_GPR_U32(ctx, 31, 0x2F2D3Cu);
    ctx->pc = 0x2F2D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D34u;
    // 0x2f2d38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F91B0u, 0x2F2D34u, 0x2F2D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D3Cu;
label_2f2d3c:
    // 0x2f2d3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2D3Cu;
    {
        const bool branch_taken_0x2f2d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D3Cu;
        // 0x2f2d40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d3c) {
            ctx->pc = 0x2F2D50u;
            goto label_2f2d50;
        }
    }
    ctx->pc = 0x2F2D44u;
label_2f2d44:
    // 0x2f2d44: 0xc0be450  jal         func_2F9140
    ctx->pc = 0x2F2D44u;
    SET_GPR_U32(ctx, 31, 0x2F2D4Cu);
    ctx->pc = 0x2F2D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D44u;
    // 0x2f2d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9140u, 0x2F2D44u, 0x2F2D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D4Cu;
label_2f2d4c:
    // 0x2f2d4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f2d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2d50:
    // 0x2f2d50: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F2D50u;
    {
        const bool branch_taken_0x2f2d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D50u;
        // 0x2f2d54: 0x2343023  subu        $a2, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d50) {
            ctx->pc = 0x2F2DACu;
            goto label_2f2dac;
        }
    }
    ctx->pc = 0x2F2D58u;
    // 0x2f2d58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f2d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d5c: 0xc049c48  jal         func_127120
    ctx->pc = 0x2F2D5Cu;
    SET_GPR_U32(ctx, 31, 0x2F2D64u);
    ctx->pc = 0x2F2D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D5Cu;
    // 0x2f2d60: 0x2142021  addu        $a0, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F2D5Cu, 0x2F2D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D64u;
label_2f2d64:
    // 0x2f2d64: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x2f2d64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x2f2d68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f2d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f2d6c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2F2D6Cu;
    {
        const bool branch_taken_0x2f2d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D6Cu;
        // 0x2f2d70: 0xae760000  sw          $s6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d6c) {
            ctx->pc = 0x2F2DE0u;
            goto label_2f2de0;
        }
    }
    ctx->pc = 0x2F2D74u;
label_2f2d74:
    // 0x2f2d74: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x2f2d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2f2d78:
    // 0x2f2d78: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2f2d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2f2d7c:
    // 0x2f2d7c: 0x11600006  beqz        $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2D7Cu;
    {
        const bool branch_taken_0x2f2d7c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D7Cu;
        // 0x2f2d80: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d7c) {
            ctx->pc = 0x2F2D98u;
            goto label_2f2d98;
        }
    }
    ctx->pc = 0x2F2D84u;
    // 0x2f2d84: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2f2d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d88: 0xc0be46c  jal         func_2F91B0
    ctx->pc = 0x2F2D88u;
    SET_GPR_U32(ctx, 31, 0x2F2D90u);
    ctx->pc = 0x2F2D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D88u;
    // 0x2f2d8c: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F91B0u, 0x2F2D88u, 0x2F2D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D90u;
label_2f2d90:
    // 0x2f2d90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2D90u;
    {
        const bool branch_taken_0x2f2d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D90u;
        // 0x2f2d94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d90) {
            ctx->pc = 0x2F2DA4u;
            goto label_2f2da4;
        }
    }
    ctx->pc = 0x2F2D98u;
label_2f2d98:
    // 0x2f2d98: 0xc0be450  jal         func_2F9140
    ctx->pc = 0x2F2D98u;
    SET_GPR_U32(ctx, 31, 0x2F2DA0u);
    ctx->pc = 0x2F2D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D98u;
    // 0x2f2d9c: 0x26240001  addiu       $a0, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9140u, 0x2F2D98u, 0x2F2DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DA0u;
label_2f2da0:
    // 0x2f2da0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f2da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2da4:
    // 0x2f2da4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2DA4u;
    {
        const bool branch_taken_0x2f2da4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DA4u;
        // 0x2f2da8: 0x291102a  slt         $v0, $s4, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2da4) {
            ctx->pc = 0x2F2DB4u;
            goto label_2f2db4;
        }
    }
    ctx->pc = 0x2F2DACu;
label_2f2dac:
    // 0x2f2dac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2F2DACu;
    {
        const bool branch_taken_0x2f2dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DACu;
        // 0x2f2db0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2dac) {
            ctx->pc = 0x2F2DE0u;
            goto label_2f2de0;
        }
    }
    ctx->pc = 0x2F2DB4u;
label_2f2db4:
    // 0x2f2db4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2DB4u;
    {
        const bool branch_taken_0x2f2db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DB4u;
        // 0x2f2db8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2db4) {
            ctx->pc = 0x2F2DC8u;
            goto label_2f2dc8;
        }
    }
    ctx->pc = 0x2F2DBCu;
    // 0x2f2dbc: 0x2343023  subu        $a2, $s1, $s4
    ctx->pc = 0x2f2dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2f2dc0: 0xc049c48  jal         func_127120
    ctx->pc = 0x2F2DC0u;
    SET_GPR_U32(ctx, 31, 0x2F2DC8u);
    ctx->pc = 0x2F2DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DC0u;
    // 0x2f2dc4: 0x2142021  addu        $a0, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F2DC0u, 0x2F2DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DC8u;
label_2f2dc8:
    // 0x2f2dc8: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2f2dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2f2dcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f2dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2dd0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2f2dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f2dd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f2dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f2dd8: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x2f2dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x2f2ddc: 0x71100b  movn        $v0, $v1, $s1
    ctx->pc = 0x2f2ddcu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_2f2de0:
    // 0x2f2de0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f2de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f2de4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2f2de4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f2de8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2f2de8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2dec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f2decu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2df0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f2df0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2df4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f2df4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2df8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f2df8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2dfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f2dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2e00: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E00u;
        // 0x2f2e04: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2E08u;
}
