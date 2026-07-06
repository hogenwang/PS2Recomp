#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002076F0
// Address: 0x2076f0 - 0x207cf0
void sub_002076F0_0x2076f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002076F0_0x2076f0");
#endif

    switch (ctx->pc) {
        case 0x207750u: goto label_207750;
        case 0x207830u: goto label_207830;
        case 0x2078b8u: goto label_2078b8;
        case 0x2078d4u: goto label_2078d4;
        case 0x207928u: goto label_207928;
        case 0x207990u: goto label_207990;
        case 0x2079c8u: goto label_2079c8;
        case 0x207a18u: goto label_207a18;
        case 0x207a30u: goto label_207a30;
        case 0x207accu: goto label_207acc;
        case 0x207b28u: goto label_207b28;
        case 0x207ba0u: goto label_207ba0;
        case 0x207bb8u: goto label_207bb8;
        case 0x207bd0u: goto label_207bd0;
        case 0x207bf4u: goto label_207bf4;
        case 0x207c10u: goto label_207c10;
        case 0x207c24u: goto label_207c24;
        case 0x207c38u: goto label_207c38;
        case 0x207c70u: goto label_207c70;
        case 0x207c80u: goto label_207c80;
        case 0x207c88u: goto label_207c88;
        case 0x207ca0u: goto label_207ca0;
        case 0x207cb0u: goto label_207cb0;
        case 0x207cc8u: goto label_207cc8;
        case 0x207cd8u: goto label_207cd8;
        default: break;
    }

    ctx->pc = 0x2076f0u;

label_2076f0:
    // 0x2076f0: 0x28810021  slti        $at, $a0, 0x21
    ctx->pc = 0x2076f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2076f4: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2076F4u;
    {
        const bool branch_taken_0x2076f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2076f4) {
            ctx->pc = 0x2076F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2076F4u;
            // 0x2076f8: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207704u;
            goto label_207704;
        }
    }
    ctx->pc = 0x2076FCu;
    // 0x2076fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2076FCu;
    {
        const bool branch_taken_0x2076fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2076FCu;
            // 0x207700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076fc) {
            ctx->pc = 0x207744u;
            goto label_207744;
        }
    }
    ctx->pc = 0x207704u;
label_207704:
    // 0x207704: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207704u;
    {
        const bool branch_taken_0x207704 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x207704) {
            ctx->pc = 0x207708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207704u;
            // 0x207708: 0x28810029  slti        $at, $a0, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x207714u;
            goto label_207714;
        }
    }
    ctx->pc = 0x20770Cu;
    // 0x20770c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20770Cu;
    {
        const bool branch_taken_0x20770c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20770Cu;
            // 0x207710: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20770c) {
            ctx->pc = 0x207744u;
            goto label_207744;
        }
    }
    ctx->pc = 0x207714u;
label_207714:
    // 0x207714: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x207714u;
    {
        const bool branch_taken_0x207714 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x207714) {
            ctx->pc = 0x207718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207714u;
            // 0x207718: 0x2483ffdf  addiu       $v1, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207724u;
            goto label_207724;
        }
    }
    ctx->pc = 0x20771Cu;
    // 0x20771c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x20771cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x207720: 0x2483ffdf  addiu       $v1, $a0, -0x21
    ctx->pc = 0x207720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
label_207724:
    // 0x207724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207728: 0x622004  sllv        $a0, $v0, $v1
    ctx->pc = 0x207728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x20772c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x20772cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x207730: 0x9463ec80  lhu         $v1, -0x1380($v1)
    ctx->pc = 0x207730u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962304)));
    // 0x207734: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x207734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x207738: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x207738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x20773c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20773Cu;
    {
        const bool branch_taken_0x20773c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20773c) {
            ctx->pc = 0x207740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20773Cu;
            // 0x207740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207744u;
            goto label_207744;
        }
    }
    ctx->pc = 0x207744u;
label_207744:
    // 0x207744: 0x3e00008  jr          $ra
    ctx->pc = 0x207744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20774Cu;
    // 0x20774c: 0x0  nop
    ctx->pc = 0x20774cu;
    // NOP
label_207750:
    // 0x207750: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x207750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x207754: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x207754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x207758: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x207758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x20775c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x20775cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x207760: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x207760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x207764: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x207764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x207768: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x207768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20776c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20776cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x207770: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x207770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x207774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x207774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x207778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x207778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20777c: 0x8c459bf8  lw          $a1, -0x6408($v0)
    ctx->pc = 0x20777cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x207780: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x207780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x207784: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x207784u;
    {
        const bool branch_taken_0x207784 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x207784) {
            ctx->pc = 0x2077A8u;
            goto label_2077a8;
        }
    }
    ctx->pc = 0x20778Cu;
    // 0x20778c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x20778cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x207790: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x207790u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x207794: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x207794u;
    {
        const bool branch_taken_0x207794 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x207798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207794u;
            // 0x207798: 0x24a30034  addiu       $v1, $a1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207794) {
            ctx->pc = 0x2077A8u;
            goto label_2077a8;
        }
    }
    ctx->pc = 0x20779Cu;
    // 0x20779c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20779cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2077a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2077A0u;
    {
        const bool branch_taken_0x2077a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2077A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2077A0u;
            // 0x2077a4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077a0) {
            ctx->pc = 0x2077C4u;
            goto label_2077c4;
        }
    }
    ctx->pc = 0x2077A8u;
