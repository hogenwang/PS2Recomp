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

// Function: sub_0032DC80
// Address: 0x32dc80 - 0x32dee0
void sub_0032DC80_0x32dc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DC80_0x32dc80");
#endif

    switch (ctx->pc) {
        case 0x32dd04u: goto label_32dd04;
        case 0x32de88u: goto label_32de88;
        case 0x32de90u: goto label_32de90;
        case 0x32dea4u: goto label_32dea4;
        case 0x32deb0u: goto label_32deb0;
        default: break;
    }

    ctx->pc = 0x32dc80u;

    // 0x32dc80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32dc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32dc84: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x32dc84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x32dc88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32dc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32dc8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32dc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32dc90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32dc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32dc94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32dc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32dc98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32dc98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dc9c: 0x8c634780  lw          $v1, 0x4780($v1)
    ctx->pc = 0x32dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18304)));
    // 0x32dca0: 0x14710005  bne         $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x32DCA0u;
    {
        const bool branch_taken_0x32dca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x32DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DCA0u;
        // 0x32dca4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dca0) {
            ctx->pc = 0x32DCB8u;
            goto label_32dcb8;
        }
    }
    ctx->pc = 0x32DCA8u;
    // 0x32dca8: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32dca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32dcac: 0x8c63f398  lw          $v1, -0xC68($v1)
    ctx->pc = 0x32dcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964120)));
    // 0x32dcb0: 0x52030084  beql        $s0, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x32DCB0u;
    {
        const bool branch_taken_0x32dcb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x32dcb0) {
            ctx->pc = 0x32DCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DCB0u;
            // 0x32dcb4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DEC4u;
            goto label_32dec4;
        }
    }
    ctx->pc = 0x32DCB8u;
label_32dcb8:
    // 0x32dcb8: 0x3202ff00  andi        $v0, $s0, 0xFF00
    ctx->pc = 0x32dcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65280);
    // 0x32dcbc: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x32dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x32dcc0: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x32dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x32dcc4: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x32dcc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x32dcc8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32dccc: 0x32c02  srl         $a1, $v1, 16
    ctx->pc = 0x32dcccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x32dcd0: 0xac40e4c0  sw          $zero, -0x1B40($v0)
    ctx->pc = 0x32dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960320), GPR_U32(ctx, 0));
    // 0x32dcd4: 0x3c0601de  lui         $a2, 0x1DE
    ctx->pc = 0x32dcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)478 << 16));
    // 0x32dcd8: 0x3c020842  lui         $v0, 0x842
    ctx->pc = 0x32dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2114 << 16));
    // 0x32dcdc: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x32dcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x32dce0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x32dce0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dce4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x32dce4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dce8: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x32dce8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dcec: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x32dcecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32dcf0: 0x26270002  addiu       $a3, $s1, 0x2
    ctx->pc = 0x32dcf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x32dcf4: 0x24c6e4c4  addiu       $a2, $a2, -0x1B3C
    ctx->pc = 0x32dcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960324));
    // 0x32dcf8: 0x241200ff  addiu       $s2, $zero, 0xFF
    ctx->pc = 0x32dcf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32dcfc: 0x3c0f8000  lui         $t7, 0x8000
    ctx->pc = 0x32dcfcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32768 << 16));
    // 0x32dd00: 0x34421085  ori         $v0, $v0, 0x1085
    ctx->pc = 0x32dd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4229);
