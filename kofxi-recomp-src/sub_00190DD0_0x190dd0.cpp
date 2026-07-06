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

// Function: sub_00190DD0
// Address: 0x190dd0 - 0x191b10
void sub_00190DD0_0x190dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190DD0_0x190dd0");
#endif

    switch (ctx->pc) {
        case 0x190de4u: goto label_190de4;
        case 0x190e14u: goto label_190e14;
        case 0x190f88u: goto label_190f88;
        case 0x190f94u: goto label_190f94;
        case 0x191348u: goto label_191348;
        case 0x19135cu: goto label_19135c;
        case 0x1913c0u: goto label_1913c0;
        case 0x1913d4u: goto label_1913d4;
        case 0x191414u: goto label_191414;
        case 0x191428u: goto label_191428;
        case 0x1915b8u: goto label_1915b8;
        case 0x191654u: goto label_191654;
        case 0x1916dcu: goto label_1916dc;
        case 0x191758u: goto label_191758;
        case 0x19179cu: goto label_19179c;
        case 0x19180cu: goto label_19180c;
        case 0x191820u: goto label_191820;
        case 0x19184cu: goto label_19184c;
        case 0x191868u: goto label_191868;
        case 0x191870u: goto label_191870;
        case 0x1918a0u: goto label_1918a0;
        case 0x191914u: goto label_191914;
        case 0x191950u: goto label_191950;
        case 0x19198cu: goto label_19198c;
        case 0x1919c8u: goto label_1919c8;
        case 0x191a04u: goto label_191a04;
        case 0x191a40u: goto label_191a40;
        case 0x191a7cu: goto label_191a7c;
        case 0x191ab8u: goto label_191ab8;
        case 0x191af4u: goto label_191af4;
        default: break;
    }

    ctx->pc = 0x190dd0u;

    // 0x190dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190dd4: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x190dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x190dd8: 0x25084d98  addiu       $t0, $t0, 0x4D98
    ctx->pc = 0x190dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19864));
    // 0x190ddc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x190ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x190de0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x190de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_190de4:
    // 0x190de4: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x190de4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x190de8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x190de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x190dec: 0x81020001  lb          $v0, 0x1($t0)
    ctx->pc = 0x190decu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x190df0: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x190df0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x190df4: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x190df4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x190df8: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x190df8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x190dfc: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x190DFCu;
    {
        const bool branch_taken_0x190dfc = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x190E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DFCu;
        // 0x190e00: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190dfc) {
            ctx->pc = 0x190DE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_190de4;
        }
    }
    ctx->pc = 0x190E04u;
    // 0x190e04: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x190e04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x190e08: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x190e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x190e0c: 0x25084da8  addiu       $t0, $t0, 0x4DA8
    ctx->pc = 0x190e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19880));
    // 0x190e10: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x190e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_190e14:
    // 0x190e14: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x190e14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x190e18: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x190e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x190e1c: 0x81020001  lb          $v0, 0x1($t0)
    ctx->pc = 0x190e1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x190e20: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x190e20u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x190e24: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x190e24u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x190e28: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x190e28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x190e2c: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x190E2Cu;
    {
        const bool branch_taken_0x190e2c = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x190E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E2Cu;
        // 0x190e30: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e2c) {
            ctx->pc = 0x190E14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_190e14;
        }
    }
    ctx->pc = 0x190E34u;
    // 0x190e34: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x190e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x190e38: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x190e38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x190e3c: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x190e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x190e40: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x190e40u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x190e44: 0x30820030  andi        $v0, $a0, 0x30
    ctx->pc = 0x190e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x190e48: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x190e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x190e4c: 0x10a60021  beq         $a1, $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x190E4Cu;
    {
        const bool branch_taken_0x190e4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x190E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E4Cu;
        // 0x190e50: 0x21102  srl         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e4c) {
            ctx->pc = 0x190ED4u;
            goto label_190ed4;
        }
    }
    ctx->pc = 0x190E54u;
    // 0x190e54: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x190e54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x190e58: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x190e58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x190e5c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x190e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x190e60: 0x24c6db57  addiu       $a2, $a2, -0x24A9
    ctx->pc = 0x190e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957911));
    // 0x190e64: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x190e64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x190e68: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x190e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x190e6c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x190e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x190e70: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x190e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x190e74: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x190e74u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x190e78: 0x28c10004  slti        $at, $a2, 0x4
    ctx->pc = 0x190e78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x190e7c: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x190E7Cu;
    {
        const bool branch_taken_0x190e7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x190e7c) {
            ctx->pc = 0x190E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190E7Cu;
            // 0x190e80: 0x28c10009  slti        $at, $a2, 0x9 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x190E8Cu;
            goto label_190e8c;
        }
    }
    ctx->pc = 0x190E84u;
    // 0x190e84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x190E84u;
    {
        const bool branch_taken_0x190e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E84u;
        // 0x190e88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e84) {
            ctx->pc = 0x190EA8u;
            goto label_190ea8;
        }
    }
    ctx->pc = 0x190E8Cu;
label_190e8c:
    // 0x190e8c: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x190E8Cu;
    {
        const bool branch_taken_0x190e8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x190e8c) {
            ctx->pc = 0x190E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190E8Cu;
            // 0x190e90: 0x28c60009  slti        $a2, $a2, 0x9 (Delay Slot)
            SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x190E9Cu;
            goto label_190e9c;
        }
    }
    ctx->pc = 0x190E94u;
    // 0x190e94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x190E94u;
    {
        const bool branch_taken_0x190e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E94u;
        // 0x190e98: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e94) {
            ctx->pc = 0x190EA8u;
            goto label_190ea8;
        }
    }
    ctx->pc = 0x190E9Cu;
label_190e9c:
    // 0x190e9c: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x190E9Cu;
    {
        const bool branch_taken_0x190e9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x190e9c) {
            ctx->pc = 0x190EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190E9Cu;
            // 0x190ea0: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190EACu;
            goto label_190eac;
        }
    }
    ctx->pc = 0x190EA4u;
    // 0x190ea4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x190ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_190ea8:
    // 0x190ea8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x190ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_190eac:
    // 0x190eac: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x190eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x190eb0: 0x80860008  lb          $a2, 0x8($a0)
    ctx->pc = 0x190eb0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x190eb4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x190eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x190eb8: 0x80840009  lb          $a0, 0x9($a0)
    ctx->pc = 0x190eb8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x190ebc: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x190ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x190ec0: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x190ec0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x190ec4: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x190ec4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x190ec8: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x190EC8u;
    {
        const bool branch_taken_0x190ec8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x190ec8) {
            ctx->pc = 0x190ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190EC8u;
            // 0x190ecc: 0x330c0  sll         $a2, $v1, 3 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190ED8u;
            goto label_190ed8;
        }
    }
    ctx->pc = 0x190ED0u;
    // 0x190ed0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x190ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190ed4:
    // 0x190ed4: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x190ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_190ed8:
    // 0x190ed8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x190ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x190edc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x190edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x190ee0: 0x2484db51  addiu       $a0, $a0, -0x24AF
    ctx->pc = 0x190ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957905));
    // 0x190ee4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x190ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x190ee8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x190ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x190eec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x190eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x190ef0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x190ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x190ef4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x190ef4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190ef8: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x190EF8u;
    {
        const bool branch_taken_0x190ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x190ef8) {
            ctx->pc = 0x190EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190EF8u;
            // 0x190efc: 0x5163c  dsll32      $v0, $a1, 24 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190F14u;
            goto label_190f14;
        }
    }
    ctx->pc = 0x190F00u;
    // 0x190f00: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x190f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x190f04: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x190f04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x190f08: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190f0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x190F0Cu;
    {
        const bool branch_taken_0x190f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F0Cu;
        // 0x190f10: 0x80420015  lb          $v0, 0x15($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f0c) {
            ctx->pc = 0x190F20u;
            goto label_190f20;
        }
    }
    ctx->pc = 0x190F14u;
