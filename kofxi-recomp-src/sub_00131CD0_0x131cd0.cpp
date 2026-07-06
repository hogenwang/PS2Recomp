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

// Function: sub_00131CD0
// Address: 0x131cd0 - 0x131e40
void sub_00131CD0_0x131cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131CD0_0x131cd0");
#endif

    ctx->pc = 0x131cd0u;

    // 0x131cd0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x131cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x131cd4: 0x8c64a210  lw          $a0, -0x5DF0($v1)
    ctx->pc = 0x131cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943248)));
    // 0x131cd8: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x131cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x131cdc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x131CDCu;
    {
        const bool branch_taken_0x131cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x131CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131CDCu;
        // 0x131ce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131cdc) {
            ctx->pc = 0x131CE8u;
            goto label_131ce8;
        }
    }
    ctx->pc = 0x131CE4u;
    // 0x131ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131ce8:
    // 0x131ce8: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x131ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x131cec: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131CECu;
    {
        const bool branch_taken_0x131cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131cec) {
            ctx->pc = 0x131CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131CECu;
            // 0x131cf0: 0x30830004  andi        $v1, $a0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131CFCu;
            goto label_131cfc;
        }
    }
    ctx->pc = 0x131CF4u;
    // 0x131cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131cf8: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x131cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_131cfc:
    // 0x131cfc: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131CFCu;
    {
        const bool branch_taken_0x131cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131cfc) {
            ctx->pc = 0x131D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131CFCu;
            // 0x131d00: 0x30830008  andi        $v1, $a0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131D0Cu;
            goto label_131d0c;
        }
    }
    ctx->pc = 0x131D04u;
    // 0x131d04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131d08: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x131d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_131d0c:
    // 0x131d0c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131D0Cu;
    {
        const bool branch_taken_0x131d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d0c) {
            ctx->pc = 0x131D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131D0Cu;
            // 0x131d10: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131D1Cu;
            goto label_131d1c;
        }
    }
    ctx->pc = 0x131D14u;
    // 0x131d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131d18: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x131d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_131d1c:
    // 0x131d1c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131D1Cu;
    {
        const bool branch_taken_0x131d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d1c) {
            ctx->pc = 0x131D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131D1Cu;
            // 0x131d20: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131D2Cu;
            goto label_131d2c;
        }
    }
    ctx->pc = 0x131D24u;
    // 0x131d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131d28: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x131d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_131d2c:
    // 0x131d2c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131D2Cu;
    {
        const bool branch_taken_0x131d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d2c) {
            ctx->pc = 0x131D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131D2Cu;
            // 0x131d30: 0x30830040  andi        $v1, $a0, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131D3Cu;
            goto label_131d3c;
        }
    }
    ctx->pc = 0x131D34u;
    // 0x131d34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131d38: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x131d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_131d3c:
    // 0x131d3c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x131D3Cu;
    {
        const bool branch_taken_0x131d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d3c) {
            ctx->pc = 0x131D48u;
            goto label_131d48;
        }
    }
    ctx->pc = 0x131D44u;
    // 0x131d44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131d48:
    // 0x131d48: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131d4c: 0x94645a98  lhu         $a0, 0x5A98($v1)
    ctx->pc = 0x131d4cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 23192)));
    // 0x131d50: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x131d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x131d54: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131D54u;
    {
        const bool branch_taken_0x131d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d54) {
            ctx->pc = 0x131D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131D54u;
            // 0x131d58: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131D64u;
            goto label_131d64;
        }
    }
    ctx->pc = 0x131D5Cu;
    // 0x131d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131d60: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x131d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_131d64:
    // 0x131d64: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131D64u;
    {
        const bool branch_taken_0x131d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d64) {
            ctx->pc = 0x131D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131D64u;
            // 0x131d68: 0x30830004  andi        $v1, $a0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131D74u;
            goto label_131d74;
        }
    }
    ctx->pc = 0x131D6Cu;
    // 0x131d6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131d70: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x131d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_131d74:
    // 0x131d74: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131D74u;
    {
        const bool branch_taken_0x131d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d74) {
            ctx->pc = 0x131D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131D74u;
            // 0x131d78: 0x30830008  andi        $v1, $a0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131D84u;
            goto label_131d84;
        }
    }
    ctx->pc = 0x131D7Cu;
    // 0x131d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131d80: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x131d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_131d84:
    // 0x131d84: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131D84u;
    {
        const bool branch_taken_0x131d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d84) {
            ctx->pc = 0x131D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131D84u;
            // 0x131d88: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131D94u;
            goto label_131d94;
        }
    }
    ctx->pc = 0x131D8Cu;
    // 0x131d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131d90: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x131d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_131d94:
    // 0x131d94: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131D94u;
    {
        const bool branch_taken_0x131d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d94) {
            ctx->pc = 0x131D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131D94u;
            // 0x131d98: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131DA4u;
            goto label_131da4;
        }
    }
    ctx->pc = 0x131D9Cu;
    // 0x131d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131da0: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x131da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_131da4:
    // 0x131da4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131DA4u;
    {
        const bool branch_taken_0x131da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131da4) {
            ctx->pc = 0x131DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131DA4u;
            // 0x131da8: 0x30830040  andi        $v1, $a0, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131DB4u;
            goto label_131db4;
        }
    }
    ctx->pc = 0x131DACu;
    // 0x131dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131db0: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x131db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_131db4:
    // 0x131db4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131DB4u;
    {
        const bool branch_taken_0x131db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131db4) {
            ctx->pc = 0x131DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131DB4u;
            // 0x131db8: 0x30830080  andi        $v1, $a0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131DC4u;
            goto label_131dc4;
        }
    }
    ctx->pc = 0x131DBCu;
    // 0x131dbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131dc0: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x131dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_131dc4:
    // 0x131dc4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131DC4u;
    {
        const bool branch_taken_0x131dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131dc4) {
            ctx->pc = 0x131DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131DC4u;
            // 0x131dc8: 0x30830100  andi        $v1, $a0, 0x100 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131DD4u;
            goto label_131dd4;
        }
    }
    ctx->pc = 0x131DCCu;
    // 0x131dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131dd0: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x131dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_131dd4:
    // 0x131dd4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131DD4u;
    {
        const bool branch_taken_0x131dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131dd4) {
            ctx->pc = 0x131DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131DD4u;
            // 0x131dd8: 0x30830200  andi        $v1, $a0, 0x200 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131DE4u;
            goto label_131de4;
        }
    }
    ctx->pc = 0x131DDCu;
    // 0x131ddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131de0: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x131de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
