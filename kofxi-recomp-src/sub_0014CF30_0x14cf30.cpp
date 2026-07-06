#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014CF30
// Address: 0x14cf30 - 0x14d080
void sub_0014CF30_0x14cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CF30_0x14cf30");
#endif

    switch (ctx->pc) {
        case 0x14cf58u: goto label_14cf58;
        case 0x14cfccu: goto label_14cfcc;
        default: break;
    }

    ctx->pc = 0x14cf30u;

    // 0x14cf30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14cf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14cf34: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14cf38: 0x8448e3b8  lh          $t0, -0x1C48($v0)
    ctx->pc = 0x14cf38u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960056)));
    // 0x14cf3c: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x14cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x14cf40: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14cf44: 0xa7a8000c  sh          $t0, 0xC($sp)
    ctx->pc = 0x14cf44u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 8));
    // 0x14cf48: 0x8447e3ba  lh          $a3, -0x1C46($v0)
    ctx->pc = 0x14cf48u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960058)));
    // 0x14cf4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14cf50: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14CF50u;
    {
        const bool branch_taken_0x14cf50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF50u;
            // 0x14cf54: 0xa7a7000e  sh          $a3, 0xE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf50) {
            ctx->pc = 0x14CF74u;
            goto label_14cf74;
        }
    }
    ctx->pc = 0x14CF58u;
label_14cf58:
    // 0x14cf58: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x14cf58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cf5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14cf60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14cf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14cf64: 0x0  nop
    ctx->pc = 0x14cf64u;
    // NOP
    // 0x14cf68: 0x0  nop
    ctx->pc = 0x14cf68u;
    // NOP
    // 0x14cf6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14CF6Cu;
    {
        const bool branch_taken_0x14cf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cf6c) {
            ctx->pc = 0x14CF58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14cf58;
        }
    }
    ctx->pc = 0x14CF74u;
label_14cf74:
    // 0x14cf74: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x14cf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14cf78: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x14cf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x14cf7c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x14cf7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14cf80: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CF80u;
    {
        const bool branch_taken_0x14cf80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cf80) {
            ctx->pc = 0x14CF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF80u;
            // 0x14cf84: 0xa3a40008  sb          $a0, 0x8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CF90u;
            goto label_14cf90;
        }
    }
    ctx->pc = 0x14CF88u;
    // 0x14cf88: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x14CF88u;
    {
        const bool branch_taken_0x14cf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF88u;
            // 0x14cf8c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf88) {
            ctx->pc = 0x14D074u;
            goto label_14d074;
        }
    }
    ctx->pc = 0x14CF90u;
label_14cf90:
    // 0x14cf90: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x14cf90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14cf94: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x14cf94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x14cf98: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x14cf98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14cf9c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x14cf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14cfa0: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x14cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x14cfa4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14cfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14cfa8: 0x24849f15  addiu       $a0, $a0, -0x60EB
    ctx->pc = 0x14cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942485));
    // 0x14cfac: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x14cfacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x14cfb0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14cfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14cfb4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x14cfb4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14cfb8: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x14CFB8u;
    {
        const bool branch_taken_0x14cfb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CFB8u;
            // 0x14cfbc: 0xa3a40009  sb          $a0, 0x9($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cfb8) {
            ctx->pc = 0x14D048u;
            goto label_14d048;
        }
    }
    ctx->pc = 0x14CFC0u;
    // 0x14cfc0: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x14cfc0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x14cfc4: 0x25085dc0  addiu       $t0, $t0, 0x5DC0
    ctx->pc = 0x14cfc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24000));
    // 0x14cfc8: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x14cfc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14cfcc:
    // 0x14cfcc: 0x92180  sll         $a0, $t1, 6
    ctx->pc = 0x14cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x14cfd0: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x14cfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x14cfd4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x14cfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14cfd8: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x14cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x14cfdc: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x14cfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x14cfe0: 0x1043821  addu        $a3, $t0, $a0
    ctx->pc = 0x14cfe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x14cfe4: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x14cfe4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14cfe8: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CFE8u;
    {
        const bool branch_taken_0x14cfe8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cfe8) {
            ctx->pc = 0x14CFECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CFE8u;
            // 0x14cfec: 0x90e5414a  lbu         $a1, 0x414A($a3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16714)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CFF8u;
            goto label_14cff8;
        }
    }
    ctx->pc = 0x14CFF0u;
    // 0x14cff0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x14CFF0u;
    {
        const bool branch_taken_0x14cff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CFF0u;
            // 0x14cff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cff0) {
            ctx->pc = 0x14D078u;
            goto label_14d078;
        }
    }
    ctx->pc = 0x14CFF8u;