label_190f14:
    // 0x190f14: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x190f14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x190f18: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190f1c: 0x80420010  lb          $v0, 0x10($v0)
    ctx->pc = 0x190f1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_190f20:
    // 0x190f20: 0x3e00008  jr          $ra
    ctx->pc = 0x190F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F20u;
        // 0x190f24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190F28u;
    // 0x190f28: 0x0  nop
    ctx->pc = 0x190f28u;
    // NOP
    // 0x190f2c: 0x0  nop
    ctx->pc = 0x190f2cu;
    // NOP
    // 0x190f30: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x190f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
    // 0x190f34: 0x3c0280fc  lui         $v0, 0x80FC
    ctx->pc = 0x190f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33020 << 16));
    // 0x190f38: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x190f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x190f3c: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x190f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x190f40: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x190f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x190f44: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x190f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x190f48: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x190f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x190f4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x190f4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190f50: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x190f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x190f54: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x190f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x190f58: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x190f58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x190f5c: 0x3450b212  ori         $s0, $v0, 0xB212
    ctx->pc = 0x190f5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45586);
    // 0x190f60: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x190f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x190f64: 0xafa2033c  sw          $v0, 0x33C($sp)
    ctx->pc = 0x190f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 2));
    // 0x190f68: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x190f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x190f6c: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x190f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x190f70: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x190f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x190f74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x190f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x190f78: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x190F78u;
    {
        const bool branch_taken_0x190f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F78u;
        // 0x190f7c: 0xafa00338  sw          $zero, 0x338($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 824), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f78) {
            ctx->pc = 0x191080u;
            goto label_191080;
        }
    }
    ctx->pc = 0x190F80u;
    // 0x190f80: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x190f80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190f84: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x190f84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190f88:
    // 0x190f88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x190f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190f8c: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x190F8Cu;
    SET_GPR_U32(ctx, 31, 0x190F94u);
    ctx->pc = 0x190F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F8Cu;
    // 0x190f90: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x190F8Cu, 0x190F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190F94u;
label_190f94:
    // 0x190f94: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x190F94u;
    {
        const bool branch_taken_0x190f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190f94) {
            ctx->pc = 0x191060u;
            goto label_191060;
        }
    }
    ctx->pc = 0x190F9Cu;
    // 0x190f9c: 0x844504ec  lh          $a1, 0x4EC($v0)
    ctx->pc = 0x190f9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1260)));
    // 0x190fa0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x190FA0u;
    {
        const bool branch_taken_0x190fa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x190fa0) {
            ctx->pc = 0x190FE0u;
            goto label_190fe0;
        }
    }
    ctx->pc = 0x190FA8u;
    // 0x190fa8: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x190FA8u;
    {
        const bool branch_taken_0x190fa8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x190fa8) {
            ctx->pc = 0x190FC8u;
            goto label_190fc8;
        }
    }
    ctx->pc = 0x190FB0u;
    // 0x190fb0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x190fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x190fb4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x190fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x190fb8: 0x8484d9b8  lh          $a0, -0x2648($a0)
    ctx->pc = 0x190fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294957496)));
    // 0x190fbc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x190fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x190fc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x190FC0u;
    {
        const bool branch_taken_0x190fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FC0u;
        // 0x190fc4: 0xa464d9b8  sh          $a0, -0x2648($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294957496), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fc0) {
            ctx->pc = 0x190FE0u;
            goto label_190fe0;
        }
    }
    ctx->pc = 0x190FC8u;
label_190fc8:
    // 0x190fc8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x190fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x190fcc: 0x8464d9b8  lh          $a0, -0x2648($v1)
    ctx->pc = 0x190fccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957496)));
    // 0x190fd0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x190fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x190fd4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x190fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x190fd8: 0xa464d9b8  sh          $a0, -0x2648($v1)
    ctx->pc = 0x190fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957496), (uint16_t)GPR_U32(ctx, 4));
    // 0x190fdc: 0x0  nop
    ctx->pc = 0x190fdcu;
    // NOP
label_190fe0:
    // 0x190fe0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x190fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x190fe4: 0x8464d9b8  lh          $a0, -0x2648($v1)
    ctx->pc = 0x190fe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957496)));
    // 0x190fe8: 0x2881ffa7  slti        $at, $a0, -0x59
    ctx->pc = 0x190fe8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967207) ? 1 : 0);
    // 0x190fec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x190FECu;
    {
        const bool branch_taken_0x190fec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x190fec) {
            ctx->pc = 0x191000u;
            goto label_191000;
        }
    }
    ctx->pc = 0x190FF4u;
    // 0x190ff4: 0x2404ffa6  addiu       $a0, $zero, -0x5A
    ctx->pc = 0x190ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967206));
    // 0x190ff8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x190ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x190ffc: 0xa464d9b8  sh          $a0, -0x2648($v1)
    ctx->pc = 0x190ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957496), (uint16_t)GPR_U32(ctx, 4));
label_191000:
    // 0x191000: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x191000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x191004: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x191004u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x191008: 0x2863005a  slti        $v1, $v1, 0x5A
    ctx->pc = 0x191008u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x19100c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19100Cu;
    {
        const bool branch_taken_0x19100c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19100c) {
            ctx->pc = 0x191020u;
            goto label_191020;
        }
    }
    ctx->pc = 0x191014u;
    // 0x191014: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x191014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x191018: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x191018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19101c: 0xa464d9b8  sh          $a0, -0x2648($v1)
    ctx->pc = 0x19101cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957496), (uint16_t)GPR_U32(ctx, 4));
label_191020:
    // 0x191020: 0x844404ee  lh          $a0, 0x4EE($v0)
    ctx->pc = 0x191020u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1262)));
    // 0x191024: 0x131e3c  dsll32      $v1, $s3, 24
    ctx->pc = 0x191024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 24));
    // 0x191028: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x191028u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x19102c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x19102cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x191030: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x191030u;
    {
        const bool branch_taken_0x191030 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x191030) {
            ctx->pc = 0x191040u;
            goto label_191040;
        }
    }
    ctx->pc = 0x191038u;
    // 0x191038: 0x49e3c  dsll32      $s3, $a0, 24
    ctx->pc = 0x191038u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) << (32 + 24));
    // 0x19103c: 0x139e3f  dsra32      $s3, $s3, 24
    ctx->pc = 0x19103cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
label_191040:
    // 0x191040: 0xa44004ec  sh          $zero, 0x4EC($v0)
    ctx->pc = 0x191040u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1260), (uint16_t)GPR_U32(ctx, 0));
    // 0x191044: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x191044u;
    {
        const bool branch_taken_0x191044 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x191048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191044u;
        // 0x191048: 0xa44004ee  sh          $zero, 0x4EE($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 1262), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191044) {
            ctx->pc = 0x191060u;
            goto label_191060;
        }
    }
    ctx->pc = 0x19104Cu;
    // 0x19104c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19104cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x191050: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191054: 0xa060cec8  sb          $zero, -0x3138($v1)
    ctx->pc = 0x191054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294954696), (uint8_t)GPR_U32(ctx, 0));
    // 0x191058: 0xa053cec0  sb          $s3, -0x3140($v0)
    ctx->pc = 0x191058u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954688), (uint8_t)GPR_U32(ctx, 19));
    // 0x19105c: 0x0  nop
    ctx->pc = 0x19105cu;
    // NOP
label_191060:
    // 0x191060: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x191060u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x191064: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x191064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x191068: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x191068u;
    {
        const bool branch_taken_0x191068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191068) {
            ctx->pc = 0x190F88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_190f88;
        }
    }
    ctx->pc = 0x191070u;
    // 0x191070: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x191070u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x191074: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x191074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x191078: 0x5440ffc3  bnel        $v0, $zero, . + 4 + (-0x3D << 2)
    ctx->pc = 0x191078u;
    {
        const bool branch_taken_0x191078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191078) {
            ctx->pc = 0x19107Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191078u;
            // 0x19107c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190F88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_190f88;
        }
    }
    ctx->pc = 0x191080u;
label_191080:
    // 0x191080: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191084: 0x8043cec8  lb          $v1, -0x3138($v0)
    ctx->pc = 0x191084u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294954696)));
    // 0x191088: 0x462000f  bltzl       $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x191088u;
    {
        const bool branch_taken_0x191088 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x191088) {
            ctx->pc = 0x19108Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191088u;
            // 0x19108c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1910C8u;
            goto label_1910c8;
        }
    }
    ctx->pc = 0x191090u;
    // 0x191090: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191094: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x191094u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x191098: 0x9046cec0  lbu         $a2, -0x3140($v0)
    ctx->pc = 0x191098u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294954688)));
    // 0x19109c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x19109cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1910a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1910a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1910a4: 0x24a54ca0  addiu       $a1, $a1, 0x4CA0
    ctx->pc = 0x1910a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19616));
    // 0x1910a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1910a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1910ac: 0xa043cec8  sb          $v1, -0x3138($v0)
    ctx->pc = 0x1910acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954696), (uint8_t)GPR_U32(ctx, 3));
    // 0x1910b0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1910b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1910b4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1910b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1910b8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1910b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1910bc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1910bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1910c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1910c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1910c4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1910c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1910c8:
    // 0x1910c8: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1910c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1910cc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1910ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1910d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1910d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1910d4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1910D4u;
    {
        const bool branch_taken_0x1910d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1910d4) {
            ctx->pc = 0x1910F4u;
            goto label_1910f4;
        }
    }
    ctx->pc = 0x1910DCu;
    // 0x1910dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1910dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1910e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1910e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1910e4: 0xa043cec8  sb          $v1, -0x3138($v0)
    ctx->pc = 0x1910e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954696), (uint8_t)GPR_U32(ctx, 3));
    // 0x1910e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1910e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1910ec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1910ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1910f0: 0xa040cec0  sb          $zero, -0x3140($v0)
    ctx->pc = 0x1910f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954688), (uint8_t)GPR_U32(ctx, 0));
