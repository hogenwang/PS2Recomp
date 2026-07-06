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

// Function: sub_002899D8
// Address: 0x2899d8 - 0x289ba8
void sub_002899D8_0x2899d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002899D8_0x2899d8");
#endif

    switch (ctx->pc) {
        case 0x289a78u: goto label_289a78;
        case 0x289ad0u: goto label_289ad0;
        case 0x289af0u: goto label_289af0;
        case 0x289b78u: goto label_289b78;
        default: break;
    }

    ctx->pc = 0x2899d8u;

    // 0x2899d8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2899d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2899dc: 0x28c30007  slti        $v1, $a2, 0x7
    ctx->pc = 0x2899dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2899e0: 0x240e0006  addiu       $t6, $zero, 0x6
    ctx->pc = 0x2899e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2899e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2899e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2899e8: 0xc3700b  movn        $t6, $a2, $v1
    ctx->pc = 0x2899e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 6));
    // 0x2899ec: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2899ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2899f0: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x2899f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2899f4: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2899f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2899f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2899f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2899fc: 0x24c636f8  addiu       $a2, $a2, 0x36F8
    ctx->pc = 0x2899fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14072));
    // 0x289a00: 0x4e001a  div         $zero, $v0, $t6
    ctx->pc = 0x289a00u;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x289a04: 0xe1880  sll         $v1, $t6, 2
    ctx->pc = 0x289a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x289a08: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x289a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x289a0c: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x289A0Cu;
    {
        const bool branch_taken_0x289a0c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x289a0c) {
            ctx->pc = 0x289A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289A0Cu;
            // 0x289a10: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x289A14u;
            goto label_289a14;
        }
    }
    ctx->pc = 0x289A14u;
label_289a14:
    // 0x289a14: 0x8c790000  lw          $t9, 0x0($v1)
    ctx->pc = 0x289a14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x289a18: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x289a18u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289a1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x289a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289a20: 0x1c31804  sllv        $v1, $v1, $t6
    ctx->pc = 0x289a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 14) & 0x1F));
    // 0x289a24: 0x246fffff  addiu       $t7, $v1, -0x1
    ctx->pc = 0x289a24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x289a28: 0x1012  mflo        $v0
    ctx->pc = 0x289a28u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x289a2c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x289a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x289a30: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x289a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x289a34: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x289a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x289a38: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x289a38u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x289a3c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x289a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x289a40: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x289a40u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x289a44: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x289a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x289a48: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x289a48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289a4c: 0x8cab0004  lw          $t3, 0x4($a1)
    ctx->pc = 0x289a4cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x289a50: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x289a50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x289a54: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x289a54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x289a58: 0x29690002  slti        $t1, $t3, 0x2
    ctx->pc = 0x289a58u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x289a5c: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x289A5Cu;
    {
        const bool branch_taken_0x289a5c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x289A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A5Cu;
        // 0x289a60: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a5c) {
            ctx->pc = 0x289A6Cu;
            goto label_289a6c;
        }
    }
    ctx->pc = 0x289A64u;
    // 0x289a64: 0xdd0d0000  ld          $t5, 0x0($t0)
    ctx->pc = 0x289a64u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x289a68: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x289a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_289a6c:
    // 0x289a6c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x289a6cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289a70: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x289A70u;
    {
        const bool branch_taken_0x289a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A70u;
        // 0x289a74: 0x24180040  addiu       $t8, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a70) {
            ctx->pc = 0x289B0Cu;
            goto label_289b0c;
        }
    }
    ctx->pc = 0x289A78u;