label_2077a8:
    // 0x2077a8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2077A8u;
    {
        const bool branch_taken_0x2077a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2077a8) {
            ctx->pc = 0x2077C4u;
            goto label_2077c4;
        }
    }
    ctx->pc = 0x2077B0u;
    // 0x2077b0: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2077b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2077b4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2077B4u;
    {
        const bool branch_taken_0x2077b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2077B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2077B4u;
            // 0x2077b8: 0x24a30034  addiu       $v1, $a1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077b4) {
            ctx->pc = 0x2077C4u;
            goto label_2077c4;
        }
    }
    ctx->pc = 0x2077BCu;
    // 0x2077bc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2077bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2077c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2077c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2077c4:
    // 0x2077c4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2077c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2077c8: 0x8c459bf8  lw          $a1, -0x6408($v0)
    ctx->pc = 0x2077c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2077cc: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x2077ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x2077d0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2077D0u;
    {
        const bool branch_taken_0x2077d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2077d0) {
            ctx->pc = 0x2077F4u;
            goto label_2077f4;
        }
    }
    ctx->pc = 0x2077D8u;
    // 0x2077d8: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2077d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2077dc: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x2077dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2077e0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2077E0u;
    {
        const bool branch_taken_0x2077e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2077E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2077E0u;
            // 0x2077e4: 0x24a30040  addiu       $v1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077e0) {
            ctx->pc = 0x2077F4u;
            goto label_2077f4;
        }
    }
    ctx->pc = 0x2077E8u;
    // 0x2077e8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2077e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2077ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2077ECu;
    {
        const bool branch_taken_0x2077ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2077F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2077ECu;
            // 0x2077f0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077ec) {
            ctx->pc = 0x207810u;
            goto label_207810;
        }
    }
    ctx->pc = 0x2077F4u;
label_2077f4:
    // 0x2077f4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2077F4u;
    {
        const bool branch_taken_0x2077f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2077f4) {
            ctx->pc = 0x207810u;
            goto label_207810;
        }
    }
    ctx->pc = 0x2077FCu;
    // 0x2077fc: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2077fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x207800: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207800u;
    {
        const bool branch_taken_0x207800 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x207804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207800u;
            // 0x207804: 0x24a30040  addiu       $v1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207800) {
            ctx->pc = 0x207810u;
            goto label_207810;
        }
    }
    ctx->pc = 0x207808u;
    // 0x207808: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x207808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x20780c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20780cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_207810:
    // 0x207810: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x207810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x207814: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x207814u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x207818: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x207818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x20781c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20781cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207820: 0x24c69ec0  addiu       $a2, $a2, -0x6140
    ctx->pc = 0x207820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942400));
    // 0x207824: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x207824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x207828: 0xc081120  jal         func_204480
    ctx->pc = 0x207828u;
    SET_GPR_U32(ctx, 31, 0x207830u);
    ctx->pc = 0x20782Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207828u;
            // 0x20782c: 0x2445ffc0  addiu       $a1, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (runtime->hasFunction(0x204480u)) {
        auto targetFn = runtime->lookupFunction(0x204480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207830u; }
        if (ctx->pc != 0x207830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204480_0x204480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207830u; }
        if (ctx->pc != 0x207830u) { return; }
    }
    ctx->pc = 0x207830u;
label_207830:
    // 0x207830: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x207830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x207834: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x207834u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x207838: 0x54600100  bnel        $v1, $zero, . + 4 + (0x100 << 2)
    ctx->pc = 0x207838u;
    {
        const bool branch_taken_0x207838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x207838) {
            ctx->pc = 0x20783Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207838u;
            // 0x20783c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207C3Cu;
            goto label_207c3c;
        }
    }
    ctx->pc = 0x207840u;
    // 0x207840: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x207840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x207844: 0x8c459bf8  lw          $a1, -0x6408($v0)
    ctx->pc = 0x207844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x207848: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x207848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x20784c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20784Cu;
    {
        const bool branch_taken_0x20784c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20784c) {
            ctx->pc = 0x207870u;
            goto label_207870;
        }
    }
    ctx->pc = 0x207854u;
    // 0x207854: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x207854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x207858: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x207858u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x20785c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x20785Cu;
    {
        const bool branch_taken_0x20785c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x207860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20785Cu;
            // 0x207860: 0x24a30038  addiu       $v1, $a1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20785c) {
            ctx->pc = 0x207870u;
            goto label_207870;
        }
    }
    ctx->pc = 0x207864u;
    // 0x207864: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x207864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x207868: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x207868u;
    {
        const bool branch_taken_0x207868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20786Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207868u;
            // 0x20786c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207868) {
            ctx->pc = 0x20788Cu;
            goto label_20788c;
        }
    }
    ctx->pc = 0x207870u;