label_14cff8:
    // 0x14cff8: 0x97a4000e  lhu         $a0, 0xE($sp)
    ctx->pc = 0x14cff8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
    // 0x14cffc: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x14cffcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x14d000: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D000u;
    {
        const bool branch_taken_0x14d000 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d000) {
            ctx->pc = 0x14D010u;
            goto label_14d010;
        }
    }
    ctx->pc = 0x14D008u;
    // 0x14d008: 0xa7a9000c  sh          $t1, 0xC($sp)
    ctx->pc = 0x14d008u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 9));
    // 0x14d00c: 0xa7a5000e  sh          $a1, 0xE($sp)
    ctx->pc = 0x14d00cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 5));
label_14d010:
    // 0x14d010: 0x90e54155  lbu         $a1, 0x4155($a3)
    ctx->pc = 0x14d010u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16725)));
    // 0x14d014: 0x93a40009  lbu         $a0, 0x9($sp)
    ctx->pc = 0x14d014u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9)));
    // 0x14d018: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x14d018u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x14d01c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D01Cu;
    {
        const bool branch_taken_0x14d01c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d01c) {
            ctx->pc = 0x14D030u;
            goto label_14d030;
        }
    }
    ctx->pc = 0x14D024u;
    // 0x14d024: 0xa3a50009  sb          $a1, 0x9($sp)
    ctx->pc = 0x14d024u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x14d028: 0xa3a20008  sb          $v0, 0x8($sp)
    ctx->pc = 0x14d028u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x14d02c: 0x0  nop
    ctx->pc = 0x14d02cu;
    // NOP
label_14d030:
    // 0x14d030: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14d034: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14d034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14d038: 0x43202a  slt         $a0, $v0, $v1
    ctx->pc = 0x14d038u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14d03c: 0x5480ffe3  bnel        $a0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x14D03Cu;
    {
        const bool branch_taken_0x14d03c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d03c) {
            ctx->pc = 0x14D040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D03Cu;
            // 0x14d040: 0x304900ff  andi        $t1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CFCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14cfcc;
        }
    }
    ctx->pc = 0x14D044u;
    // 0x14d044: 0x0  nop
    ctx->pc = 0x14d044u;
    // NOP
label_14d048:
    // 0x14d048: 0x97a3000e  lhu         $v1, 0xE($sp)
    ctx->pc = 0x14d048u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
    // 0x14d04c: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x14d04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x14d050: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x14d050u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14d054: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D054u;
    {
        const bool branch_taken_0x14d054 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d054) {
            ctx->pc = 0x14D064u;
            goto label_14d064;
        }
    }
    ctx->pc = 0x14D05Cu;
    // 0x14d05c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14D05Cu;
    {
        const bool branch_taken_0x14d05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D05Cu;
            // 0x14d060: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d05c) {
            ctx->pc = 0x14D074u;
            goto label_14d074;
        }
    }
    ctx->pc = 0x14D064u;
label_14d064:
    // 0x14d064: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D064u;
    {
        const bool branch_taken_0x14d064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d064) {
            ctx->pc = 0x14D068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D064u;
            // 0x14d068: 0x93a2000c  lbu         $v0, 0xC($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D074u;
            goto label_14d074;
        }
    }
    ctx->pc = 0x14D06Cu;
    // 0x14d06c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14D06Cu;
    {
        const bool branch_taken_0x14d06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D06Cu;
            // 0x14d070: 0x93a20008  lbu         $v0, 0x8($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d06c) {
            ctx->pc = 0x14D074u;
            goto label_14d074;
        }
    }
    ctx->pc = 0x14D074u;
label_14d074:
    // 0x14d074: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x14d074u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_14d078:
    // 0x14d078: 0x3e00008  jr          $ra
    ctx->pc = 0x14D078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14D080u;
    ctx->pc = 0x14d080u;
}
