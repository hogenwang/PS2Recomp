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

// Function: sub_00183930
// Address: 0x183930 - 0x183ad0
void sub_00183930_0x183930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183930_0x183930");
#endif

    switch (ctx->pc) {
        case 0x183968u: goto label_183968;
        case 0x183a14u: goto label_183a14;
        default: break;
    }

    ctx->pc = 0x183930u;

    // 0x183930: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x183930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x183934: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x183934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183938: 0x453821  addu        $a3, $v0, $a1
    ctx->pc = 0x183938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18393c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18393cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183940: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x183940u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x183944: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x183944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x183948: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x183948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x18394c: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x18394cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x183950: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x183950u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x183954: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x183954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x183958: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x183958u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18395c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x18395cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x183960: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x183960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x183964: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x183964u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183968:
    // 0x183968: 0x8d870078  lw          $a3, 0x78($t4)
    ctx->pc = 0x183968u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 120)));
    // 0x18396c: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x18396Cu;
    {
        const bool branch_taken_0x18396c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x18396c) {
            ctx->pc = 0x1839E8u;
            goto label_1839e8;
        }
    }
    ctx->pc = 0x183974u;
    // 0x183974: 0x8ceb0010  lw          $t3, 0x10($a3)
    ctx->pc = 0x183974u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x183978: 0x8d68049c  lw          $t0, 0x49C($t3)
    ctx->pc = 0x183978u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1180)));
    // 0x18397c: 0x31070800  andi        $a3, $t0, 0x800
    ctx->pc = 0x18397cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x183980: 0x14e00019  bnez        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x183980u;
    {
        const bool branch_taken_0x183980 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x183980) {
            ctx->pc = 0x1839E8u;
            goto label_1839e8;
        }
    }
    ctx->pc = 0x183988u;
    // 0x183988: 0x31070400  andi        $a3, $t0, 0x400
    ctx->pc = 0x183988u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1024);
    // 0x18398c: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x18398Cu;
    {
        const bool branch_taken_0x18398c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x18398c) {
            ctx->pc = 0x1839A8u;
            goto label_1839a8;
        }
    }
    ctx->pc = 0x183994u;
    // 0x183994: 0x8c870494  lw          $a3, 0x494($a0)
    ctx->pc = 0x183994u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x183998: 0x30e70200  andi        $a3, $a3, 0x200
    ctx->pc = 0x183998u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)512);
    // 0x18399c: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x18399Cu;
    {
        const bool branch_taken_0x18399c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x18399c) {
            ctx->pc = 0x1839E8u;
            goto label_1839e8;
        }
    }
    ctx->pc = 0x1839A4u;
    // 0x1839a4: 0x0  nop
    ctx->pc = 0x1839a4u;
    // NOP
label_1839a8:
    // 0x1839a8: 0x90a7f35b  lbu         $a3, -0xCA5($a1)
    ctx->pc = 0x1839a8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294964059)));
    // 0x1839ac: 0x14ea000e  bne         $a3, $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x1839ACu;
    {
        const bool branch_taken_0x1839ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        if (branch_taken_0x1839ac) {
            ctx->pc = 0x1839E8u;
            goto label_1839e8;
        }
    }
    ctx->pc = 0x1839B4u;
    // 0x1839b4: 0x8d670494  lw          $a3, 0x494($t3)
    ctx->pc = 0x1839b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
    // 0x1839b8: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x1839b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x1839bc: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1839BCu;
    {
        const bool branch_taken_0x1839bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1839bc) {
            ctx->pc = 0x1839E8u;
            goto label_1839e8;
        }
    }
    ctx->pc = 0x1839C4u;
    // 0x1839c4: 0x916804ea  lbu         $t0, 0x4EA($t3)
    ctx->pc = 0x1839c4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1258)));
    // 0x1839c8: 0x33e3c  dsll32      $a3, $v1, 24
    ctx->pc = 0x1839c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1839cc: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x1839ccu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x1839d0: 0xe8082a  slt         $at, $a3, $t0
    ctx->pc = 0x1839d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1839d4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1839D4u;
    {
        const bool branch_taken_0x1839d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1839d4) {
            ctx->pc = 0x1839E8u;
            goto label_1839e8;
        }
    }
    ctx->pc = 0x1839DCu;
    // 0x1839dc: 0x81e3c  dsll32      $v1, $t0, 24
    ctx->pc = 0x1839dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 24));
    // 0x1839e0: 0xa08804f5  sb          $t0, 0x4F5($a0)
    ctx->pc = 0x1839e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1269), (uint8_t)GPR_U32(ctx, 8));
    // 0x1839e4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1839e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1839e8:
    // 0x1839e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1839e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1839ec: 0x28c70003  slti        $a3, $a2, 0x3
    ctx->pc = 0x1839ecu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1839f0: 0x14e0ffdd  bnez        $a3, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1839F0u;
    {
        const bool branch_taken_0x1839f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1839F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1839F0u;
        // 0x1839f4: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1839f0) {
            ctx->pc = 0x183968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183968;
        }
    }
    ctx->pc = 0x1839F8u;
    // 0x1839f8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1839f8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839fc: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1839fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x183a00: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x183a00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x183a04: 0x3c0b0004  lui         $t3, 0x4
    ctx->pc = 0x183a04u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4 << 16));
    // 0x183a08: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x183a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x183a0c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x183A0Cu;
    {
        const bool branch_taken_0x183a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A0Cu;
        // 0x183a10: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a0c) {
            ctx->pc = 0x183A90u;
            goto label_183a90;
        }
    }
    ctx->pc = 0x183A14u;