label_207870:
    // 0x207870: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x207870u;
    {
        const bool branch_taken_0x207870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x207870) {
            ctx->pc = 0x20788Cu;
            goto label_20788c;
        }
    }
    ctx->pc = 0x207878u;
    // 0x207878: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x207878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x20787c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20787Cu;
    {
        const bool branch_taken_0x20787c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x207880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20787Cu;
            // 0x207880: 0x24a30038  addiu       $v1, $a1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20787c) {
            ctx->pc = 0x20788Cu;
            goto label_20788c;
        }
    }
    ctx->pc = 0x207884u;
    // 0x207884: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x207884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x207888: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x207888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_20788c:
    // 0x20788c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20788cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x207890: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x207890u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x207894: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x207894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x207898: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x207898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x20789c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x20789cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2078a0: 0x24c69ed8  addiu       $a2, $a2, -0x6128
    ctx->pc = 0x2078a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942424));
    // 0x2078a4: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x2078a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2078a8: 0x24030250  addiu       $v1, $zero, 0x250
    ctx->pc = 0x2078a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x2078ac: 0xa4449ede  sh          $a0, -0x6122($v0)
    ctx->pc = 0x2078acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294942430), (uint16_t)GPR_U32(ctx, 4));
    // 0x2078b0: 0xc081120  jal         func_204480
    ctx->pc = 0x2078B0u;
    SET_GPR_U32(ctx, 31, 0x2078B8u);
    ctx->pc = 0x2078B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2078B0u;
            // 0x2078b4: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (runtime->hasFunction(0x204480u)) {
        auto targetFn = runtime->lookupFunction(0x204480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2078B8u; }
        if (ctx->pc != 0x2078B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204480_0x204480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2078B8u; }
        if (ctx->pc != 0x2078B8u) { return; }
    }
    ctx->pc = 0x2078B8u;
label_2078b8:
    // 0x2078b8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2078b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2078bc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2078bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2078c0: 0xa7a0009a  sh          $zero, 0x9A($sp)
    ctx->pc = 0x2078c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 154), (uint16_t)GPR_U32(ctx, 0));
    // 0x2078c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2078c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2078c8: 0xa7b40090  sh          $s4, 0x90($sp)
    ctx->pc = 0x2078c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 144), (uint16_t)GPR_U32(ctx, 20));
    // 0x2078cc: 0xa7a20098  sh          $v0, 0x98($sp)
    ctx->pc = 0x2078ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 152), (uint16_t)GPR_U32(ctx, 2));
    // 0x2078d0: 0xa7a20096  sh          $v0, 0x96($sp)
    ctx->pc = 0x2078d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 150), (uint16_t)GPR_U32(ctx, 2));
label_2078d4:
    // 0x2078d4: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2078D4u;
    {
        const bool branch_taken_0x2078d4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2078D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2078D4u;
            // 0x2078d8: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078d4) {
            ctx->pc = 0x2078E8u;
            goto label_2078e8;
        }
    }
    ctx->pc = 0x2078DCu;
    // 0x2078dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2078DCu;
    {
        const bool branch_taken_0x2078dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2078dc) {
            ctx->pc = 0x2078E8u;
            goto label_2078e8;
        }
    }
    ctx->pc = 0x2078E4u;
    // 0x2078e4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2078e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_2078e8:
    // 0x2078e8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2078E8u;
    {
        const bool branch_taken_0x2078e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2078e8) {
            ctx->pc = 0x2078ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2078E8u;
            // 0x2078ec: 0x24110030  addiu       $s1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2078F4u;
            goto label_2078f4;
        }
    }
    ctx->pc = 0x2078F0u;
    // 0x2078f0: 0x24110050  addiu       $s1, $zero, 0x50
    ctx->pc = 0x2078f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2078f4:
    // 0x2078f4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2078F4u;
    {
        const bool branch_taken_0x2078f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2078f4) {
            ctx->pc = 0x2078F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2078F4u;
            // 0x2078f8: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207900u;
            goto label_207900;
        }
    }
    ctx->pc = 0x2078FCu;
    // 0x2078fc: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x2078fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_207900:
    // 0x207900: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x207900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207904: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x207904u;
    {
        const bool branch_taken_0x207904 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x207908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207904u;
            // 0x207908: 0x121843  sra         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207904) {
            ctx->pc = 0x207914u;
            goto label_207914;
        }
    }
    ctx->pc = 0x20790Cu;
    // 0x20790c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x20790cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x207910: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x207910u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_207914:
    // 0x207914: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x207914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x207918: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20791c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x20791cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x207920: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x207920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x207924: 0x0  nop
    ctx->pc = 0x207924u;
    // NOP
label_207928:
    // 0x207928: 0x2a810020  slti        $at, $s4, 0x20
    ctx->pc = 0x207928u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x20792c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x20792Cu;
    {
        const bool branch_taken_0x20792c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x207930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20792Cu;
            // 0x207930: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20792c) {
            ctx->pc = 0x207940u;
            goto label_207940;
        }
    }
    ctx->pc = 0x207934u;
    // 0x207934: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x207934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207938: 0x2684ffe1  addiu       $a0, $s4, -0x1F
    ctx->pc = 0x207938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967265));
    // 0x20793c: 0xa7a20090  sh          $v0, 0x90($sp)
    ctx->pc = 0x20793cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 144), (uint16_t)GPR_U32(ctx, 2));