label_1910f4:
    // 0x1910f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1910f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1910f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1910f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1910fc: 0x8042cec8  lb          $v0, -0x3138($v0)
    ctx->pc = 0x1910fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294954696)));
    // 0x191100: 0x14430034  bne         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x191100u;
    {
        const bool branch_taken_0x191100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x191100) {
            ctx->pc = 0x1911D4u;
            goto label_1911d4;
        }
    }
    ctx->pc = 0x191108u;
    // 0x191108: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x191108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x19110c: 0x8c42d918  lw          $v0, -0x26E8($v0)
    ctx->pc = 0x19110cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x191110: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x191110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x191114: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x191114u;
    {
        const bool branch_taken_0x191114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191114) {
            ctx->pc = 0x1911D4u;
            goto label_1911d4;
        }
    }
    ctx->pc = 0x19111Cu;
    // 0x19111c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19111cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191120: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x191120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x191124: 0x9043da50  lbu         $v1, -0x25B0($v0)
    ctx->pc = 0x191124u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957648)));
    // 0x191128: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x191128u;
    {
        const bool branch_taken_0x191128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x191128) {
            ctx->pc = 0x191180u;
            goto label_191180;
        }
    }
    ctx->pc = 0x191130u;
    // 0x191130: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x191130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191134: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x191134u;
    {
        const bool branch_taken_0x191134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x191134) {
            ctx->pc = 0x191158u;
            goto label_191158;
        }
    }
    ctx->pc = 0x19113Cu;
    // 0x19113c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19113cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191140: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x191140u;
    {
        const bool branch_taken_0x191140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x191140) {
            ctx->pc = 0x191144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191140u;
            // 0x191144: 0x2412ffa6  addiu       $s2, $zero, -0x5A (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967206));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191180u;
            goto label_191180;
        }
    }
    ctx->pc = 0x191148u;
    // 0x191148: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x191148u;
    {
        const bool branch_taken_0x191148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191148) {
            ctx->pc = 0x19114Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191148u;
            // 0x19114c: 0x2412005a  addiu       $s2, $zero, 0x5A (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191180u;
            goto label_191180;
        }
    }
    ctx->pc = 0x191150u;
    // 0x191150: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x191150u;
    {
        const bool branch_taken_0x191150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191150) {
            ctx->pc = 0x191180u;
            goto label_191180;
        }
    }
    ctx->pc = 0x191158u;
label_191158:
    // 0x191158: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19115c: 0x9042db10  lbu         $v0, -0x24F0($v0)
    ctx->pc = 0x19115cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x191160: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x191160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x191164: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191164u;
    {
        const bool branch_taken_0x191164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x191164) {
            ctx->pc = 0x191168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191164u;
            // 0x191168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191174u;
            goto label_191174;
        }
    }
    ctx->pc = 0x19116Cu;
    // 0x19116c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19116Cu;
    {
        const bool branch_taken_0x19116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19116Cu;
        // 0x191170: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19116c) {
            ctx->pc = 0x191180u;
            goto label_191180;
        }
    }
    ctx->pc = 0x191174u;
label_191174:
    // 0x191174: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x191174u;
    {
        const bool branch_taken_0x191174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x191174) {
            ctx->pc = 0x191178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191174u;
            // 0x191178: 0x2412005a  addiu       $s2, $zero, 0x5A (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191180u;
            goto label_191180;
        }
    }
    ctx->pc = 0x19117Cu;
    // 0x19117c: 0x2412ffa6  addiu       $s2, $zero, -0x5A
    ctx->pc = 0x19117cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967206));
label_191180:
    // 0x191180: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191184: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x191184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x191188: 0x8442d9b8  lh          $v0, -0x2648($v0)
    ctx->pc = 0x191188u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957496)));
    // 0x19118c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19118cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x191190: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x191190u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x191194: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x191194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x191198: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x191198u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x19119c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x19119cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1911a0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1911A0u;
    {
        const bool branch_taken_0x1911a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1911a0) {
            ctx->pc = 0x1911A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1911A0u;
            // 0x1911a4: 0x28a1fffd  slti        $at, $a1, -0x3 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1911B0u;
            goto label_1911b0;
        }
    }
    ctx->pc = 0x1911A8u;
    // 0x1911a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1911A8u;
    {
        const bool branch_taken_0x1911a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1911ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911A8u;
        // 0x1911ac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911a8) {
            ctx->pc = 0x1911BCu;
            goto label_1911bc;
        }
    }
    ctx->pc = 0x1911B0u;
label_1911b0:
    // 0x1911b0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1911B0u;
    {
        const bool branch_taken_0x1911b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1911b0) {
            ctx->pc = 0x1911BCu;
            goto label_1911bc;
        }
    }
    ctx->pc = 0x1911B8u;
    // 0x1911b8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x1911b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1911bc:
    // 0x1911bc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1911bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1911c0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1911c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1911c4: 0x8463d9b8  lh          $v1, -0x2648($v1)
    ctx->pc = 0x1911c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957496)));
    // 0x1911c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1911c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1911cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1911ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1911d0: 0xa443d9b8  sh          $v1, -0x2648($v0)
    ctx->pc = 0x1911d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957496), (uint16_t)GPR_U32(ctx, 3));
label_1911d4:
    // 0x1911d4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1911d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1911d8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x1911d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1911dc: 0x8446d9b8  lh          $a2, -0x2648($v0)
    ctx->pc = 0x1911dcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957496)));
    // 0x1911e0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1911e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1911e4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1911e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1911e8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1911e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1911ec: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1911ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1911f0: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x1911f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x1911f4: 0xa6250010  sh          $a1, 0x10($s1)
    ctx->pc = 0x1911f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 5));
    // 0x1911f8: 0x8486da60  lh          $a2, -0x25A0($a0)
    ctx->pc = 0x1911f8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294957664)));
    // 0x1911fc: 0x8c44d918  lw          $a0, -0x26E8($v0)
    ctx->pc = 0x1911fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x191200: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x191200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x191204: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x191204u;
    {
        const bool branch_taken_0x191204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191204u;
        // 0x191208: 0xa466da66  sh          $a2, -0x259A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294957670), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191204) {
            ctx->pc = 0x1912B8u;
            goto label_1912b8;
        }
    }
    ctx->pc = 0x19120Cu;
    // 0x19120c: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x19120cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x191210: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x191210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x191214: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x191214u;
    {
        const bool branch_taken_0x191214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191214) {
            ctx->pc = 0x1912B8u;
            goto label_1912b8;
        }
    }
    ctx->pc = 0x19121Cu;
    // 0x19121c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19121cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191220: 0x8445da62  lh          $a1, -0x259E($v0)
    ctx->pc = 0x191220u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957666)));
    // 0x191224: 0x4a00024  bltz        $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x191224u;
    {
        const bool branch_taken_0x191224 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x191224) {
            ctx->pc = 0x1912B8u;
            goto label_1912b8;
        }
    }
    ctx->pc = 0x19122Cu;
    // 0x19122c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19122cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191230: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x191230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x191234: 0x8444da68  lh          $a0, -0x2598($v0)
    ctx->pc = 0x191234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957672)));
    // 0x191238: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19123c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19123cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x191240: 0x8c42a208  lw          $v0, -0x5DF8($v0)
    ctx->pc = 0x191240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943240)));
    // 0x191244: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x191244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x191248: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x191248u;
    {
        const bool branch_taken_0x191248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191248u;
        // 0x19124c: 0xa464da68  sh          $a0, -0x2598($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294957672), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191248) {
            ctx->pc = 0x1912B8u;
            goto label_1912b8;
        }
    }
    ctx->pc = 0x191250u;
    // 0x191250: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x191250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x191254: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191258: 0xa443da62  sh          $v1, -0x259E($v0)
    ctx->pc = 0x191258u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 3));
    // 0x19125c: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x19125cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x191260: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x191260u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x191264: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x191264u;
    {
        const bool branch_taken_0x191264 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x191264) {
            ctx->pc = 0x191288u;
            goto label_191288;
        }
    }
    ctx->pc = 0x19126Cu;
    // 0x19126c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19126cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191270: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x191270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x191274: 0x8445da64  lh          $a1, -0x259C($v0)
    ctx->pc = 0x191274u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957668)));
    // 0x191278: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x191278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19127c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19127cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191280: 0xa465da62  sh          $a1, -0x259E($v1)
    ctx->pc = 0x191280u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957666), (uint16_t)GPR_U32(ctx, 5));
    // 0x191284: 0xa444da60  sh          $a0, -0x25A0($v0)
    ctx->pc = 0x191284u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957664), (uint16_t)GPR_U32(ctx, 4));
