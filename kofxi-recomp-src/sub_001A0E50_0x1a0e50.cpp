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

// Function: sub_001A0E50
// Address: 0x1a0e50 - 0x1a0f90
void sub_001A0E50_0x1a0e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0E50_0x1a0e50");
#endif

    ctx->pc = 0x1a0e50u;

    // 0x1a0e50: 0x8c8700dc  lw          $a3, 0xDC($a0)
    ctx->pc = 0x1a0e50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1a0e54: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0e58: 0x908904ea  lbu         $t1, 0x4EA($a0)
    ctx->pc = 0x1a0e58u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1258)));
    // 0x1a0e5c: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x1a0e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x1a0e60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e64: 0x30e7000c  andi        $a3, $a3, 0xC
    ctx->pc = 0x1a0e64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)12);
    // 0x1a0e68: 0x74082  srl         $t0, $a3, 2
    ctx->pc = 0x1a0e68u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
    // 0x1a0e6c: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x1a0e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1a0e70: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1a0e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a0e74: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1a0e74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1a0e78: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1a0e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a0e7c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1a0e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1a0e80: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A0E80u;
    {
        const bool branch_taken_0x1a0e80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E80u;
        // 0x1a0e84: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e80) {
            ctx->pc = 0x1A0EF0u;
            goto label_1a0ef0;
        }
    }
    ctx->pc = 0x1A0E88u;
    // 0x1a0e88: 0x908503ec  lbu         $a1, 0x3EC($a0)
    ctx->pc = 0x1a0e88u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1004)));
    // 0x1a0e8c: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1a0e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1a0e90: 0x50a40032  beql        $a1, $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1A0E90u;
    {
        const bool branch_taken_0x1a0e90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0e90) {
            ctx->pc = 0x1A0E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0E90u;
            // 0x1a0e94: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0F5Cu;
            goto label_1a0f5c;
        }
    }
    ctx->pc = 0x1A0E98u;
    // 0x1a0e98: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1a0e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a0e9c: 0x50a4002f  beql        $a1, $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1A0E9Cu;
    {
        const bool branch_taken_0x1a0e9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0e9c) {
            ctx->pc = 0x1A0EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0E9Cu;
            // 0x1a0ea0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0F5Cu;
            goto label_1a0f5c;
        }
    }
    ctx->pc = 0x1A0EA4u;
    // 0x1a0ea4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1a0ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a0ea8: 0x50a4002c  beql        $a1, $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A0EA8u;
    {
        const bool branch_taken_0x1a0ea8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0ea8) {
            ctx->pc = 0x1A0EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0EA8u;
            // 0x1a0eac: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0F5Cu;
            goto label_1a0f5c;
        }
    }
    ctx->pc = 0x1A0EB0u;
    // 0x1a0eb0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1a0eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a0eb4: 0x50a40029  beql        $a1, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A0EB4u;
    {
        const bool branch_taken_0x1a0eb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0eb4) {
            ctx->pc = 0x1A0EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0EB4u;
            // 0x1a0eb8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0F5Cu;
            goto label_1a0f5c;
        }
    }
    ctx->pc = 0x1A0EBCu;
    // 0x1a0ebc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1a0ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a0ec0: 0x50a40026  beql        $a1, $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A0EC0u;
    {
        const bool branch_taken_0x1a0ec0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0ec0) {
            ctx->pc = 0x1A0EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0EC0u;
            // 0x1a0ec4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0F5Cu;
            goto label_1a0f5c;
        }
    }
    ctx->pc = 0x1A0EC8u;
    // 0x1a0ec8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1a0ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a0ecc: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0ECCu;
    {
        const bool branch_taken_0x1a0ecc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0ecc) {
            ctx->pc = 0x1A0EE4u;
            goto label_1a0ee4;
        }
    }
    ctx->pc = 0x1A0ED4u;
    // 0x1a0ed4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0ED4u;
    {
        const bool branch_taken_0x1a0ed4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ed4) {
            ctx->pc = 0x1A0EE4u;
            goto label_1a0ee4;
        }
    }
    ctx->pc = 0x1A0EDCu;
    // 0x1a0edc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1A0EDCu;
    {
        const bool branch_taken_0x1a0edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0edc) {
            ctx->pc = 0x1A0F5Cu;
            goto label_1a0f5c;
        }
    }
    ctx->pc = 0x1A0EE4u;
label_1a0ee4:
    // 0x1a0ee4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a0ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0ee8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1A0EE8u;
    {
        const bool branch_taken_0x1a0ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ee8) {
            ctx->pc = 0x1A0F5Cu;
            goto label_1a0f5c;
        }
    }
    ctx->pc = 0x1A0EF0u;