label_207940:
    // 0x207940: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207940u;
    {
        const bool branch_taken_0x207940 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x207944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207940u;
            // 0x207944: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207940) {
            ctx->pc = 0x207954u;
            goto label_207954;
        }
    }
    ctx->pc = 0x207948u;
    // 0x207948: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x207948u;
    {
        const bool branch_taken_0x207948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207948) {
            ctx->pc = 0x20794Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207948u;
            // 0x20794c: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207958u;
            goto label_207958;
        }
    }
    ctx->pc = 0x207950u;
    // 0x207950: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x207950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_207954:
    // 0x207954: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x207954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_207958:
    // 0x207958: 0x41083  sra         $v0, $a0, 2
    ctx->pc = 0x207958u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 2));
    // 0x20795c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20795Cu;
    {
        const bool branch_taken_0x20795c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x207960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20795Cu;
            // 0x207960: 0xa7a30092  sh          $v1, 0x92($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 146), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20795c) {
            ctx->pc = 0x20796Cu;
            goto label_20796c;
        }
    }
    ctx->pc = 0x207964u;
    // 0x207964: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x207964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x207968: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x207968u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_20796c:
    // 0x20796c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x20796cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x207970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207974: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x207974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x207978: 0xa7a30094  sh          $v1, 0x94($sp)
    ctx->pc = 0x207978u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x20797c: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x20797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x207980: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x207980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207984: 0x8c460040  lw          $a2, 0x40($v0)
    ctx->pc = 0x207984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x207988: 0xc082e6c  jal         func_20B9B0
    ctx->pc = 0x207988u;
    SET_GPR_U32(ctx, 31, 0x207990u);
    ctx->pc = 0x20798Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207988u;
            // 0x20798c: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20B9B0u;
    if (runtime->hasFunction(0x20B9B0u)) {
        auto targetFn = runtime->lookupFunction(0x20B9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207990u; }
        if (ctx->pc != 0x207990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020B9B0_0x20b9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207990u; }
        if (ctx->pc != 0x207990u) { return; }
    }
    ctx->pc = 0x207990u;
label_207990:
    // 0x207990: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x207990u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x207994: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x207994u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x207998: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x207998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x20799c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x20799Cu;
    {
        const bool branch_taken_0x20799c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2079A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20799Cu;
            // 0x2079a0: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20799c) {
            ctx->pc = 0x207928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_207928;
        }
    }
    ctx->pc = 0x2079A4u;
    // 0x2079a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2079a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2079a8: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2079a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2079ac: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x2079ACu;
    {
        const bool branch_taken_0x2079ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2079ac) {
            ctx->pc = 0x2078D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2078d4;
        }
    }
    ctx->pc = 0x2079B4u;
    // 0x2079b4: 0x3c16003a  lui         $s6, 0x3A
    ctx->pc = 0x2079b4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
    // 0x2079b8: 0x3c17003a  lui         $s7, 0x3A
    ctx->pc = 0x2079b8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
    // 0x2079bc: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x2079bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2079c0: 0x26d698d0  addiu       $s6, $s6, -0x6730
    ctx->pc = 0x2079c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294940880));
    // 0x2079c4: 0x26f798e0  addiu       $s7, $s7, -0x6720
    ctx->pc = 0x2079c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294940896));
label_2079c8:
    // 0x2079c8: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2079C8u;
    {
        const bool branch_taken_0x2079c8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2079CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2079C8u;
            // 0x2079cc: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079c8) {
            ctx->pc = 0x2079DCu;
            goto label_2079dc;
        }
    }
    ctx->pc = 0x2079D0u;
    // 0x2079d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2079D0u;
    {
        const bool branch_taken_0x2079d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2079d0) {
            ctx->pc = 0x2079DCu;
            goto label_2079dc;
        }
    }
    ctx->pc = 0x2079D8u;
    // 0x2079d8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2079d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_2079dc:
    // 0x2079dc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2079DCu;
    {
        const bool branch_taken_0x2079dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2079dc) {
            ctx->pc = 0x2079E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2079DCu;
            // 0x2079e0: 0x24150030  addiu       $s5, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2079E8u;
            goto label_2079e8;
        }
    }
    ctx->pc = 0x2079E4u;
    // 0x2079e4: 0x24150050  addiu       $s5, $zero, 0x50
    ctx->pc = 0x2079e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2079e8:
    // 0x2079e8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2079E8u;
    {
        const bool branch_taken_0x2079e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2079e8) {
            ctx->pc = 0x2079ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2079E8u;
            // 0x2079ec: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2079F4u;
            goto label_2079f4;
        }
    }
    ctx->pc = 0x2079F0u;
    // 0x2079f0: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x2079f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_2079f4:
    // 0x2079f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2079f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2079f8: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2079F8u;
    {
        const bool branch_taken_0x2079f8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2079FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2079F8u;
            // 0x2079fc: 0x121843  sra         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079f8) {
            ctx->pc = 0x207A08u;
            goto label_207a08;
        }
    }
    ctx->pc = 0x207A00u;
    // 0x207a00: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x207a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x207a04: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x207a04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_207a08:
    // 0x207a08: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x207a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x207a0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207a10: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x207a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x207a14: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x207a14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_207a18:
    // 0x207a18: 0x92d00000  lbu         $s0, 0x0($s6)
    ctx->pc = 0x207a18u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x207a1c: 0x92f30000  lbu         $s3, 0x0($s7)
    ctx->pc = 0x207a1cu;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x207a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207a24: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x207a24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x207a28: 0xc081dbc  jal         func_2076F0
    ctx->pc = 0x207A28u;
    SET_GPR_U32(ctx, 31, 0x207A30u);
    ctx->pc = 0x207A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207A28u;
            // 0x207a2c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2076F0u;
    goto label_2076f0;
    ctx->pc = 0x207A30u;