label_191288:
    // 0x191288: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19128c: 0x8442da60  lh          $v0, -0x25A0($v0)
    ctx->pc = 0x19128cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957664)));
    // 0x191290: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x191290u;
    {
        const bool branch_taken_0x191290 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x191290) {
            ctx->pc = 0x1912B8u;
            goto label_1912b8;
        }
    }
    ctx->pc = 0x191298u;
    // 0x191298: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x191298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x19129c: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x19129cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x1912a0: 0x8c45d918  lw          $a1, -0x26E8($v0)
    ctx->pc = 0x1912a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x1912a4: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x1912a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x1912a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1912a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1912ac: 0xa440da60  sh          $zero, -0x25A0($v0)
    ctx->pc = 0x1912acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957664), (uint16_t)GPR_U32(ctx, 0));
    // 0x1912b0: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x1912b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1912b4: 0xac62d918  sw          $v0, -0x26E8($v1)
    ctx->pc = 0x1912b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957336), GPR_U32(ctx, 2));
label_1912b8:
    // 0x1912b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1912b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1912bc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1912bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1912c0: 0x8444da60  lh          $a0, -0x25A0($v0)
    ctx->pc = 0x1912c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957664)));
    // 0x1912c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1912c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1912c8: 0x8442da66  lh          $v0, -0x259A($v0)
    ctx->pc = 0x1912c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957670)));
    // 0x1912cc: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1912CCu;
    {
        const bool branch_taken_0x1912cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1912D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912CCu;
        // 0x1912d0: 0xa4645c60  sh          $a0, 0x5C60($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 23648), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912cc) {
            ctx->pc = 0x1912F0u;
            goto label_1912f0;
        }
    }
    ctx->pc = 0x1912D4u;
    // 0x1912d4: 0x2881000b  slti        $at, $a0, 0xB
    ctx->pc = 0x1912d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1912d8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1912D8u;
    {
        const bool branch_taken_0x1912d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1912d8) {
            ctx->pc = 0x1912DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1912D8u;
            // 0x1912dc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1912ECu;
            goto label_1912ec;
        }
    }
    ctx->pc = 0x1912E0u;
    // 0x1912e0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1912e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1912e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1912E4u;
    {
        const bool branch_taken_0x1912e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1912E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912E4u;
        // 0x1912e8: 0xa22200b8  sb          $v0, 0xB8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 184), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912e4) {
            ctx->pc = 0x1912F0u;
            goto label_1912f0;
        }
    }
    ctx->pc = 0x1912ECu;
label_1912ec:
    // 0x1912ec: 0xa22200b8  sb          $v0, 0xB8($s1)
    ctx->pc = 0x1912ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 184), (uint8_t)GPR_U32(ctx, 2));
label_1912f0:
    // 0x1912f0: 0x922300b8  lbu         $v1, 0xB8($s1)
    ctx->pc = 0x1912f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x1912f4: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x1912f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1912f8: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1912F8u;
    {
        const bool branch_taken_0x1912f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1912f8) {
            ctx->pc = 0x191430u;
            goto label_191430;
        }
    }
    ctx->pc = 0x191300u;
    // 0x191300: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x191300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x191304: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x191304u;
    {
        const bool branch_taken_0x191304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x191304) {
            ctx->pc = 0x1913E0u;
            goto label_1913e0;
        }
    }
    ctx->pc = 0x19130Cu;
    // 0x19130c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x19130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x191310: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x191310u;
    {
        const bool branch_taken_0x191310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x191310) {
            ctx->pc = 0x191430u;
            goto label_191430;
        }
    }
    ctx->pc = 0x191318u;
    // 0x191318: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x191318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19131c: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x19131Cu;
    {
        const bool branch_taken_0x19131c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19131c) {
            ctx->pc = 0x19138Cu;
            goto label_19138c;
        }
    }
    ctx->pc = 0x191324u;
    // 0x191324: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191328: 0x5065000a  beql        $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x191328u;
    {
        const bool branch_taken_0x191328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x191328) {
            ctx->pc = 0x19132Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191328u;
            // 0x19132c: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191354u;
            goto label_191354;
        }
    }
    ctx->pc = 0x191330u;
    // 0x191330: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x191330u;
    {
        const bool branch_taken_0x191330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191330) {
            ctx->pc = 0x191334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191330u;
            // 0x191334: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191340u;
            goto label_191340;
        }
    }
    ctx->pc = 0x191338u;
    // 0x191338: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x191338u;
    {
        const bool branch_taken_0x191338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191338) {
            ctx->pc = 0x191430u;
            goto label_191430;
        }
    }
    ctx->pc = 0x191340u;
label_191340:
    // 0x191340: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x191340u;
    SET_GPR_U32(ctx, 31, 0x191348u);
    ctx->pc = 0x191344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191340u;
    // 0x191344: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x191340u, 0x191348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191348u;
label_191348:
    // 0x191348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19134c: 0xa22200b8  sb          $v0, 0xB8($s1)
    ctx->pc = 0x19134cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 184), (uint8_t)GPR_U32(ctx, 2));
    // 0x191350: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x191350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_191354:
    // 0x191354: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x191354u;
    SET_GPR_U32(ctx, 31, 0x19135Cu);
    ctx->pc = 0x191358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191354u;
    // 0x191358: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x191354u, 0x19135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19135Cu;
label_19135c:
    // 0x19135c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x19135Cu;
    {
        const bool branch_taken_0x19135c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19135c) {
            ctx->pc = 0x191430u;
            goto label_191430;
        }
    }
    ctx->pc = 0x191364u;
    // 0x191364: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191368: 0x8442da60  lh          $v0, -0x25A0($v0)
    ctx->pc = 0x191368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957664)));
    // 0x19136c: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x19136cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x191370: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x191370u;
    {
        const bool branch_taken_0x191370 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x191370) {
            ctx->pc = 0x191374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191370u;
            // 0x191374: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191384u;
            goto label_191384;
        }
    }
    ctx->pc = 0x191378u;
    // 0x191378: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x191378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19137c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x19137Cu;
    {
        const bool branch_taken_0x19137c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19137Cu;
        // 0x191380: 0xa22200b8  sb          $v0, 0xB8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 184), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19137c) {
            ctx->pc = 0x191430u;
            goto label_191430;
        }
    }
    ctx->pc = 0x191384u;
label_191384:
    // 0x191384: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x191384u;
    {
        const bool branch_taken_0x191384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191384u;
        // 0x191388: 0xa22200b8  sb          $v0, 0xB8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 184), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191384) {
            ctx->pc = 0x191430u;
            goto label_191430;
        }
    }
    ctx->pc = 0x19138Cu;
label_19138c:
    // 0x19138c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19138cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191390: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x191390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x191394: 0x8444da60  lh          $a0, -0x25A0($v0)
    ctx->pc = 0x191394u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957664)));
    // 0x191398: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x191398u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19139c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x19139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1913a0: 0x0  nop
    ctx->pc = 0x1913a0u;
    // NOP
    // 0x1913a4: 0x1810  mfhi        $v1
    ctx->pc = 0x1913a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1913a8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1913A8u;
    {
        const bool branch_taken_0x1913a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1913a8) {
            ctx->pc = 0x1913ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1913A8u;
            // 0x1913ac: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1913C8u;
            goto label_1913c8;
        }
    }
    ctx->pc = 0x1913B0u;
    // 0x1913b0: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x1913b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1913b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1913b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1913b8: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1913B8u;
    SET_GPR_U32(ctx, 31, 0x1913C0u);
    ctx->pc = 0x1913BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913B8u;
    // 0x1913bc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x1913B8u, 0x1913C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1913C0u;