label_289a78:
    // 0x289a78: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x289a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x289a7c: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x289a7cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289a80: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x289a80u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x289a84: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x289a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x289a88: 0x2ce20040  sltiu       $v0, $a3, 0x40
    ctx->pc = 0x289a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x289a8c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x289A8Cu;
    {
        const bool branch_taken_0x289a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A8Cu;
        // 0x289a90: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a8c) {
            ctx->pc = 0x289AC0u;
            goto label_289ac0;
        }
    }
    ctx->pc = 0x289A94u;
    // 0x289a94: 0x55200035  bnel        $t1, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x289A94u;
    {
        const bool branch_taken_0x289a94 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x289a94) {
            ctx->pc = 0x289A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289A94u;
            // 0x289a98: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289B6Cu;
            goto label_289b6c;
        }
    }
    ctx->pc = 0x289A9Cu;
    // 0x289a9c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x289a9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x289aa0: 0x29690002  slti        $t1, $t3, 0x2
    ctx->pc = 0x289aa0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x289aa4: 0x15200004  bnez        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x289AA4u;
    {
        const bool branch_taken_0x289aa4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x289AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289AA4u;
        // 0x289aa8: 0x1a0502d  daddu       $t2, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289aa4) {
            ctx->pc = 0x289AB8u;
            goto label_289ab8;
        }
    }
    ctx->pc = 0x289AACu;
    // 0x289aac: 0xdd0d0000  ld          $t5, 0x0($t0)
    ctx->pc = 0x289aacu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x289ab0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x289AB0u;
    {
        const bool branch_taken_0x289ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289AB0u;
        // 0x289ab4: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ab0) {
            ctx->pc = 0x289ABCu;
            goto label_289abc;
        }
    }
    ctx->pc = 0x289AB8u;
label_289ab8:
    // 0x289ab8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x289ab8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289abc:
    // 0x289abc: 0x24e7ffc0  addiu       $a3, $a3, -0x40
    ctx->pc = 0x289abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967232));
label_289ac0:
    // 0x289ac0: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x289AC0u;
    {
        const bool branch_taken_0x289ac0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x289AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289AC0u;
        // 0x289ac4: 0x3071023  subu        $v0, $t8, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ac0) {
            ctx->pc = 0x289AF8u;
            goto label_289af8;
        }
    }
    ctx->pc = 0x289AC8u;
    // 0x289ac8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x289AC8u;
    {
        const bool branch_taken_0x289ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289AC8u;
        // 0x289acc: 0xea1816  dsrlv       $v1, $t2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) >> (GPR_U32(ctx, 7) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ac8) {
            ctx->pc = 0x289B04u;
            goto label_289b04;
        }
    }
    ctx->pc = 0x289AD0u;
label_289ad0:
    // 0x289ad0: 0x29690002  slti        $t1, $t3, 0x2
    ctx->pc = 0x289ad0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x289ad4: 0x15200004  bnez        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x289AD4u;
    {
        const bool branch_taken_0x289ad4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x289AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289AD4u;
        // 0x289ad8: 0x1a0502d  daddu       $t2, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ad4) {
            ctx->pc = 0x289AE8u;
            goto label_289ae8;
        }
    }
    ctx->pc = 0x289ADCu;
    // 0x289adc: 0xdd0d0000  ld          $t5, 0x0($t0)
    ctx->pc = 0x289adcu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x289ae0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x289AE0u;
    {
        const bool branch_taken_0x289ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289AE0u;
        // 0x289ae4: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ae0) {
            ctx->pc = 0x289AECu;
            goto label_289aec;
        }
    }
    ctx->pc = 0x289AE8u;
label_289ae8:
    // 0x289ae8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x289ae8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289aec:
    // 0x289aec: 0x24e7ffc0  addiu       $a3, $a3, -0x40
    ctx->pc = 0x289aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967232));
label_289af0:
    // 0x289af0: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x289AF0u;
    {
        const bool branch_taken_0x289af0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x289AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289AF0u;
        // 0x289af4: 0x3071023  subu        $v0, $t8, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289af0) {
            ctx->pc = 0x289B00u;
            goto label_289b00;
        }
    }
    ctx->pc = 0x289AF8u;