label_1a0ef0:
    // 0x1a0ef0: 0x908503ec  lbu         $a1, 0x3EC($a0)
    ctx->pc = 0x1a0ef0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1004)));
    // 0x1a0ef4: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1a0ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1a0ef8: 0x50a40018  beql        $a1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A0EF8u;
    {
        const bool branch_taken_0x1a0ef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0ef8) {
            ctx->pc = 0x1A0EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0EF8u;
            // 0x1a0efc: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0F5Cu;
            goto label_1a0f5c;
        }
    }
    ctx->pc = 0x1A0F00u;
    // 0x1a0f00: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1a0f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a0f04: 0x50a40015  beql        $a1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A0F04u;
    {
        const bool branch_taken_0x1a0f04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0f04) {
            ctx->pc = 0x1A0F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0F04u;
            // 0x1a0f08: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0F5Cu;
            goto label_1a0f5c;
        }
    }
    ctx->pc = 0x1A0F0Cu;
    // 0x1a0f0c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1a0f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a0f10: 0x50a40012  beql        $a1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A0F10u;
    {
        const bool branch_taken_0x1a0f10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0f10) {
            ctx->pc = 0x1A0F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0F10u;
            // 0x1a0f14: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0F5Cu;
            goto label_1a0f5c;
        }
    }
    ctx->pc = 0x1A0F18u;
    // 0x1a0f18: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1a0f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a0f1c: 0x50a4000f  beql        $a1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A0F1Cu;
    {
        const bool branch_taken_0x1a0f1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0f1c) {
            ctx->pc = 0x1A0F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0F1Cu;
            // 0x1a0f20: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0F5Cu;
            goto label_1a0f5c;
        }
    }
    ctx->pc = 0x1A0F24u;
    // 0x1a0f24: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1a0f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a0f28: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0F28u;
    {
        const bool branch_taken_0x1a0f28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0f28) {
            ctx->pc = 0x1A0F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0F28u;
            // 0x1a0f2c: 0x31240003  andi        $a0, $t1, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0F50u;
            goto label_1a0f50;
        }
    }
    ctx->pc = 0x1A0F30u;
    // 0x1a0f30: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1a0f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a0f34: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0F34u;
    {
        const bool branch_taken_0x1a0f34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0f34) {
            ctx->pc = 0x1A0F4Cu;
            goto label_1a0f4c;
        }
    }
    ctx->pc = 0x1A0F3Cu;
    // 0x1a0f3c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0F3Cu;
    {
        const bool branch_taken_0x1a0f3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f3c) {
            ctx->pc = 0x1A0F4Cu;
            goto label_1a0f4c;
        }
    }
    ctx->pc = 0x1A0F44u;
    // 0x1a0f44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0F44u;
    {
        const bool branch_taken_0x1a0f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f44) {
            ctx->pc = 0x1A0F5Cu;
            goto label_1a0f5c;
        }
    }
    ctx->pc = 0x1A0F4Cu;
label_1a0f4c:
    // 0x1a0f4c: 0x31240003  andi        $a0, $t1, 0x3
    ctx->pc = 0x1a0f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_1a0f50:
    // 0x1a0f50: 0x54800002  bnel        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0F50u;
    {
        const bool branch_taken_0x1a0f50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f50) {
            ctx->pc = 0x1A0F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0F50u;
            // 0x1a0f54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0F5Cu;
            goto label_1a0f5c;
        }
    }
    ctx->pc = 0x1A0F58u;
    // 0x1a0f58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0f5c:
    // 0x1a0f5c: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x1a0f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1a0f60: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1a0f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1a0f64: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1a0f64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a0f68: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1a0f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a0f6c: 0x84a401ac  lh          $a0, 0x1AC($a1)
    ctx->pc = 0x1a0f6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 428)));
    // 0x1a0f70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a0f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a0f74: 0xa4a401ac  sh          $a0, 0x1AC($a1)
    ctx->pc = 0x1a0f74u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 428), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a0f78: 0x90630007  lbu         $v1, 0x7($v1)
    ctx->pc = 0x1a0f78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x1a0f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F7Cu;
        // 0x1a0f80: 0xa4a301ae  sh          $v1, 0x1AE($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 430), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0F84u;
    // 0x1a0f84: 0x0  nop
    ctx->pc = 0x1a0f84u;
    // NOP
    // 0x1a0f88: 0x0  nop
    ctx->pc = 0x1a0f88u;
    // NOP
    // 0x1a0f8c: 0x0  nop
    ctx->pc = 0x1a0f8cu;
    // NOP
    if (ctx->pc == 0x1a0f8cu) { ctx->pc = 0x1a0f90u; }
}