label_1913c0:
    // 0x1913c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1913C0u;
    {
        const bool branch_taken_0x1913c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1913C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913C0u;
        // 0x1913c4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913c0) {
            ctx->pc = 0x1913D8u;
            goto label_1913d8;
        }
    }
    ctx->pc = 0x1913C8u;
label_1913c8:
    // 0x1913c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1913c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1913cc: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1913CCu;
    SET_GPR_U32(ctx, 31, 0x1913D4u);
    ctx->pc = 0x1913D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913CCu;
    // 0x1913d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x1913CCu, 0x1913D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1913D4u;
label_1913d4:
    // 0x1913d4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1913d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1913d8:
    // 0x1913d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1913D8u;
    {
        const bool branch_taken_0x1913d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1913DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913D8u;
        // 0x1913dc: 0xa22200b8  sb          $v0, 0xB8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 184), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913d8) {
            ctx->pc = 0x191430u;
            goto label_191430;
        }
    }
    ctx->pc = 0x1913E0u;
label_1913e0:
    // 0x1913e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1913e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1913e4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1913e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1913e8: 0x8444da60  lh          $a0, -0x25A0($v0)
    ctx->pc = 0x1913e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957664)));
    // 0x1913ec: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1913ecu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1913f0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1913f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1913f4: 0x0  nop
    ctx->pc = 0x1913f4u;
    // NOP
    // 0x1913f8: 0x1810  mfhi        $v1
    ctx->pc = 0x1913f8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1913fc: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1913FCu;
    {
        const bool branch_taken_0x1913fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1913fc) {
            ctx->pc = 0x191400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1913FCu;
            // 0x191400: 0x2404002a  addiu       $a0, $zero, 0x2A (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19141Cu;
            goto label_19141c;
        }
    }
    ctx->pc = 0x191404u;
    // 0x191404: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x191404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x191408: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19140c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x19140Cu;
    SET_GPR_U32(ctx, 31, 0x191414u);
    ctx->pc = 0x191410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19140Cu;
    // 0x191410: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x19140Cu, 0x191414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191414u;
label_191414:
    // 0x191414: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x191414u;
    {
        const bool branch_taken_0x191414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191414u;
        // 0x191418: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191414) {
            ctx->pc = 0x19142Cu;
            goto label_19142c;
        }
    }
    ctx->pc = 0x19141Cu;
label_19141c:
    // 0x19141c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19141cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191420: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x191420u;
    SET_GPR_U32(ctx, 31, 0x191428u);
    ctx->pc = 0x191424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191420u;
    // 0x191424: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x191420u, 0x191428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191428u;
label_191428:
    // 0x191428: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x191428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_19142c:
    // 0x19142c: 0xa22200b8  sb          $v0, 0xB8($s1)
    ctx->pc = 0x19142cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 184), (uint8_t)GPR_U32(ctx, 2));
label_191430:
    // 0x191430: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191434: 0x8442d9b8  lh          $v0, -0x2648($v0)
    ctx->pc = 0x191434u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957496)));
    // 0x191438: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x191438u;
    {
        const bool branch_taken_0x191438 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x191438) {
            ctx->pc = 0x191444u;
            goto label_191444;
        }
    }
    ctx->pc = 0x191440u;
    // 0x191440: 0x3c1080ff  lui         $s0, 0x80FF
    ctx->pc = 0x191440u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33023 << 16));
label_191444:
    // 0x191444: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191444u;
    {
        const bool branch_taken_0x191444 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x191444) {
            ctx->pc = 0x191454u;
            goto label_191454;
        }
    }
    ctx->pc = 0x19144Cu;
    // 0x19144c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19144cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x191450: 0x345000ff  ori         $s0, $v0, 0xFF
    ctx->pc = 0x191450u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_191454:
    // 0x191454: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191458: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x191458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19145c: 0xc441c8a0  lwc1        $f1, -0x3760($v0)
    ctx->pc = 0x19145cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191460: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191464: 0xc462c8a4  lwc1        $f2, -0x375C($v1)
    ctx->pc = 0x191464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191468: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191468u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19146c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19146cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191470: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x191470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x191474: 0xc440c8b0  lwc1        $f0, -0x3750($v0)
    ctx->pc = 0x191474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191478: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x191478u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x19147c: 0x0  nop
    ctx->pc = 0x19147cu;
    // NOP
    // 0x191480: 0x4a43c  dsll32      $s4, $a0, 16
    ctx->pc = 0x191480u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) << (32 + 16));
    // 0x191484: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x191484u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x191488: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19148c: 0x8442da60  lh          $v0, -0x25A0($v0)
    ctx->pc = 0x19148cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957664)));
    // 0x191490: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x191490u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x191494: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191494u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x191498: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x191498u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x19149c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x19149cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1914a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1914a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1914a4: 0x49c3c  dsll32      $s3, $a0, 16
    ctx->pc = 0x1914a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1914a8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1914a8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1914ac: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x1914acu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x1914b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1914b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1914b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1914b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1914b8: 0x0  nop
    ctx->pc = 0x1914b8u;
    // NOP
    // 0x1914bc: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x1914bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1914c0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1914C0u;
    {
        const bool branch_taken_0x1914c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1914C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914C0u;
        // 0x1914c4: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1914c0) {
            ctx->pc = 0x191500u;
            goto label_191500;
        }
    }
    ctx->pc = 0x1914C8u;
    // 0x1914c8: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x1914c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x1914cc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1914ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1914d0: 0x8c44d918  lw          $a0, -0x26E8($v0)
    ctx->pc = 0x1914d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x1914d4: 0x34620100  ori         $v0, $v1, 0x100
    ctx->pc = 0x1914d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1914d8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1914d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1914dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1914DCu;
    {
        const bool branch_taken_0x1914dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1914dc) {
            ctx->pc = 0x191500u;
            goto label_191500;
        }
    }
    ctx->pc = 0x1914E4u;
    // 0x1914e4: 0x822200ba  lb          $v0, 0xBA($s1)
    ctx->pc = 0x1914e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 186)));
    // 0x1914e8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1914e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1914ec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1914ECu;
    {
        const bool branch_taken_0x1914ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1914ec) {
            ctx->pc = 0x1914F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1914ECu;
            // 0x1914f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1914F4u;
            goto label_1914f4;
        }
    }
    ctx->pc = 0x1914F4u;
label_1914f4:
    // 0x1914f4: 0x822200ba  lb          $v0, 0xBA($s1)
    ctx->pc = 0x1914f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 186)));
    // 0x1914f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1914f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1914fc: 0xa22200ba  sb          $v0, 0xBA($s1)
    ctx->pc = 0x1914fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 186), (uint8_t)GPR_U32(ctx, 2));