label_32dd04:
    // 0x32dd04: 0x94f90000  lhu         $t9, 0x0($a3)
    ctx->pc = 0x32dd04u;
    SET_GPR_U32(ctx, 25, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32dd08: 0x195282  srl         $t2, $t9, 10
    ctx->pc = 0x32dd08u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 25), 10));
    // 0x32dd0c: 0x194142  srl         $t0, $t9, 5
    ctx->pc = 0x32dd0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 25), 5));
    // 0x32dd10: 0x3158001f  andi        $t8, $t2, 0x1F
    ctx->pc = 0x32dd10u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)31);
    // 0x32dd14: 0x310b001f  andi        $t3, $t0, 0x1F
    ctx->pc = 0x32dd14u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
    // 0x32dd18: 0x332a001f  andi        $t2, $t9, 0x1F
    ctx->pc = 0x32dd18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)31);
    // 0x32dd1c: 0x184200  sll         $t0, $t8, 8
    ctx->pc = 0x32dd1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 24), 8));
    // 0x32dd20: 0x118c823  subu        $t9, $t0, $t8
    ctx->pc = 0x32dd20u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 24)));
    // 0x32dd24: 0x590019  multu       $v0, $t9
    ctx->pc = 0x32dd24u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32dd28: 0xb4200  sll         $t0, $t3, 8
    ctx->pc = 0x32dd28u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x32dd2c: 0x10b5823  subu        $t3, $t0, $t3
    ctx->pc = 0x32dd2cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x32dd30: 0xa4200  sll         $t0, $t2, 8
    ctx->pc = 0x32dd30u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x32dd34: 0x10a5023  subu        $t2, $t0, $t2
    ctx->pc = 0x32dd34u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x32dd38: 0xc010  mfhi        $t8
    ctx->pc = 0x32dd38u;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x32dd3c: 0x4b0019  multu       $v0, $t3
    ctx->pc = 0x32dd3cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32dd40: 0x3384023  subu        $t0, $t9, $t8
    ctx->pc = 0x32dd40u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 24)));
    // 0x32dd44: 0x84042  srl         $t0, $t0, 1
    ctx->pc = 0x32dd44u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x32dd48: 0x1184021  addu        $t0, $t0, $t8
    ctx->pc = 0x32dd48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 24)));
    // 0x32dd4c: 0x84102  srl         $t0, $t0, 4
    ctx->pc = 0x32dd4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
    // 0x32dd50: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x32dd50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x32dd54: 0xc010  mfhi        $t8
    ctx->pc = 0x32dd54u;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x32dd58: 0x29010100  slti        $at, $t0, 0x100
    ctx->pc = 0x32dd58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x32dd5c: 0x4a0019  multu       $v0, $t2
    ctx->pc = 0x32dd5cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32dd60: 0x1785823  subu        $t3, $t3, $t8
    ctx->pc = 0x32dd60u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
    // 0x32dd64: 0xb5842  srl         $t3, $t3, 1
    ctx->pc = 0x32dd64u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x32dd68: 0x1785821  addu        $t3, $t3, $t8
    ctx->pc = 0x32dd68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
    // 0x32dd6c: 0xbc102  srl         $t8, $t3, 4
    ctx->pc = 0x32dd6cu;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 11), 4));
    // 0x32dd70: 0x5810  mfhi        $t3
    ctx->pc = 0x32dd70u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x32dd74: 0x14b5023  subu        $t2, $t2, $t3
    ctx->pc = 0x32dd74u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x32dd78: 0xa5042  srl         $t2, $t2, 1
    ctx->pc = 0x32dd78u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x32dd7c: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x32dd7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x32dd80: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x32DD80u;
    {
        const bool branch_taken_0x32dd80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD80u;
        // 0x32dd84: 0xa5102  srl         $t2, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dd80) {
            ctx->pc = 0x32DD90u;
            goto label_32dd90;
        }
    }
    ctx->pc = 0x32DD88u;
    // 0x32dd88: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x32DD88u;
    {
        const bool branch_taken_0x32dd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD88u;
        // 0x32dd8c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dd88) {
            ctx->pc = 0x32DD90u;
            goto label_32dd90;
        }
    }
    ctx->pc = 0x32DD90u;