label_207a30:
    // 0x207a30: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x207A30u;
    {
        const bool branch_taken_0x207a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207a30) {
            ctx->pc = 0x207A60u;
            goto label_207a60;
        }
    }
    ctx->pc = 0x207A38u;
    // 0x207a38: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x207a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x207a3c: 0x12020024  beq         $s0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x207A3Cu;
    {
        const bool branch_taken_0x207a3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x207a3c) {
            ctx->pc = 0x207AD0u;
            goto label_207ad0;
        }
    }
    ctx->pc = 0x207A44u;
    // 0x207a44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x207a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207a48: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x207a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x207a4c: 0xa7a20090  sh          $v0, 0x90($sp)
    ctx->pc = 0x207a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x207a50: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x207a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x207a54: 0xa7a30092  sh          $v1, 0x92($sp)
    ctx->pc = 0x207a54u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 146), (uint16_t)GPR_U32(ctx, 3));
    // 0x207a58: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x207A58u;
    {
        const bool branch_taken_0x207a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A58u;
            // 0x207a5c: 0xa7a20094  sh          $v0, 0x94($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 148), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a58) {
            ctx->pc = 0x207AB0u;
            goto label_207ab0;
        }
    }
    ctx->pc = 0x207A60u;
label_207a60:
    // 0x207a60: 0x2a610020  slti        $at, $s3, 0x20
    ctx->pc = 0x207a60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x207a64: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x207A64u;
    {
        const bool branch_taken_0x207a64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x207a64) {
            ctx->pc = 0x207A78u;
            goto label_207a78;
        }
    }
    ctx->pc = 0x207A6Cu;
    // 0x207a6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x207a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207a70: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x207a70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x207a74: 0xa7a20090  sh          $v0, 0x90($sp)
    ctx->pc = 0x207a74u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 144), (uint16_t)GPR_U32(ctx, 2));
label_207a78:
    // 0x207a78: 0x6610004  bgez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x207A78u;
    {
        const bool branch_taken_0x207a78 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x207A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A78u;
            // 0x207a7c: 0x32620003  andi        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a78) {
            ctx->pc = 0x207A8Cu;
            goto label_207a8c;
        }
    }
    ctx->pc = 0x207A80u;
    // 0x207a80: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x207A80u;
    {
        const bool branch_taken_0x207a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207a80) {
            ctx->pc = 0x207A84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207A80u;
            // 0x207a84: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207A90u;
            goto label_207a90;
        }
    }
    ctx->pc = 0x207A88u;
    // 0x207a88: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x207a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_207a8c:
    // 0x207a8c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x207a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_207a90:
    // 0x207a90: 0x131083  sra         $v0, $s3, 2
    ctx->pc = 0x207a90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 2));
    // 0x207a94: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x207A94u;
    {
        const bool branch_taken_0x207a94 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x207A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A94u;
            // 0x207a98: 0xa7a30092  sh          $v1, 0x92($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 146), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a94) {
            ctx->pc = 0x207AA4u;
            goto label_207aa4;
        }
    }
    ctx->pc = 0x207A9Cu;
    // 0x207a9c: 0x26620003  addiu       $v0, $s3, 0x3
    ctx->pc = 0x207a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x207aa0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x207aa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_207aa4:
    // 0x207aa4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x207aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x207aa8: 0xa7a20094  sh          $v0, 0x94($sp)
    ctx->pc = 0x207aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x207aac: 0x0  nop
    ctx->pc = 0x207aacu;
    // NOP
label_207ab0:
    // 0x207ab0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x207ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x207ab4: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x207ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x207ab8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x207ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207abc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x207abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ac0: 0x8c460040  lw          $a2, 0x40($v0)
    ctx->pc = 0x207ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x207ac4: 0xc082e6c  jal         func_20B9B0
    ctx->pc = 0x207AC4u;
    SET_GPR_U32(ctx, 31, 0x207ACCu);
    ctx->pc = 0x207AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207AC4u;
            // 0x207ac8: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20B9B0u;
    if (runtime->hasFunction(0x20B9B0u)) {
        auto targetFn = runtime->lookupFunction(0x20B9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207ACCu; }
        if (ctx->pc != 0x207ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020B9B0_0x20b9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207ACCu; }
        if (ctx->pc != 0x207ACCu) { return; }
    }
    ctx->pc = 0x207ACCu;
label_207acc:
    // 0x207acc: 0x0  nop
    ctx->pc = 0x207accu;
    // NOP