label_191500:
    // 0x191500: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191504: 0xc440c8a8  lwc1        $f0, -0x3758($v0)
    ctx->pc = 0x191504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191508: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x191508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19150c: 0x0  nop
    ctx->pc = 0x19150cu;
    // NOP
    // 0x191510: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x191510u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191514: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x191514u;
    {
        const bool branch_taken_0x191514 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191514) {
            ctx->pc = 0x191520u;
            goto label_191520;
        }
    }
    ctx->pc = 0x19151Cu;
    // 0x19151c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19151cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191520:
    // 0x191520: 0x50a0008e  beql        $a1, $zero, . + 4 + (0x8E << 2)
    ctx->pc = 0x191520u;
    {
        const bool branch_taken_0x191520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x191520) {
            ctx->pc = 0x191524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191520u;
            // 0x191524: 0x86220016  lh          $v0, 0x16($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19175Cu;
            goto label_19175c;
        }
    }
    ctx->pc = 0x191528u;
    // 0x191528: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x191528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x19152c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19152cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191530: 0x9042f35c  lbu         $v0, -0xCA4($v0)
    ctx->pc = 0x191530u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964060)));
    // 0x191534: 0x5445006b  bnel        $v0, $a1, . + 4 + (0x6B << 2)
    ctx->pc = 0x191534u;
    {
        const bool branch_taken_0x191534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x191534) {
            ctx->pc = 0x191538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191534u;
            // 0x191538: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1916E4u;
            goto label_1916e4;
        }
    }
    ctx->pc = 0x19153Cu;
    // 0x19153c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x19153cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x191540: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191544: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x191544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x191548: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x191548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19154c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x19154cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x191550: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x191550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x191554: 0xffaa0018  sd          $t2, 0x18($sp)
    ctx->pc = 0x191554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 10));
    // 0x191558: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x191558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19155c: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x19155cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x191560: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x191560u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x191564: 0xffa60028  sd          $a2, 0x28($sp)
    ctx->pc = 0x191564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 6));
    // 0x191568: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x191568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x19156c: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x19156cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x191570: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x191570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x191574: 0xffa60038  sd          $a2, 0x38($sp)
    ctx->pc = 0x191574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 6));
    // 0x191578: 0x27a40338  addiu       $a0, $sp, 0x338
    ctx->pc = 0x191578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
    // 0x19157c: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x19157cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
    // 0x191580: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x191580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191584: 0xffab0048  sd          $t3, 0x48($sp)
    ctx->pc = 0x191584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 11));
    // 0x191588: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x191588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19158c: 0xffab0050  sd          $t3, 0x50($sp)
    ctx->pc = 0x19158cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 11));
    // 0x191590: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x191590u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191594: 0xffa00058  sd          $zero, 0x58($sp)
    ctx->pc = 0x191594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 0));
    // 0x191598: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x191598u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19159c: 0xffa00060  sd          $zero, 0x60($sp)
    ctx->pc = 0x19159cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 0));
    // 0x1915a0: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1915a0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1915a4: 0xffa00068  sd          $zero, 0x68($sp)
    ctx->pc = 0x1915a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 0));
    // 0x1915a8: 0x86220010  lh          $v0, 0x10($s1)
    ctx->pc = 0x1915a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1915ac: 0xffa20070  sd          $v0, 0x70($sp)
    ctx->pc = 0x1915acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
    // 0x1915b0: 0xc04ebb0  jal         func_13AEC0
    ctx->pc = 0x1915B0u;
    SET_GPR_U32(ctx, 31, 0x1915B8u);
    ctx->pc = 0x1915B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1915B0u;
    // 0x1915b4: 0xffa30078  sd          $v1, 0x78($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AEC0u, 0x1915B0u, 0x1915B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1915B8u;
label_1915b8:
    // 0x1915b8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1915b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1915bc: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x1915bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1915c0: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1915c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1915c4: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x1915c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1915c8: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1915c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1915cc: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1915ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1915d0: 0xffaa0018  sd          $t2, 0x18($sp)
    ctx->pc = 0x1915d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 10));
    // 0x1915d4: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x1915d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1915d8: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x1915d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x1915dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1915dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1915e0: 0xffb00028  sd          $s0, 0x28($sp)
    ctx->pc = 0x1915e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 16));
    // 0x1915e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1915e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1915e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1915e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1915ec: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1915ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1915f0: 0xffb00038  sd          $s0, 0x38($sp)
    ctx->pc = 0x1915f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 16));
    // 0x1915f4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1915f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1915f8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1915f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1915fc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1915fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x191600: 0xffa90048  sd          $t1, 0x48($sp)
    ctx->pc = 0x191600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 9));
    // 0x191604: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x191604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x191608: 0xffa00050  sd          $zero, 0x50($sp)
    ctx->pc = 0x191608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 0));
    // 0x19160c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19160cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191610: 0xffa00058  sd          $zero, 0x58($sp)
    ctx->pc = 0x191610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 0));
    // 0x191614: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x191614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x191618: 0xffa00060  sd          $zero, 0x60($sp)
    ctx->pc = 0x191618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 0));
    // 0x19161c: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x19161cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
    // 0x191620: 0xffa00068  sd          $zero, 0x68($sp)
    ctx->pc = 0x191620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 0));
    // 0x191624: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x191624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x191628: 0x86220010  lh          $v0, 0x10($s1)
    ctx->pc = 0x191628u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x19162c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x19162cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x191630: 0x27a40338  addiu       $a0, $sp, 0x338
    ctx->pc = 0x191630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
    // 0x191634: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191638: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x191638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19163c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19163cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191640: 0xffa20070  sd          $v0, 0x70($sp)
    ctx->pc = 0x191640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
    // 0x191644: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x191644u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191648: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x191648u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x19164c: 0xc04ebb0  jal         func_13AEC0
    ctx->pc = 0x19164Cu;
    SET_GPR_U32(ctx, 31, 0x191654u);
    ctx->pc = 0x191650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19164Cu;
    // 0x191650: 0xffa30078  sd          $v1, 0x78($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AEC0u, 0x19164Cu, 0x191654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191654u;
label_191654:
    // 0x191654: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x191654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x191658: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x191658u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19165c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x19165cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x191660: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x191660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x191664: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x191664u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x191668: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x191668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x19166c: 0xffaa0018  sd          $t2, 0x18($sp)
    ctx->pc = 0x19166cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 10));
    // 0x191670: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x191670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x191674: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x191674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x191678: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x191678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x19167c: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x19167cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x191680: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x191680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x191684: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x191684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x191688: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19168c: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x19168cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x191690: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x191690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x191694: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x191694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x191698: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x191698u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
    // 0x19169c: 0xffa90048  sd          $t1, 0x48($sp)
    ctx->pc = 0x19169cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 9));
    // 0x1916a0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1916a0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1916a4: 0xffa00050  sd          $zero, 0x50($sp)
    ctx->pc = 0x1916a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 0));
    // 0x1916a8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1916a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1916ac: 0xffa00058  sd          $zero, 0x58($sp)
    ctx->pc = 0x1916acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 0));
    // 0x1916b0: 0x27a40338  addiu       $a0, $sp, 0x338
    ctx->pc = 0x1916b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
    // 0x1916b4: 0xffa00060  sd          $zero, 0x60($sp)
    ctx->pc = 0x1916b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 0));
    // 0x1916b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1916b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1916bc: 0xffa00068  sd          $zero, 0x68($sp)
    ctx->pc = 0x1916bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 0));
    // 0x1916c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1916c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1916c4: 0x86220010  lh          $v0, 0x10($s1)
    ctx->pc = 0x1916c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1916c8: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x1916c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1916cc: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1916ccu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1916d0: 0xffa20070  sd          $v0, 0x70($sp)
    ctx->pc = 0x1916d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
    // 0x1916d4: 0xc04ebb0  jal         func_13AEC0
    ctx->pc = 0x1916D4u;
    SET_GPR_U32(ctx, 31, 0x1916DCu);
    ctx->pc = 0x1916D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1916D4u;
    // 0x1916d8: 0xffa00078  sd          $zero, 0x78($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AEC0u, 0x1916D4u, 0x1916DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1916DCu;
label_1916dc:
    // 0x1916dc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1916DCu;
    {
        const bool branch_taken_0x1916dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1916dc) {
            ctx->pc = 0x191758u;
            goto label_191758;
        }
    }
    ctx->pc = 0x1916E4u;
label_1916e4:
    // 0x1916e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1916e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1916e8: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1916e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1916ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1916ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1916f0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1916f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1916f4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1916f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1916f8: 0xffaa0018  sd          $t2, 0x18($sp)
    ctx->pc = 0x1916f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 10));
    // 0x1916fc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1916fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x191700: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x191700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x191704: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x191704u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x191708: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x191708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x19170c: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x19170cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x191710: 0xffa80030  sd          $t0, 0x30($sp)
    ctx->pc = 0x191710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 8));
    // 0x191714: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x191714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191718: 0xffa80038  sd          $t0, 0x38($sp)
    ctx->pc = 0x191718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 8));
    // 0x19171c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x19171cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191720: 0xffa80040  sd          $t0, 0x40($sp)
    ctx->pc = 0x191720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
    // 0x191724: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x191724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x191728: 0xffab0048  sd          $t3, 0x48($sp)
    ctx->pc = 0x191728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 11));
    // 0x19172c: 0x27a40338  addiu       $a0, $sp, 0x338
    ctx->pc = 0x19172cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
    // 0x191730: 0xffab0050  sd          $t3, 0x50($sp)
    ctx->pc = 0x191730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 11));
    // 0x191734: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x191734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191738: 0xffa00058  sd          $zero, 0x58($sp)
    ctx->pc = 0x191738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 0));
    // 0x19173c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19173cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191740: 0xffa00060  sd          $zero, 0x60($sp)
    ctx->pc = 0x191740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 0));
    // 0x191744: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x191744u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x191748: 0xffa00068  sd          $zero, 0x68($sp)
    ctx->pc = 0x191748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 0));
    // 0x19174c: 0xffa00070  sd          $zero, 0x70($sp)
    ctx->pc = 0x19174cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 0));
    // 0x191750: 0xc04ebb0  jal         func_13AEC0
    ctx->pc = 0x191750u;
    SET_GPR_U32(ctx, 31, 0x191758u);
    ctx->pc = 0x191754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191750u;
    // 0x191754: 0xffa30078  sd          $v1, 0x78($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AEC0u, 0x191750u, 0x191758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191758u;