label_32dd90:
    // 0x32dd90: 0x304c821  addu        $t9, $t8, $a0
    ctx->pc = 0x32dd90u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x32dd94: 0x2b210100  slti        $at, $t9, 0x100
    ctx->pc = 0x32dd94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x32dd98: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x32DD98u;
    {
        const bool branch_taken_0x32dd98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32dd98) {
            ctx->pc = 0x32DDA8u;
            goto label_32dda8;
        }
    }
    ctx->pc = 0x32DDA0u;
    // 0x32dda0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x32DDA0u;
    {
        const bool branch_taken_0x32dda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DDA0u;
        // 0x32dda4: 0x240c82d  daddu       $t9, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dda0) {
            ctx->pc = 0x32DDA8u;
            goto label_32dda8;
        }
    }
    ctx->pc = 0x32DDA8u;
label_32dda8:
    // 0x32dda8: 0x143c021  addu        $t8, $t2, $v1
    ctx->pc = 0x32dda8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x32ddac: 0x2b010100  slti        $at, $t8, 0x100
    ctx->pc = 0x32ddacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x32ddb0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x32DDB0u;
    {
        const bool branch_taken_0x32ddb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ddb0) {
            ctx->pc = 0x32DDC0u;
            goto label_32ddc0;
        }
    }
    ctx->pc = 0x32DDB8u;
    // 0x32ddb8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x32DDB8u;
    {
        const bool branch_taken_0x32ddb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DDB8u;
        // 0x32ddbc: 0x240c02d  daddu       $t8, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ddb8) {
            ctx->pc = 0x32DDC0u;
            goto label_32ddc0;
        }
    }
    ctx->pc = 0x32DDC0u;
label_32ddc0:
    // 0x32ddc0: 0x185400  sll         $t2, $t8, 16
    ctx->pc = 0x32ddc0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 16));
    // 0x32ddc4: 0x14f5825  or          $t3, $t2, $t7
    ctx->pc = 0x32ddc4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) | GPR_U64(ctx, 15));
    // 0x32ddc8: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x32ddc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x32ddcc: 0x195200  sll         $t2, $t9, 8
    ctx->pc = 0x32ddccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x32ddd0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x32ddd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x32ddd4: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x32ddd4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x32ddd8: 0x1986021  addu        $t4, $t4, $t8
    ctx->pc = 0x32ddd8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 24)));
    // 0x32dddc: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x32dddcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x32dde0: 0x1b96821  addu        $t5, $t5, $t9
    ctx->pc = 0x32dde0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 25)));
    // 0x32dde4: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x32dde4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x32dde8: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x32dde8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x32ddec: 0x29280010  slti        $t0, $t1, 0x10
    ctx->pc = 0x32ddecu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x32ddf0: 0x1500ffc4  bnez        $t0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x32DDF0u;
    {
        const bool branch_taken_0x32ddf0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DDF0u;
        // 0x32ddf4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ddf0) {
            ctx->pc = 0x32DD04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32dd04;
        }
    }
    ctx->pc = 0x32DDF8u;
    // 0x32ddf8: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x32ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x32ddfc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x32ddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x32de00: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x32de00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x32de04: 0xc97c2  srl         $s2, $t4, 31
    ctx->pc = 0x32de04u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x32de08: 0x4c0018  mult        $zero, $v0, $t4
    ctx->pc = 0x32de08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32de0c: 0xdc7c2  srl         $t8, $t5, 31
    ctx->pc = 0x32de0cu;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
    // 0x32de10: 0xe7fc2  srl         $t7, $t6, 31
    ctx->pc = 0x32de10u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
    // 0x32de14: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x32de14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x32de18: 0x2484e700  addiu       $a0, $a0, -0x1900
    ctx->pc = 0x32de18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960896));
    // 0x32de1c: 0x24053e80  addiu       $a1, $zero, 0x3E80
    ctx->pc = 0x32de1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16000));
    // 0x32de20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32de20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32de24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32de24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32de28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32de28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32de2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32de2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32de30: 0xc810  mfhi        $t9
    ctx->pc = 0x32de30u;
    SET_GPR_U64(ctx, 25, ctx->hi);
    // 0x32de34: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x32de34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32de38: 0x4d0018  mult        $zero, $v0, $t5
    ctx->pc = 0x32de38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32de3c: 0x32c6021  addu        $t4, $t9, $t4
    ctx->pc = 0x32de3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x32de40: 0xc60c3  sra         $t4, $t4, 3
    ctx->pc = 0x32de40u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 3));
    // 0x32de44: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x32de44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32de48: 0x1926021  addu        $t4, $t4, $s2
    ctx->pc = 0x32de48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 18)));
    // 0x32de4c: 0xccc00  sll         $t9, $t4, 16
    ctx->pc = 0x32de4cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x32de50: 0x6010  mfhi        $t4
    ctx->pc = 0x32de50u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x32de54: 0x4e0018  mult        $zero, $v0, $t6
    ctx->pc = 0x32de54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32de58: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x32de58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x32de5c: 0xc10c3  sra         $v0, $t4, 3
    ctx->pc = 0x32de5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 3));
    // 0x32de60: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x32de60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x32de64: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x32de64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32de68: 0x3226025  or          $t4, $t9, $v0
    ctx->pc = 0x32de68u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 25) | GPR_U64(ctx, 2));
    // 0x32de6c: 0x1010  mfhi        $v0
    ctx->pc = 0x32de6cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32de70: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x32de70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x32de74: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x32de74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x32de78: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x32de78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x32de7c: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x32de7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x32de80: 0xc040532  jal         func_1014C8
    ctx->pc = 0x32DE80u;
    SET_GPR_U32(ctx, 31, 0x32DE88u);
    ctx->pc = 0x32DE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DE80u;
    // 0x32de84: 0xac62e4c0  sw          $v0, -0x1B40($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960320), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x32DE80u, 0x32DE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DE88u;