label_207ad0:
    // 0x207ad0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x207ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x207ad4: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x207ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x207ad8: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x207AD8u;
    {
        const bool branch_taken_0x207ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207AD8u;
            // 0x207adc: 0x26b50040  addiu       $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ad8) {
            ctx->pc = 0x207A18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_207a18;
        }
    }
    ctx->pc = 0x207AE0u;
    // 0x207ae0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x207ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x207ae4: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x207ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x207ae8: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x207AE8u;
    {
        const bool branch_taken_0x207ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207ae8) {
            ctx->pc = 0x2079C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2079c8;
        }
    }
    ctx->pc = 0x207AF0u;
    // 0x207af0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x207af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x207af4: 0x8c469bf8  lw          $a2, -0x6408($v0)
    ctx->pc = 0x207af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x207af8: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x207af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x207afc: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x207AFCu;
    {
        const bool branch_taken_0x207afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207afc) {
            ctx->pc = 0x207B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207AFCu;
            // 0x207b00: 0x8cc20020  lw          $v0, 0x20($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207BD8u;
            goto label_207bd8;
        }
    }
    ctx->pc = 0x207B04u;
    // 0x207b04: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x207b04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x207b08: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x207b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x207b0c: 0x54e20008  bnel        $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x207B0Cu;
    {
        const bool branch_taken_0x207b0c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x207b0c) {
            ctx->pc = 0x207B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207B0Cu;
            // 0x207b10: 0x8cc20014  lw          $v0, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207B30u;
            goto label_207b30;
        }
    }
    ctx->pc = 0x207B14u;
    // 0x207b14: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x207b14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x207b18: 0x240401e0  addiu       $a0, $zero, 0x1E0
    ctx->pc = 0x207b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x207b1c: 0x24050184  addiu       $a1, $zero, 0x184
    ctx->pc = 0x207b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x207b20: 0xc081120  jal         func_204480
    ctx->pc = 0x207B20u;
    SET_GPR_U32(ctx, 31, 0x207B28u);
    ctx->pc = 0x207B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207B20u;
            // 0x207b24: 0x24c69ea8  addiu       $a2, $a2, -0x6158 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (runtime->hasFunction(0x204480u)) {
        auto targetFn = runtime->lookupFunction(0x204480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207B28u; }
        if (ctx->pc != 0x207B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204480_0x204480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207B28u; }
        if (ctx->pc != 0x207B28u) { return; }
    }
    ctx->pc = 0x207B28u;
label_207b28:
    // 0x207b28: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x207B28u;
    {
        const bool branch_taken_0x207b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207b28) {
            ctx->pc = 0x207C24u;
            goto label_207c24;
        }
    }
    ctx->pc = 0x207B30u;
label_207b30:
    // 0x207b30: 0x72043  sra         $a0, $a3, 1
    ctx->pc = 0x207b30u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 1));
    // 0x207b34: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x207B34u;
    {
        const bool branch_taken_0x207b34 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x207B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207B34u;
            // 0x207b38: 0x22980  sll         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b34) {
            ctx->pc = 0x207B44u;
            goto label_207b44;
        }
    }
    ctx->pc = 0x207B3Cu;
    // 0x207b3c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x207b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x207b40: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x207b40u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_207b44:
    // 0x207b44: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x207b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x207b48: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x207b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x207b4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x207b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x207b50: 0x4e10004  bgez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x207B50u;
    {
        const bool branch_taken_0x207b50 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x207B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207B50u;
            // 0x207b54: 0x31940  sll         $v1, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b50) {
            ctx->pc = 0x207B64u;
            goto label_207b64;
        }
    }
    ctx->pc = 0x207B58u;
    // 0x207b58: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x207B58u;
    {
        const bool branch_taken_0x207b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207b58) {
            ctx->pc = 0x207B64u;
            goto label_207b64;
        }
    }
    ctx->pc = 0x207B60u;
    // 0x207b60: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x207b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_207b64:
    // 0x207b64: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x207B64u;
    {
        const bool branch_taken_0x207b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207b64) {
            ctx->pc = 0x207B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207B64u;
            // 0x207b68: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207B70u;
            goto label_207b70;
        }
    }
    ctx->pc = 0x207B6Cu;
    // 0x207b6c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x207b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_207b70:
    // 0x207b70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207B70u;
    {
        const bool branch_taken_0x207b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207B70u;
            // 0x207b74: 0xa48821  addu        $s1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b70) {
            ctx->pc = 0x207B80u;
            goto label_207b80;
        }
    }
    ctx->pc = 0x207B78u;
    // 0x207b78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x207B78u;
    {
        const bool branch_taken_0x207b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207B78u;
            // 0x207b7c: 0x24020090  addiu       $v0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b78) {
            ctx->pc = 0x207B84u;
            goto label_207b84;
        }
    }
    ctx->pc = 0x207B80u;
label_207b80:
    // 0x207b80: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x207b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_207b84:
    // 0x207b84: 0x8cc60040  lw          $a2, 0x40($a2)
    ctx->pc = 0x207b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x207b88: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x207b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207b8c: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x207b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x207b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x207b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b98: 0xc082e6c  jal         func_20B9B0
    ctx->pc = 0x207B98u;
    SET_GPR_U32(ctx, 31, 0x207BA0u);
    ctx->pc = 0x207B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207B98u;
            // 0x207b9c: 0x24e79ef0  addiu       $a3, $a3, -0x6110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20B9B0u;
    if (runtime->hasFunction(0x20B9B0u)) {
        auto targetFn = runtime->lookupFunction(0x20B9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BA0u; }
        if (ctx->pc != 0x207BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020B9B0_0x20b9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BA0u; }
        if (ctx->pc != 0x207BA0u) { return; }
    }
    ctx->pc = 0x207BA0u;
label_207ba0:
    // 0x207ba0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x207ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x207ba4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x207ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x207ba8: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x207ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x207bac: 0x90460040  lbu         $a2, 0x40($v0)
    ctx->pc = 0x207bacu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x207bb0: 0xc0812c4  jal         func_204B10
    ctx->pc = 0x207BB0u;
    SET_GPR_U32(ctx, 31, 0x207BB8u);
    ctx->pc = 0x207BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207BB0u;
            // 0x207bb4: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204B10u;
    if (runtime->hasFunction(0x204B10u)) {
        auto targetFn = runtime->lookupFunction(0x204B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BB8u; }
        if (ctx->pc != 0x207BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204B10_0x204b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BB8u; }
        if (ctx->pc != 0x207BB8u) { return; }
    }
    ctx->pc = 0x207BB8u;