label_191758:
    // 0x191758: 0x86220016  lh          $v0, 0x16($s1)
    ctx->pc = 0x191758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
label_19175c:
    // 0x19175c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19175cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x191760: 0xa6220016  sh          $v0, 0x16($s1)
    ctx->pc = 0x191760u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x191764: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x191764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x191768: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x191768u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19176c: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19176Cu;
    {
        const bool branch_taken_0x19176c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19176c) {
            ctx->pc = 0x191778u;
            goto label_191778;
        }
    }
    ctx->pc = 0x191774u;
    // 0x191774: 0xa6200016  sh          $zero, 0x16($s1)
    ctx->pc = 0x191774u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 0));
label_191778:
    // 0x191778: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19177c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x19177cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x191780: 0x8fa60338  lw          $a2, 0x338($sp)
    ctx->pc = 0x191780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 824)));
    // 0x191784: 0xc44ec8a8  lwc1        $f14, -0x3758($v0)
    ctx->pc = 0x191784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x191788: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x191788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19178c: 0x24844290  addiu       $a0, $a0, 0x4290
    ctx->pc = 0x19178cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17040));
    // 0x191790: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x191790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x191794: 0xc0c5368  jal         func_314DA0
    ctx->pc = 0x191794u;
    SET_GPR_U32(ctx, 31, 0x19179Cu);
    ctx->pc = 0x191798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191794u;
    // 0x191798: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x314DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314DA0u, 0x191794u, 0x19179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19179Cu;
label_19179c:
    // 0x19179c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x19179cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1917a0: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x1917a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1917a4: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1917a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1917a8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1917a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1917ac: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1917acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1917b0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1917b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1917b4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1917b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1917b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1917B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1917BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917B8u;
        // 0x1917bc: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1917B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1917C0u;
    // 0x1917c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1917c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1917c4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1917c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1917c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1917c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1917cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1917ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1917d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1917d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1917d4: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x1917d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1917d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1917d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917dc: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x1917dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1917e0: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1917E0u;
    {
        const bool branch_taken_0x1917e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1917e0) {
            ctx->pc = 0x191830u;
            goto label_191830;
        }
    }
    ctx->pc = 0x1917E8u;
    // 0x1917e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1917e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1917ec: 0x5085000a  beql        $a0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1917ECu;
    {
        const bool branch_taken_0x1917ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1917ec) {
            ctx->pc = 0x1917F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1917ECu;
            // 0x1917f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191818u;
            goto label_191818;
        }
    }
    ctx->pc = 0x1917F4u;
    // 0x1917f4: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1917F4u;
    {
        const bool branch_taken_0x1917f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1917f4) {
            ctx->pc = 0x1917F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1917F4u;
            // 0x1917f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191804u;
            goto label_191804;
        }
    }
    ctx->pc = 0x1917FCu;
    // 0x1917fc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1917FCu;
    {
        const bool branch_taken_0x1917fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917FCu;
        // 0x191800: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917fc) {
            ctx->pc = 0x1918A4u;
            goto label_1918a4;
        }
    }
    ctx->pc = 0x191804u;
label_191804:
    // 0x191804: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x191804u;
    SET_GPR_U32(ctx, 31, 0x19180Cu);
    ctx->pc = 0x191808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191804u;
    // 0x191808: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x191804u, 0x19180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19180Cu;
label_19180c:
    // 0x19180c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19180cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191810: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x191810u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x191814: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x191814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191818:
    // 0x191818: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x191818u;
    SET_GPR_U32(ctx, 31, 0x191820u);
    ctx->pc = 0x19181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191818u;
    // 0x19181c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x191818u, 0x191820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191820u;
label_191820:
    // 0x191820: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x191820u;
    {
        const bool branch_taken_0x191820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191820) {
            ctx->pc = 0x1918A0u;
            goto label_1918a0;
        }
    }
    ctx->pc = 0x191828u;
    // 0x191828: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x191828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x19182c: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x19182cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_191830:
    // 0x191830: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191834: 0x24030102  addiu       $v1, $zero, 0x102
    ctx->pc = 0x191834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x191838: 0x9442dab0  lhu         $v0, -0x2550($v0)
    ctx->pc = 0x191838u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x19183c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19183Cu;
    {
        const bool branch_taken_0x19183c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19183c) {
            ctx->pc = 0x19184Cu;
            goto label_19184c;
        }
    }
    ctx->pc = 0x191844u;
    // 0x191844: 0xc064e5c  jal         func_193970
    ctx->pc = 0x191844u;
    SET_GPR_U32(ctx, 31, 0x19184Cu);
    ctx->pc = 0x193970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193970u, 0x191844u, 0x19184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19184Cu;
label_19184c:
    // 0x19184c: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x19184cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x191850: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x191850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x191854: 0x8c63d918  lw          $v1, -0x26E8($v1)
    ctx->pc = 0x191854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x191858: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x191858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19185c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x19185cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x191860: 0xc0c4424  jal         func_311090
    ctx->pc = 0x191860u;
    SET_GPR_U32(ctx, 31, 0x191868u);
    ctx->pc = 0x191864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191860u;
    // 0x191864: 0xac43d918  sw          $v1, -0x26E8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957336), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311090u, 0x191860u, 0x191868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191868u;
label_191868:
    // 0x191868: 0xc055728  jal         func_155CA0
    ctx->pc = 0x191868u;
    SET_GPR_U32(ctx, 31, 0x191870u);
    ctx->pc = 0x19186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191868u;
    // 0x19186c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x191868u, 0x191870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191870u;
label_191870:
    // 0x191870: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x191870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x191874: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x191874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x191878: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x191878u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x19187c: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19187Cu;
    {
        const bool branch_taken_0x19187c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x19187c) {
            ctx->pc = 0x1918A0u;
            goto label_1918a0;
        }
    }
    ctx->pc = 0x191884u;
    // 0x191884: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x191884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x191888: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x191888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x19188c: 0x8c631d40  lw          $v1, 0x1D40($v1)
    ctx->pc = 0x19188cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7488)));
    // 0x191890: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x191890u;
    {
        const bool branch_taken_0x191890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x191894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191890u;
        // 0x191894: 0xa08095c8  sb          $zero, -0x6A38($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294940104), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191890) {
            ctx->pc = 0x1918A0u;
            goto label_1918a0;
        }
    }
    ctx->pc = 0x191898u;
    // 0x191898: 0xc0c1534  jal         func_3054D0
    ctx->pc = 0x191898u;
    SET_GPR_U32(ctx, 31, 0x1918A0u);
    ctx->pc = 0x3054D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3054D0u, 0x191898u, 0x1918A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1918A0u;
label_1918a0:
    // 0x1918a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1918a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1918a4:
    // 0x1918a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1918a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1918a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1918a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1918ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1918ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1918B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918ACu;
        // 0x1918b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1918ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1918B4u;
    // 0x1918b4: 0x0  nop
    ctx->pc = 0x1918b4u;
    // NOP
    // 0x1918b8: 0x0  nop
    ctx->pc = 0x1918b8u;
    // NOP
    // 0x1918bc: 0x0  nop
    ctx->pc = 0x1918bcu;
    // NOP
    // 0x1918c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1918c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1918c4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1918c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1918c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1918c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1918cc: 0x2463db5c  addiu       $v1, $v1, -0x24A4
    ctx->pc = 0x1918ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957916));
    // 0x1918d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1918d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1918d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1918d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1918d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1918d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1918dc: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x1918dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1918e0: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1918e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1918e4: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1918e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1918e8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1918e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1918ec: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1918ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1918f0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1918f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1918f4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1918f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1918f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1918f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1918fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1918fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191900: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x191900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x191904: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x191904u;
    {
        const bool branch_taken_0x191904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191904) {
            ctx->pc = 0x191908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191904u;
            // 0x191908: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191918u;
            goto label_191918;
        }
    }
    ctx->pc = 0x19190Cu;
    // 0x19190c: 0xc0646c4  jal         func_191B10
    ctx->pc = 0x19190Cu;
    SET_GPR_U32(ctx, 31, 0x191914u);
    ctx->pc = 0x191B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191B10u, 0x19190Cu, 0x191914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191914u;