label_131de4:
    // 0x131de4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131DE4u;
    {
        const bool branch_taken_0x131de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131de4) {
            ctx->pc = 0x131DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131DE4u;
            // 0x131de8: 0x30830400  andi        $v1, $a0, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131DF4u;
            goto label_131df4;
        }
    }
    ctx->pc = 0x131DECu;
    // 0x131dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131df0: 0x30830400  andi        $v1, $a0, 0x400
    ctx->pc = 0x131df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
label_131df4:
    // 0x131df4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131DF4u;
    {
        const bool branch_taken_0x131df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131df4) {
            ctx->pc = 0x131DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131DF4u;
            // 0x131df8: 0x30830800  andi        $v1, $a0, 0x800 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131E04u;
            goto label_131e04;
        }
    }
    ctx->pc = 0x131DFCu;
    // 0x131dfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131e00: 0x30830800  andi        $v1, $a0, 0x800
    ctx->pc = 0x131e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
label_131e04:
    // 0x131e04: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131E04u;
    {
        const bool branch_taken_0x131e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131e04) {
            ctx->pc = 0x131E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131E04u;
            // 0x131e08: 0x30831000  andi        $v1, $a0, 0x1000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131E14u;
            goto label_131e14;
        }
    }
    ctx->pc = 0x131E0Cu;
    // 0x131e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131e10: 0x30831000  andi        $v1, $a0, 0x1000
    ctx->pc = 0x131e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
label_131e14:
    // 0x131e14: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131E14u;
    {
        const bool branch_taken_0x131e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131e14) {
            ctx->pc = 0x131E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131E14u;
            // 0x131e18: 0x30832000  andi        $v1, $a0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131E24u;
            goto label_131e24;
        }
    }
    ctx->pc = 0x131E1Cu;
    // 0x131e1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131e20: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x131e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
label_131e24:
    // 0x131e24: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x131E24u;
    {
        const bool branch_taken_0x131e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131e24) {
            ctx->pc = 0x131E30u;
            goto label_131e30;
        }
    }
    ctx->pc = 0x131E2Cu;
    // 0x131e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131e30:
    // 0x131e30: 0x3e00008  jr          $ra
    ctx->pc = 0x131E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131E38u;
    // 0x131e38: 0x0  nop
    ctx->pc = 0x131e38u;
    // NOP
    // 0x131e3c: 0x0  nop
    ctx->pc = 0x131e3cu;
    // NOP
}