label_183a14:
    // 0x183a14: 0x10c0001c  beqz        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x183A14u;
    {
        const bool branch_taken_0x183a14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x183a14) {
            ctx->pc = 0x183A88u;
            goto label_183a88;
        }
    }
    ctx->pc = 0x183A1Cu;
    // 0x183a1c: 0x8ccc0010  lw          $t4, 0x10($a2)
    ctx->pc = 0x183a1cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x183a20: 0x8d8a049c  lw          $t2, 0x49C($t4)
    ctx->pc = 0x183a20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1180)));
    // 0x183a24: 0x31460800  andi        $a2, $t2, 0x800
    ctx->pc = 0x183a24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)2048);
    // 0x183a28: 0x14c00017  bnez        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x183A28u;
    {
        const bool branch_taken_0x183a28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x183a28) {
            ctx->pc = 0x183A88u;
            goto label_183a88;
        }
    }
    ctx->pc = 0x183A30u;
    // 0x183a30: 0x31460400  andi        $a2, $t2, 0x400
    ctx->pc = 0x183a30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1024);
    // 0x183a34: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x183A34u;
    {
        const bool branch_taken_0x183a34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x183a34) {
            ctx->pc = 0x183A50u;
            goto label_183a50;
        }
    }
    ctx->pc = 0x183A3Cu;
    // 0x183a3c: 0x8c860494  lw          $a2, 0x494($a0)
    ctx->pc = 0x183a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x183a40: 0x30c60200  andi        $a2, $a2, 0x200
    ctx->pc = 0x183a40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x183a44: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x183A44u;
    {
        const bool branch_taken_0x183a44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x183a44) {
            ctx->pc = 0x183A88u;
            goto label_183a88;
        }
    }
    ctx->pc = 0x183A4Cu;
    // 0x183a4c: 0x0  nop
    ctx->pc = 0x183a4cu;
    // NOP
label_183a50:
    // 0x183a50: 0x8d860494  lw          $a2, 0x494($t4)
    ctx->pc = 0x183a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1172)));
    // 0x183a54: 0xcb3024  and         $a2, $a2, $t3
    ctx->pc = 0x183a54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
    // 0x183a58: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x183A58u;
    {
        const bool branch_taken_0x183a58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x183a58) {
            ctx->pc = 0x183A88u;
            goto label_183a88;
        }
    }
    ctx->pc = 0x183A60u;
    // 0x183a60: 0x918a04ea  lbu         $t2, 0x4EA($t4)
    ctx->pc = 0x183a60u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1258)));
    // 0x183a64: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x183a64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
    // 0x183a68: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x183a68u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x183a6c: 0xca082a  slt         $at, $a2, $t2
    ctx->pc = 0x183a6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x183a70: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x183A70u;
    {
        const bool branch_taken_0x183a70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x183a70) {
            ctx->pc = 0x183A88u;
            goto label_183a88;
        }
    }
    ctx->pc = 0x183A78u;
    // 0x183a78: 0xa1e3c  dsll32      $v1, $t2, 24
    ctx->pc = 0x183a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 24));
    // 0x183a7c: 0xa08a04f5  sb          $t2, 0x4F5($a0)
    ctx->pc = 0x183a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1269), (uint8_t)GPR_U32(ctx, 10));
    // 0x183a80: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x183a80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x183a84: 0x0  nop
    ctx->pc = 0x183a84u;
    // NOP
label_183a88:
    // 0x183a88: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x183a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x183a8c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x183a8cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_183a90:
    // 0x183a90: 0x90a6f35b  lbu         $a2, -0xCA5($a1)
    ctx->pc = 0x183a90u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294964059)));
    // 0x183a94: 0x50c90002  beql        $a2, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x183A94u;
    {
        const bool branch_taken_0x183a94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x183a94) {
            ctx->pc = 0x183A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183A94u;
            // 0x183a98: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183AA0u;
            goto label_183aa0;
        }
    }
    ctx->pc = 0x183A9Cu;
    // 0x183a9c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x183a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_183aa0:
    // 0x183aa0: 0x1a6302a  slt         $a2, $t5, $a2
    ctx->pc = 0x183aa0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x183aa4: 0x54c0ffdb  bnel        $a2, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x183AA4u;
    {
        const bool branch_taken_0x183aa4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x183aa4) {
            ctx->pc = 0x183AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183AA4u;
            // 0x183aa8: 0x8c460100  lw          $a2, 0x100($v0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183A14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183a14;
        }
    }
    ctx->pc = 0x183AACu;
    // 0x183aac: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x183aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x183ab0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x183ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183ab4: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x183ab4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x183ab8: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183AB8u;
    {
        const bool branch_taken_0x183ab8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x183ab8) {
            ctx->pc = 0x183ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183AB8u;
            // 0x183abc: 0x3163c  dsll32      $v0, $v1, 24 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183AC8u;
            goto label_183ac8;
        }
    }
    ctx->pc = 0x183AC0u;
    // 0x183ac0: 0x808304f5  lb          $v1, 0x4F5($a0)
    ctx->pc = 0x183ac0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1269)));
    // 0x183ac4: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x183ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
label_183ac8:
    // 0x183ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x183AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183AC8u;
        // 0x183acc: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183AD0u;
}