label_207bb8:
    // 0x207bb8: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x207bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x207bbc: 0x240401e0  addiu       $a0, $zero, 0x1E0
    ctx->pc = 0x207bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x207bc0: 0x24050184  addiu       $a1, $zero, 0x184
    ctx->pc = 0x207bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x207bc4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x207bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x207bc8: 0xc0812c0  jal         func_204B00
    ctx->pc = 0x207BC8u;
    SET_GPR_U32(ctx, 31, 0x207BD0u);
    ctx->pc = 0x207BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207BC8u;
            // 0x207bcc: 0x24e79e90  addiu       $a3, $a3, -0x6170 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204B00u;
    if (runtime->hasFunction(0x204B00u)) {
        auto targetFn = runtime->lookupFunction(0x204B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BD0u; }
        if (ctx->pc != 0x207BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204B00_0x204b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BD0u; }
        if (ctx->pc != 0x207BD0u) { return; }
    }
    ctx->pc = 0x207BD0u;
label_207bd0:
    // 0x207bd0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x207BD0u;
    {
        const bool branch_taken_0x207bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207bd0) {
            ctx->pc = 0x207C24u;
            goto label_207c24;
        }
    }
    ctx->pc = 0x207BD8u;
label_207bd8:
    // 0x207bd8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x207BD8u;
    {
        const bool branch_taken_0x207bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207bd8) {
            ctx->pc = 0x207BFCu;
            goto label_207bfc;
        }
    }
    ctx->pc = 0x207BE0u;
    // 0x207be0: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x207be0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x207be4: 0x24040160  addiu       $a0, $zero, 0x160
    ctx->pc = 0x207be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x207be8: 0x24050184  addiu       $a1, $zero, 0x184
    ctx->pc = 0x207be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x207bec: 0xc081120  jal         func_204480
    ctx->pc = 0x207BECu;
    SET_GPR_U32(ctx, 31, 0x207BF4u);
    ctx->pc = 0x207BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207BECu;
            // 0x207bf0: 0x24c69f14  addiu       $a2, $a2, -0x60EC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942484));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (runtime->hasFunction(0x204480u)) {
        auto targetFn = runtime->lookupFunction(0x204480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BF4u; }
        if (ctx->pc != 0x207BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204480_0x204480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BF4u; }
        if (ctx->pc != 0x207BF4u) { return; }
    }
    ctx->pc = 0x207BF4u;
label_207bf4:
    // 0x207bf4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x207BF4u;
    {
        const bool branch_taken_0x207bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207bf4) {
            ctx->pc = 0x207C10u;
            goto label_207c10;
        }
    }
    ctx->pc = 0x207BFCu;
label_207bfc:
    // 0x207bfc: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x207bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x207c00: 0x24040160  addiu       $a0, $zero, 0x160
    ctx->pc = 0x207c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x207c04: 0x24050184  addiu       $a1, $zero, 0x184
    ctx->pc = 0x207c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x207c08: 0xc081120  jal         func_204480
    ctx->pc = 0x207C08u;
    SET_GPR_U32(ctx, 31, 0x207C10u);
    ctx->pc = 0x207C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207C08u;
            // 0x207c0c: 0x24c69f20  addiu       $a2, $a2, -0x60E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (runtime->hasFunction(0x204480u)) {
        auto targetFn = runtime->lookupFunction(0x204480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C10u; }
        if (ctx->pc != 0x207C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204480_0x204480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C10u; }
        if (ctx->pc != 0x207C10u) { return; }
    }
    ctx->pc = 0x207C10u;
label_207c10:
    // 0x207c10: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x207c10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x207c14: 0x240401e0  addiu       $a0, $zero, 0x1E0
    ctx->pc = 0x207c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x207c18: 0x24050184  addiu       $a1, $zero, 0x184
    ctx->pc = 0x207c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x207c1c: 0xc081120  jal         func_204480
    ctx->pc = 0x207C1Cu;
    SET_GPR_U32(ctx, 31, 0x207C24u);
    ctx->pc = 0x207C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207C1Cu;
            // 0x207c20: 0x24c69ea8  addiu       $a2, $a2, -0x6158 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (runtime->hasFunction(0x204480u)) {
        auto targetFn = runtime->lookupFunction(0x204480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C24u; }
        if (ctx->pc != 0x207C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204480_0x204480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C24u; }
        if (ctx->pc != 0x207C24u) { return; }
    }
    ctx->pc = 0x207C24u;
label_207c24:
    // 0x207c24: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x207c24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x207c28: 0x240401e0  addiu       $a0, $zero, 0x1E0
    ctx->pc = 0x207c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x207c2c: 0x24050184  addiu       $a1, $zero, 0x184
    ctx->pc = 0x207c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x207c30: 0xc081120  jal         func_204480
    ctx->pc = 0x207C30u;
    SET_GPR_U32(ctx, 31, 0x207C38u);
    ctx->pc = 0x207C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207C30u;
            // 0x207c34: 0x24c69e84  addiu       $a2, $a2, -0x617C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942340));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (runtime->hasFunction(0x204480u)) {
        auto targetFn = runtime->lookupFunction(0x204480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C38u; }
        if (ctx->pc != 0x207C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204480_0x204480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C38u; }
        if (ctx->pc != 0x207C38u) { return; }
    }
    ctx->pc = 0x207C38u;
