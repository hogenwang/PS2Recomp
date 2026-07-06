#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00211150
// Address: 0x211150 - 0x2111f0
void sub_00211150_0x211150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211150_0x211150");
#endif

    ctx->pc = 0x211150u;

    // 0x211150: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211150u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211154: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211158: 0x91eea938  lbu         $t6, -0x56C8($t7)
    ctx->pc = 0x211158u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945080)));
    // 0x21115c: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x21115cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x211160: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x211160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x211164: 0x30aaffff  andi        $t2, $a1, 0xFFFF
    ctx->pc = 0x211164u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x211168: 0xa08e0000  sb          $t6, 0x0($a0)
    ctx->pc = 0x211168u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x21116c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21116cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211170: 0x93ab0002  lbu         $t3, 0x2($sp)
    ctx->pc = 0x211170u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x211174: 0xa5202  srl         $t2, $t2, 8
    ctx->pc = 0x211174u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x211178: 0x91eea939  lbu         $t6, -0x56C7($t7)
    ctx->pc = 0x211178u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945081)));
    // 0x21117c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x21117cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x211180: 0x93ad0000  lbu         $t5, 0x0($sp)
    ctx->pc = 0x211180u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211184: 0xb5a00  sll         $t3, $t3, 8
    ctx->pc = 0x211184u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x211188: 0xa08e0001  sb          $t6, 0x1($a0)
    ctx->pc = 0x211188u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 14));
    // 0x21118c: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x21118cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x211190: 0x93af0001  lbu         $t7, 0x1($sp)
    ctx->pc = 0x211190u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x211194: 0xd6e00  sll         $t5, $t5, 24
    ctx->pc = 0x211194u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x211198: 0x810ca93a  lb          $t4, -0x56C6($t0)
    ctx->pc = 0x211198u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294945082)));
    // 0x21119c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x21119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2111a0: 0xf7c00  sll         $t7, $t7, 16
    ctx->pc = 0x2111a0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 16));
    // 0x2111a4: 0x93a90003  lbu         $t1, 0x3($sp)
    ctx->pc = 0x2111a4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2111a8: 0xa087000a  sb          $a3, 0xA($a0)
    ctx->pc = 0x2111a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 7));
    // 0x2111ac: 0x16f5825  or          $t3, $t3, $t7
    ctx->pc = 0x2111acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 15));
    // 0x2111b0: 0xa080000b  sb          $zero, 0xB($a0)
    ctx->pc = 0x2111b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x2111b4: 0x318effff  andi        $t6, $t4, 0xFFFF
    ctx->pc = 0x2111b4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x2111b8: 0x1a96825  or          $t5, $t5, $t1
    ctx->pc = 0x2111b8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 9));
    // 0x2111bc: 0xa4850002  sh          $a1, 0x2($a0)
    ctx->pc = 0x2111bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x2111c0: 0x910fa93a  lbu         $t7, -0x56C6($t0)
    ctx->pc = 0x2111c0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294945082)));
    // 0x2111c4: 0xe7202  srl         $t6, $t6, 8
    ctx->pc = 0x2111c4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 8));
    // 0x2111c8: 0xc6200  sll         $t4, $t4, 8
    ctx->pc = 0x2111c8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x2111cc: 0x1ab6825  or          $t5, $t5, $t3
    ctx->pc = 0x2111ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 11));
    // 0x2111d0: 0x18e6025  or          $t4, $t4, $t6
    ctx->pc = 0x2111d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 14));
    // 0x2111d4: 0xac8d0004  sw          $t5, 0x4($a0)
    ctx->pc = 0x2111d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 13));
    // 0x2111d8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2111d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2111dc: 0xa48c0008  sh          $t4, 0x8($a0)
    ctx->pc = 0x2111dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 12));
    // 0x2111e0: 0xa10fa93a  sb          $t7, -0x56C6($t0)
    ctx->pc = 0x2111e0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294945082), (uint8_t)GPR_U32(ctx, 15));
    // 0x2111e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2111E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2111E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2111E4u;
            // 0x2111e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2111ECu;
    // 0x2111ec: 0x0  nop
    ctx->pc = 0x2111ecu;
    // NOP
    ctx->pc = 0x2111f0u;
}