label_289af8:
    // 0x289af8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x289AF8u;
    {
        const bool branch_taken_0x289af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289AF8u;
        // 0x289afc: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289af8) {
            ctx->pc = 0x289B0Cu;
            goto label_289b0c;
        }
    }
    ctx->pc = 0x289B00u;
label_289b00:
    // 0x289b00: 0xea1816  dsrlv       $v1, $t2, $a3
    ctx->pc = 0x289b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) >> (GPR_U32(ctx, 7) & 0x3F));
label_289b04:
    // 0x289b04: 0x4d1014  dsllv       $v0, $t5, $v0
    ctx->pc = 0x289b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x289b08: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x289b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_289b0c:
    // 0x289b0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x289b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x289b10: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x289b10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x289b14: 0x4f2824  and         $a1, $v0, $t7
    ctx->pc = 0x289b14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x289b18: 0x3251821  addu        $v1, $t9, $a1
    ctx->pc = 0x289b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x289b1c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x289b1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x289b20: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x289B20u;
    {
        const bool branch_taken_0x289b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x289b20) {
            ctx->pc = 0x289B60u;
            goto label_289b60;
        }
    }
    ctx->pc = 0x289B28u;
    // 0x289b28: 0x1836021  addu        $t4, $t4, $v1
    ctx->pc = 0x289b28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x289b2c: 0x2d820100  sltiu       $v0, $t4, 0x100
    ctx->pc = 0x289b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x289b30: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x289B30u;
    {
        const bool branch_taken_0x289b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B30u;
        // 0x289b34: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b30) {
            ctx->pc = 0x289B4Cu;
            goto label_289b4c;
        }
    }
    ctx->pc = 0x289B38u;
    // 0x289b38: 0xa0cc0000  sb          $t4, 0x0($a2)
    ctx->pc = 0x289b38u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x289b3c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x289b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x289b40: 0x258cff00  addiu       $t4, $t4, -0x100
    ctx->pc = 0x289b40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967040));
    // 0x289b44: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x289b44u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x289b48: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x289b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_289b4c:
    // 0x289b4c: 0x2ce20040  sltiu       $v0, $a3, 0x40
    ctx->pc = 0x289b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x289b50: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x289B50u;
    {
        const bool branch_taken_0x289b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289b50) {
            ctx->pc = 0x289AF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289af0;
        }
    }
    ctx->pc = 0x289B58u;
    // 0x289b58: 0x5120ffdd  beql        $t1, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x289B58u;
    {
        const bool branch_taken_0x289b58 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x289b58) {
            ctx->pc = 0x289B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289B58u;
            // 0x289b5c: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289AD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289ad0;
        }
    }
    ctx->pc = 0x289B60u;
label_289b60:
    // 0x289b60: 0x54a0ffc5  bnel        $a1, $zero, . + 4 + (-0x3B << 2)
    ctx->pc = 0x289B60u;
    {
        const bool branch_taken_0x289b60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x289b60) {
            ctx->pc = 0x289B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289B60u;
            // 0x289b64: 0xa0cc0000  sb          $t4, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289A78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289a78;
        }
    }
    ctx->pc = 0x289B68u;
    // 0x289b68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x289b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_289b6c:
    // 0x289b6c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x289b6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x289b70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x289B70u;
    {
        const bool branch_taken_0x289b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B70u;
        // 0x289b74: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b70) {
            ctx->pc = 0x289B98u;
            goto label_289b98;
        }
    }
    ctx->pc = 0x289B78u;
label_289b78:
    // 0x289b78: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x289b78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x289b7c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x289b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x289b80: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x289b80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x289b84: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x289b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x289b88: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x289b88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x289b8c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x289b8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x289b90: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x289B90u;
    {
        const bool branch_taken_0x289b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B90u;
        // 0x289b94: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b90) {
            ctx->pc = 0x289B78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289b78;
        }
    }
    ctx->pc = 0x289B98u;
label_289b98:
    // 0x289b98: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x289b98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x289b9c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x289b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x289BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289BA0u;
        // 0x289ba4: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289BA8u;
}