label_191914:
    // 0x191914: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x191914u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_191918:
    // 0x191918: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x191918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19191c: 0x2463db5c  addiu       $v1, $v1, -0x24A4
    ctx->pc = 0x19191cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957916));
    // 0x191920: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x191920u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x191924: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x191924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x191928: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x191928u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x19192c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x19192cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x191930: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x191930u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x191934: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x191934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x191938: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x191938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19193c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x19193cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x191940: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x191940u;
    {
        const bool branch_taken_0x191940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191940) {
            ctx->pc = 0x191944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191940u;
            // 0x191944: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191954u;
            goto label_191954;
        }
    }
    ctx->pc = 0x191948u;
    // 0x191948: 0xc0646d8  jal         func_191B60
    ctx->pc = 0x191948u;
    SET_GPR_U32(ctx, 31, 0x191950u);
    ctx->pc = 0x191B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191B60u, 0x191948u, 0x191950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191950u;
label_191950:
    // 0x191950: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x191950u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_191954:
    // 0x191954: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x191954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x191958: 0x2463db5c  addiu       $v1, $v1, -0x24A4
    ctx->pc = 0x191958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957916));
    // 0x19195c: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x19195cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x191960: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x191960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x191964: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x191964u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x191968: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x191968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19196c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x19196cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x191970: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x191970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x191974: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x191974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191978: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x191978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x19197c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19197Cu;
    {
        const bool branch_taken_0x19197c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19197c) {
            ctx->pc = 0x191980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19197Cu;
            // 0x191980: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191990u;
            goto label_191990;
        }
    }
    ctx->pc = 0x191984u;
    // 0x191984: 0xc0646ec  jal         func_191BB0
    ctx->pc = 0x191984u;
    SET_GPR_U32(ctx, 31, 0x19198Cu);
    ctx->pc = 0x191BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191BB0u, 0x191984u, 0x19198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19198Cu;
label_19198c:
    // 0x19198c: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x19198cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_191990:
    // 0x191990: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x191990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x191994: 0x2463db5c  addiu       $v1, $v1, -0x24A4
    ctx->pc = 0x191994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957916));
    // 0x191998: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x191998u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x19199c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x19199cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1919a0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1919a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1919a4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1919a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1919a8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1919a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1919ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1919acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1919b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1919b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1919b4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1919b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1919b8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1919B8u;
    {
        const bool branch_taken_0x1919b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1919b8) {
            ctx->pc = 0x1919BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1919B8u;
            // 0x1919bc: 0x92050000  lbu         $a1, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1919CCu;
            goto label_1919cc;
        }
    }
    ctx->pc = 0x1919C0u;
    // 0x1919c0: 0xc064700  jal         func_191C00
    ctx->pc = 0x1919C0u;
    SET_GPR_U32(ctx, 31, 0x1919C8u);
    ctx->pc = 0x191C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191C00u, 0x1919C0u, 0x1919C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1919C8u;
label_1919c8:
    // 0x1919c8: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1919c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1919cc:
    // 0x1919cc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1919ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1919d0: 0x2463db5c  addiu       $v1, $v1, -0x24A4
    ctx->pc = 0x1919d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957916));
    // 0x1919d4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1919d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1919d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1919d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1919dc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1919dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1919e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1919e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1919e4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1919e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1919e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1919e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1919ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1919ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1919f0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1919f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1919f4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1919F4u;
    {
        const bool branch_taken_0x1919f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1919f4) {
            ctx->pc = 0x1919F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1919F4u;
            // 0x1919f8: 0x92050000  lbu         $a1, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191A08u;
            goto label_191a08;
        }
    }
    ctx->pc = 0x1919FCu;
    // 0x1919fc: 0xc06471c  jal         func_191C70
    ctx->pc = 0x1919FCu;
    SET_GPR_U32(ctx, 31, 0x191A04u);
    ctx->pc = 0x191A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1919FCu;
    // 0x191a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191C70u, 0x1919FCu, 0x191A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A04u;
label_191a04:
    // 0x191a04: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x191a04u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_191a08:
    // 0x191a08: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x191a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x191a0c: 0x2463db5c  addiu       $v1, $v1, -0x24A4
    ctx->pc = 0x191a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957916));
    // 0x191a10: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x191a10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x191a14: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x191a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x191a18: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x191a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x191a1c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x191a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x191a20: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x191a20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x191a24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x191a28: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x191a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191a2c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x191a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x191a30: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x191A30u;
    {
        const bool branch_taken_0x191a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a30) {
            ctx->pc = 0x191A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191A30u;
            // 0x191a34: 0x92050000  lbu         $a1, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191A44u;
            goto label_191a44;
        }
    }
    ctx->pc = 0x191A38u;
    // 0x191a38: 0xc064710  jal         func_191C40
    ctx->pc = 0x191A38u;
    SET_GPR_U32(ctx, 31, 0x191A40u);
    ctx->pc = 0x191A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A38u;
    // 0x191a3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191C40u, 0x191A38u, 0x191A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A40u;
label_191a40:
    // 0x191a40: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x191a40u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_191a44:
    // 0x191a44: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x191a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x191a48: 0x2463db5c  addiu       $v1, $v1, -0x24A4
    ctx->pc = 0x191a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957916));
    // 0x191a4c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x191a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x191a50: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x191a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x191a54: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x191a54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x191a58: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x191a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x191a5c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x191a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x191a60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x191a64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x191a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191a68: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x191a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x191a6c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x191A6Cu;
    {
        const bool branch_taken_0x191a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a6c) {
            ctx->pc = 0x191A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191A6Cu;
            // 0x191a70: 0x92050000  lbu         $a1, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191A80u;
            goto label_191a80;
        }
    }
    ctx->pc = 0x191A74u;
    // 0x191a74: 0xc064728  jal         func_191CA0
    ctx->pc = 0x191A74u;
    SET_GPR_U32(ctx, 31, 0x191A7Cu);
    ctx->pc = 0x191A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A74u;
    // 0x191a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191CA0u, 0x191A74u, 0x191A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A7Cu;
label_191a7c:
    // 0x191a7c: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x191a7cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_191a80:
    // 0x191a80: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x191a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x191a84: 0x2463db5c  addiu       $v1, $v1, -0x24A4
    ctx->pc = 0x191a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957916));
    // 0x191a88: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x191a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x191a8c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x191a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x191a90: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x191a90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x191a94: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x191a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x191a98: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x191a98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x191a9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x191aa0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x191aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191aa4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x191aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x191aa8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x191AA8u;
    {
        const bool branch_taken_0x191aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191aa8) {
            ctx->pc = 0x191AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191AA8u;
            // 0x191aac: 0x92050000  lbu         $a1, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191ABCu;
            goto label_191abc;
        }
    }
    ctx->pc = 0x191AB0u;
    // 0x191ab0: 0xc06472c  jal         func_191CB0
    ctx->pc = 0x191AB0u;
    SET_GPR_U32(ctx, 31, 0x191AB8u);
    ctx->pc = 0x191AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191AB0u;
    // 0x191ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191CB0u, 0x191AB0u, 0x191AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191AB8u;
label_191ab8:
    // 0x191ab8: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x191ab8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_191abc:
    // 0x191abc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x191abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x191ac0: 0x2463db5c  addiu       $v1, $v1, -0x24A4
    ctx->pc = 0x191ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957916));
    // 0x191ac4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x191ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x191ac8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x191ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x191acc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x191accu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x191ad0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x191ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x191ad4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x191ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x191ad8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x191adc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x191adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191ae0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x191ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x191ae4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x191AE4u;
    {
        const bool branch_taken_0x191ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191ae4) {
            ctx->pc = 0x191AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191AE4u;
            // 0x191ae8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191AF8u;
            goto label_191af8;
        }
    }
    ctx->pc = 0x191AECu;
    // 0x191aec: 0xc06473c  jal         func_191CF0
    ctx->pc = 0x191AECu;
    SET_GPR_U32(ctx, 31, 0x191AF4u);
    ctx->pc = 0x191AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191AECu;
    // 0x191af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191CF0u, 0x191AECu, 0x191AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191AF4u;
label_191af4:
    // 0x191af4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x191af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_191af8:
    // 0x191af8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x191af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191afc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x191afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191b00: 0x3e00008  jr          $ra
    ctx->pc = 0x191B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B00u;
        // 0x191b04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191B08u;
    // 0x191b08: 0x0  nop
    ctx->pc = 0x191b08u;
    // NOP
    // 0x191b0c: 0x0  nop
    ctx->pc = 0x191b0cu;
    // NOP
    if (ctx->pc == 0x191b0cu) { ctx->pc = 0x191b10u; }
}