label_207c38:
    // 0x207c38: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x207c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_207c3c:
    // 0x207c3c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x207c3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x207c40: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x207c40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x207c44: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x207c44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x207c48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x207c48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x207c4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x207c4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x207c50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x207c50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207c54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x207c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207c58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x207c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x207C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207C5Cu;
            // 0x207c60: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207C64u;
    // 0x207c64: 0x0  nop
    ctx->pc = 0x207c64u;
    // NOP
    // 0x207c68: 0x0  nop
    ctx->pc = 0x207c68u;
    // NOP
    // 0x207c6c: 0x0  nop
    ctx->pc = 0x207c6cu;
    // NOP
label_207c70:
    // 0x207c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x207c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x207c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207c78: 0xc081224  jal         func_204890
    ctx->pc = 0x207C78u;
    SET_GPR_U32(ctx, 31, 0x207C80u);
    ctx->pc = 0x204890u;
    if (runtime->hasFunction(0x204890u)) {
        auto targetFn = runtime->lookupFunction(0x204890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C80u; }
        if (ctx->pc != 0x207C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204890_0x204890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C80u; }
        if (ctx->pc != 0x207C80u) { return; }
    }
    ctx->pc = 0x207C80u;
label_207c80:
    // 0x207c80: 0xc081124  jal         func_204490
    ctx->pc = 0x207C80u;
    SET_GPR_U32(ctx, 31, 0x207C88u);
    ctx->pc = 0x204490u;
    if (runtime->hasFunction(0x204490u)) {
        auto targetFn = runtime->lookupFunction(0x204490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C88u; }
        if (ctx->pc != 0x207C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204490_0x204490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C88u; }
        if (ctx->pc != 0x207C88u) { return; }
    }
    ctx->pc = 0x207C88u;
label_207c88:
    // 0x207c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x207C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207C8Cu;
            // 0x207c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207C94u;
    // 0x207c94: 0x0  nop
    ctx->pc = 0x207c94u;
    // NOP
    // 0x207c98: 0x0  nop
    ctx->pc = 0x207c98u;
    // NOP
    // 0x207c9c: 0x0  nop
    ctx->pc = 0x207c9cu;
    // NOP
label_207ca0:
    // 0x207ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x207ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x207ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207ca8: 0xc0c353c  jal         func_30D4F0
    ctx->pc = 0x207CA8u;
    SET_GPR_U32(ctx, 31, 0x207CB0u);
    ctx->pc = 0x30D4F0u;
    if (runtime->hasFunction(0x30D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x30D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CB0u; }
        if (ctx->pc != 0x207CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030D4F0_0x30d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CB0u; }
        if (ctx->pc != 0x207CB0u) { return; }
    }
    ctx->pc = 0x207CB0u;
label_207cb0:
    // 0x207cb0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x207cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x207cb4: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x207cb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x207cb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207CB8u;
    {
        const bool branch_taken_0x207cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207cb8) {
            ctx->pc = 0x207CD0u;
            goto label_207cd0;
        }
    }
    ctx->pc = 0x207CC0u;
    // 0x207cc0: 0xc0828e8  jal         func_20A3A0
    ctx->pc = 0x207CC0u;
    SET_GPR_U32(ctx, 31, 0x207CC8u);
    ctx->pc = 0x20A3A0u;
    if (runtime->hasFunction(0x20A3A0u)) {
        auto targetFn = runtime->lookupFunction(0x20A3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CC8u; }
        if (ctx->pc != 0x207CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A3A0_0x20a3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CC8u; }
        if (ctx->pc != 0x207CC8u) { return; }
    }
    ctx->pc = 0x207CC8u;
label_207cc8:
    // 0x207cc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x207CC8u;
    {
        const bool branch_taken_0x207cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207CC8u;
            // 0x207ccc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207cc8) {
            ctx->pc = 0x207CDCu;
            goto label_207cdc;
        }
    }
    ctx->pc = 0x207CD0u;
label_207cd0:
    // 0x207cd0: 0xc0c0b44  jal         func_302D10
    ctx->pc = 0x207CD0u;
    SET_GPR_U32(ctx, 31, 0x207CD8u);
    ctx->pc = 0x302D10u;
    if (runtime->hasFunction(0x302D10u)) {
        auto targetFn = runtime->lookupFunction(0x302D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CD8u; }
        if (ctx->pc != 0x207CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302D10_0x302d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CD8u; }
        if (ctx->pc != 0x207CD8u) { return; }
    }
    ctx->pc = 0x207CD8u;
label_207cd8:
    // 0x207cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207cdc:
    // 0x207cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x207CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207CDCu;
            // 0x207ce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207CE4u;
    // 0x207ce4: 0x0  nop
    ctx->pc = 0x207ce4u;
    // NOP
    // 0x207ce8: 0x0  nop
    ctx->pc = 0x207ce8u;
    // NOP
    // 0x207cec: 0x0  nop
    ctx->pc = 0x207cecu;
    // NOP
    ctx->pc = 0x207cf0u;
}