label_32de88:
    // 0x32de88: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x32DE88u;
    SET_GPR_U32(ctx, 31, 0x32DE90u);
    ctx->pc = 0x32DE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DE88u;
    // 0x32de8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x32DE88u, 0x32DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DE90u;
label_32de90:
    // 0x32de90: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x32de90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x32de94: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x32de94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x32de98: 0x2484e700  addiu       $a0, $a0, -0x1900
    ctx->pc = 0x32de98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960896));
    // 0x32de9c: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x32DE9Cu;
    SET_GPR_U32(ctx, 31, 0x32DEA4u);
    ctx->pc = 0x32DEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DE9Cu;
    // 0x32dea0: 0x24a5e4c0  addiu       $a1, $a1, -0x1B40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x32DE9Cu, 0x32DEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DEA4u;
label_32dea4:
    // 0x32dea4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32dea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dea8: 0xc040454  jal         func_101150
    ctx->pc = 0x32DEA8u;
    SET_GPR_U32(ctx, 31, 0x32DEB0u);
    ctx->pc = 0x32DEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DEA8u;
    // 0x32deac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x32DEA8u, 0x32DEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DEB0u;
label_32deb0:
    // 0x32deb0: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x32deb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
    // 0x32deb4: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32deb8: 0xac914780  sw          $s1, 0x4780($a0)
    ctx->pc = 0x32deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 18304), GPR_U32(ctx, 17));
    // 0x32debc: 0xac70f398  sw          $s0, -0xC68($v1)
    ctx->pc = 0x32debcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964120), GPR_U32(ctx, 16));
    // 0x32dec0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32dec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32dec4:
    // 0x32dec4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32dec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32dec8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32dec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32decc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32deccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ded0: 0x3e00008  jr          $ra
    ctx->pc = 0x32DED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DED0u;
        // 0x32ded4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DED8u;
    // 0x32ded8: 0x0  nop
    ctx->pc = 0x32ded8u;
    // NOP
    // 0x32dedc: 0x0  nop
    ctx->pc = 0x32dedcu;
    // NOP
    if (ctx->pc == 0x32dedcu) { ctx->pc = 0x32dee0u; }
}
