#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185FC0
// Address: 0x185fc0 - 0x186b00
void sub_00185FC0_0x185fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185FC0_0x185fc0");
#endif

    switch (ctx->pc) {
        case 0x1860f0u: goto label_1860f0;
        case 0x186114u: goto label_186114;
        case 0x186144u: goto label_186144;
        case 0x186154u: goto label_186154;
        case 0x18617cu: goto label_18617c;
        case 0x186188u: goto label_186188;
        case 0x1861b8u: goto label_1861b8;
        case 0x1861d4u: goto label_1861d4;
        case 0x1861f4u: goto label_1861f4;
        case 0x186200u: goto label_186200;
        case 0x186220u: goto label_186220;
        case 0x186248u: goto label_186248;
        case 0x186254u: goto label_186254;
        case 0x186294u: goto label_186294;
        case 0x1862e8u: goto label_1862e8;
        case 0x186408u: goto label_186408;
        case 0x186428u: goto label_186428;
        case 0x186434u: goto label_186434;
        case 0x186450u: goto label_186450;
        case 0x186470u: goto label_186470;
        case 0x18647cu: goto label_18647c;
        case 0x186494u: goto label_186494;
        case 0x1864bcu: goto label_1864bc;
        case 0x1864d0u: goto label_1864d0;
        case 0x1864f0u: goto label_1864f0;
        case 0x186504u: goto label_186504;
        case 0x186524u: goto label_186524;
        case 0x18654cu: goto label_18654c;
        case 0x186558u: goto label_186558;
        case 0x186570u: goto label_186570;
        case 0x186590u: goto label_186590;
        case 0x18659cu: goto label_18659c;
        case 0x1865a4u: goto label_1865a4;
        case 0x1865c4u: goto label_1865c4;
        case 0x1865d8u: goto label_1865d8;
        case 0x1865f8u: goto label_1865f8;
        case 0x186620u: goto label_186620;
        case 0x186634u: goto label_186634;
        case 0x186640u: goto label_186640;
        case 0x186660u: goto label_186660;
        case 0x186678u: goto label_186678;
        case 0x186684u: goto label_186684;
        case 0x18669cu: goto label_18669c;
        case 0x1866c8u: goto label_1866c8;
        case 0x1866f4u: goto label_1866f4;
        case 0x186758u: goto label_186758;
        case 0x186778u: goto label_186778;
        case 0x186784u: goto label_186784;
        case 0x1867a0u: goto label_1867a0;
        case 0x1867b8u: goto label_1867b8;
        case 0x1867c4u: goto label_1867c4;
        case 0x1867ccu: goto label_1867cc;
        case 0x1867ecu: goto label_1867ec;
        case 0x1867f8u: goto label_1867f8;
        case 0x186800u: goto label_186800;
        case 0x186810u: goto label_186810;
        case 0x186828u: goto label_186828;
        case 0x186834u: goto label_186834;
        case 0x18684cu: goto label_18684c;
        case 0x1868fcu: goto label_1868fc;
        case 0x18691cu: goto label_18691c;
        case 0x186928u: goto label_186928;
        case 0x186940u: goto label_186940;
        case 0x186958u: goto label_186958;
        case 0x186964u: goto label_186964;
        case 0x18696cu: goto label_18696c;
        case 0x18698cu: goto label_18698c;
        case 0x186998u: goto label_186998;
        case 0x1869a0u: goto label_1869a0;
        case 0x1869b0u: goto label_1869b0;
        case 0x1869c8u: goto label_1869c8;
        case 0x1869d4u: goto label_1869d4;
        case 0x1869ecu: goto label_1869ec;
        case 0x186a48u: goto label_186a48;
        case 0x186a68u: goto label_186a68;
        case 0x186a74u: goto label_186a74;
        case 0x186a90u: goto label_186a90;
        case 0x186aa8u: goto label_186aa8;
        case 0x186ab4u: goto label_186ab4;
        case 0x186abcu: goto label_186abc;
        case 0x186adcu: goto label_186adc;
        case 0x186ae8u: goto label_186ae8;
        case 0x186af0u: goto label_186af0;
        default: break;
    }

    ctx->pc = 0x185fc0u;

    // 0x185fc0: 0x908503ec  lbu         $a1, 0x3EC($a0)
    ctx->pc = 0x185fc0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1004)));
    // 0x185fc4: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x185fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x185fc8: 0x50a3003b  beql        $a1, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x185FC8u;
    {
        const bool branch_taken_0x185fc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x185fc8) {
            ctx->pc = 0x185FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185FC8u;
            // 0x185fcc: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1860B8u;
            goto label_1860b8;
        }
    }
    ctx->pc = 0x185FD0u;
    // 0x185fd0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x185fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x185fd4: 0x50a3002b  beql        $a1, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x185FD4u;
    {
        const bool branch_taken_0x185fd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x185fd4) {
            ctx->pc = 0x185FD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185FD4u;
            // 0x185fd8: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186084u;
            goto label_186084;
        }
    }
    ctx->pc = 0x185FDCu;
    // 0x185fdc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x185fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x185fe0: 0x50a3001b  beql        $a1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x185FE0u;
    {
        const bool branch_taken_0x185fe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x185fe0) {
            ctx->pc = 0x185FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185FE0u;
            // 0x185fe4: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186050u;
            goto label_186050;
        }
    }
    ctx->pc = 0x185FE8u;
    // 0x185fe8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x185fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x185fec: 0x50a3000c  beql        $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x185FECu;
    {
        const bool branch_taken_0x185fec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x185fec) {
            ctx->pc = 0x185FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185FECu;
            // 0x185ff0: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186020u;
            goto label_186020;
        }
    }
    ctx->pc = 0x185FF4u;
    // 0x185ff4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x185ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x185ff8: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x185FF8u;
    {
        const bool branch_taken_0x185ff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x185ff8) {
            ctx->pc = 0x18601Cu;
            goto label_18601c;
        }
    }
    ctx->pc = 0x186000u;
    // 0x186000: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x186000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x186004: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x186004u;
    {
        const bool branch_taken_0x186004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x186004) {
            ctx->pc = 0x18601Cu;
            goto label_18601c;
        }
    }
    ctx->pc = 0x18600Cu;
    // 0x18600c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18600Cu;
    {
        const bool branch_taken_0x18600c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x18600c) {
            ctx->pc = 0x18601Cu;
            goto label_18601c;
        }
    }
    ctx->pc = 0x186014u;
    // 0x186014: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x186014u;
    {
        const bool branch_taken_0x186014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186014) {
            ctx->pc = 0x1860E8u;
            goto label_1860e8;
        }
    }
    ctx->pc = 0x18601Cu;
label_18601c:
    // 0x18601c: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x18601cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_186020:
    // 0x186020: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x186020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x186024: 0x2463db7b  addiu       $v1, $v1, -0x2485
    ctx->pc = 0x186024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957947));
    // 0x186028: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x186028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x18602c: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x18602cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x186030: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x186030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x186034: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x186034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x186038: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x186038u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18603c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18603cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x186040: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x186040u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x186044: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x186044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x186048: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x186048u;
    {
        const bool branch_taken_0x186048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18604Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186048u;
            // 0x18604c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186048) {
            ctx->pc = 0x1860E8u;
            goto label_1860e8;
        }
    }
    ctx->pc = 0x186050u;
label_186050:
    // 0x186050: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x186050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x186054: 0x2463db7b  addiu       $v1, $v1, -0x2485
    ctx->pc = 0x186054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957947));
    // 0x186058: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x186058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18605c: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x18605cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x186060: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x186060u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x186064: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x186064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x186068: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x186068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18606c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18606cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x186070: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x186070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x186074: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x186074u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x186078: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x186078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18607c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x18607Cu;
    {
        const bool branch_taken_0x18607c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18607Cu;
            // 0x186080: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18607c) {
            ctx->pc = 0x1860E8u;
            goto label_1860e8;
        }
    }
    ctx->pc = 0x186084u;
label_186084:
    // 0x186084: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x186084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x186088: 0x2463db7b  addiu       $v1, $v1, -0x2485
    ctx->pc = 0x186088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957947));
    // 0x18608c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18608cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x186090: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x186090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x186094: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x186094u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x186098: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x186098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18609c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18609cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1860a0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1860a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1860a4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1860a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1860a8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1860a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1860ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1860acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1860b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1860B0u;
    {
        const bool branch_taken_0x1860b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860B0u;
            // 0x1860b4: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860b0) {
            ctx->pc = 0x1860E8u;
            goto label_1860e8;
        }
    }
    ctx->pc = 0x1860B8u;
label_1860b8:
    // 0x1860b8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1860b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1860bc: 0x2463db7b  addiu       $v1, $v1, -0x2485
    ctx->pc = 0x1860bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957947));
    // 0x1860c0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1860c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1860c4: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x1860c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x1860c8: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x1860c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x1860cc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1860ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1860d0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1860d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1860d4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1860d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1860d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1860d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1860dc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1860dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1860e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1860e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1860e4: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x1860e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_1860e8:
    // 0x1860e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1860E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1860F0u;
label_1860f0:
    // 0x1860f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1860f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1860f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1860f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1860f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1860f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1860fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1860fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186100: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x186100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x186104: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x186104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x186108: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x186108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x18610c: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x18610Cu;
    SET_GPR_U32(ctx, 31, 0x186114u);
    ctx->pc = 0x186110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18610Cu;
            // 0x186110: 0x28082  srl         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (runtime->hasFunction(0x189F20u)) {
        auto targetFn = runtime->lookupFunction(0x189F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186114u; }
        if (ctx->pc != 0x186114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F20_0x189f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186114u; }
        if (ctx->pc != 0x186114u) { return; }
    }
    ctx->pc = 0x186114u;
label_186114:
    // 0x186114: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x186114u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x186118: 0x8e230498  lw          $v1, 0x498($s1)
    ctx->pc = 0x186118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1176)));
    // 0x18611c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18611cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x186120: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x186120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x186124: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x186124u;
    {
        const bool branch_taken_0x186124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186124) {
            ctx->pc = 0x186128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186124u;
            // 0x186128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186180u;
            goto label_186180;
        }
    }
    ctx->pc = 0x18612Cu;
    // 0x18612c: 0x962200ec  lhu         $v0, 0xEC($s1)
    ctx->pc = 0x18612cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x186130: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x186130u;
    {
        const bool branch_taken_0x186130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186130) {
            ctx->pc = 0x18617Cu;
            goto label_18617c;
        }
    }
    ctx->pc = 0x186138u;
    // 0x186138: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x186138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x18613c: 0xc062d2c  jal         func_18B4B0
    ctx->pc = 0x18613Cu;
    SET_GPR_U32(ctx, 31, 0x186144u);
    ctx->pc = 0x186140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18613Cu;
            // 0x186140: 0xae2400e4  sw          $a0, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B4B0u;
    if (runtime->hasFunction(0x18B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x18B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186144u; }
        if (ctx->pc != 0x186144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B4B0_0x18b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186144u; }
        if (ctx->pc != 0x186144u) { return; }
    }
    ctx->pc = 0x186144u;
label_186144:
    // 0x186144: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x186144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x186148: 0xa62200ea  sh          $v0, 0xEA($s1)
    ctx->pc = 0x186148u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 234), (uint16_t)GPR_U32(ctx, 2));
    // 0x18614c: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x18614Cu;
    SET_GPR_U32(ctx, 31, 0x186154u);
    ctx->pc = 0x186150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18614Cu;
            // 0x186150: 0x962400ea  lhu         $a0, 0xEA($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA90u;
    if (runtime->hasFunction(0x18DA90u)) {
        auto targetFn = runtime->lookupFunction(0x18DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186154u; }
        if (ctx->pc != 0x186154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DA90_0x18da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186154u; }
        if (ctx->pc != 0x186154u) { return; }
    }
    ctx->pc = 0x186154u;
label_186154:
    // 0x186154: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x186154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x186158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18615c: 0x8e230498  lw          $v1, 0x498($s1)
    ctx->pc = 0x18615cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1176)));
    // 0x186160: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x186160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x186164: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x186164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x186168: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x186168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18616c: 0xae220498  sw          $v0, 0x498($s1)
    ctx->pc = 0x18616cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1176), GPR_U32(ctx, 2));
    // 0x186170: 0x962200e8  lhu         $v0, 0xE8($s1)
    ctx->pc = 0x186170u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x186174: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x186174u;
    SET_GPR_U32(ctx, 31, 0x18617Cu);
    ctx->pc = 0x186178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186174u;
            // 0x186178: 0xa62200f0  sh          $v0, 0xF0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18617Cu; }
        if (ctx->pc != 0x18617Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18617Cu; }
        if (ctx->pc != 0x18617Cu) { return; }
    }
    ctx->pc = 0x18617Cu;
label_18617c:
    // 0x18617c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18617cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186180:
    // 0x186180: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x186180u;
    SET_GPR_U32(ctx, 31, 0x186188u);
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186188u; }
        if (ctx->pc != 0x186188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186E70_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186188u; }
        if (ctx->pc != 0x186188u) { return; }
    }
    ctx->pc = 0x186188u;
label_186188:
    // 0x186188: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x186188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x18618c: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x18618cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186190: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x186190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x186194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186198: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x186198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18619c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18619cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1861a0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1861a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1861a4: 0x2442dd90  addiu       $v0, $v0, -0x2270
    ctx->pc = 0x1861a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958480));
    // 0x1861a8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1861a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1861ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1861acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1861b0: 0xc062be8  jal         func_18AFA0
    ctx->pc = 0x1861B0u;
    SET_GPR_U32(ctx, 31, 0x1861B8u);
    ctx->pc = 0x1861B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1861B0u;
            // 0x1861b4: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AFA0u;
    if (runtime->hasFunction(0x18AFA0u)) {
        auto targetFn = runtime->lookupFunction(0x18AFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861B8u; }
        if (ctx->pc != 0x1861B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AFA0_0x18afa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861B8u; }
        if (ctx->pc != 0x1861B8u) { return; }
    }
    ctx->pc = 0x1861B8u;
label_1861b8:
    // 0x1861b8: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x1861b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1861bc: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x1861bcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x1861c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1861c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1861c4: 0x5202000c  beql        $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1861C4u;
    {
        const bool branch_taken_0x1861c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1861c4) {
            ctx->pc = 0x1861C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1861C4u;
            // 0x1861c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1861F8u;
            goto label_1861f8;
        }
    }
    ctx->pc = 0x1861CCu;
    // 0x1861cc: 0xc062b78  jal         func_18ADE0
    ctx->pc = 0x1861CCu;
    SET_GPR_U32(ctx, 31, 0x1861D4u);
    ctx->pc = 0x1861D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1861CCu;
            // 0x1861d0: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ADE0u;
    if (runtime->hasFunction(0x18ADE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861D4u; }
        if (ctx->pc != 0x1861D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018ADE0_0x18ade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861D4u; }
        if (ctx->pc != 0x1861D4u) { return; }
    }
    ctx->pc = 0x1861D4u;
label_1861d4:
    // 0x1861d4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1861d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1861d8: 0x30422020  andi        $v0, $v0, 0x2020
    ctx->pc = 0x1861d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8224);
    // 0x1861dc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1861DCu;
    {
        const bool branch_taken_0x1861dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1861dc) {
            ctx->pc = 0x1861E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1861DCu;
            // 0x1861e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1861ECu;
            goto label_1861ec;
        }
    }
    ctx->pc = 0x1861E4u;
    // 0x1861e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1861E4u;
    {
        const bool branch_taken_0x1861e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861E4u;
            // 0x1861e8: 0xa63000f4  sh          $s0, 0xF4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861e4) {
            ctx->pc = 0x1861F4u;
            goto label_1861f4;
        }
    }
    ctx->pc = 0x1861ECu;
label_1861ec:
    // 0x1861ec: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x1861ECu;
    SET_GPR_U32(ctx, 31, 0x1861F4u);
    ctx->pc = 0x1861F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1861ECu;
            // 0x1861f0: 0xa63000f0  sh          $s0, 0xF0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861F4u; }
        if (ctx->pc != 0x1861F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861F4u; }
        if (ctx->pc != 0x1861F4u) { return; }
    }
    ctx->pc = 0x1861F4u;
label_1861f4:
    // 0x1861f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1861f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1861f8:
    // 0x1861f8: 0xc0617ec  jal         func_185FB0
    ctx->pc = 0x1861F8u;
    SET_GPR_U32(ctx, 31, 0x186200u);
    ctx->pc = 0x185FB0u;
    if (runtime->hasFunction(0x185FB0u)) {
        auto targetFn = runtime->lookupFunction(0x185FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186200u; }
        if (ctx->pc != 0x186200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185FB0_0x185fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186200u; }
        if (ctx->pc != 0x186200u) { return; }
    }
    ctx->pc = 0x186200u;
label_186200:
    // 0x186200: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186204: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18620c: 0x3e00008  jr          $ra
    ctx->pc = 0x18620Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18620Cu;
            // 0x186210: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186214u;
    // 0x186214: 0x0  nop
    ctx->pc = 0x186214u;
    // NOP
    // 0x186218: 0x0  nop
    ctx->pc = 0x186218u;
    // NOP
    // 0x18621c: 0x0  nop
    ctx->pc = 0x18621cu;
    // NOP
label_186220:
    // 0x186220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x186220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x186224: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x186224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x186228: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x186228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18622c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18622cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x186230: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186234: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186238: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x186238u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x18623c: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x18623cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x186240: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x186240u;
    SET_GPR_U32(ctx, 31, 0x186248u);
    ctx->pc = 0x186244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186240u;
            // 0x186244: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (runtime->hasFunction(0x189F20u)) {
        auto targetFn = runtime->lookupFunction(0x189F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186248u; }
        if (ctx->pc != 0x186248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F20_0x189f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186248u; }
        if (ctx->pc != 0x186248u) { return; }
    }
    ctx->pc = 0x186248u;
label_186248:
    // 0x186248: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x186248u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18624c: 0xc0627b0  jal         func_189EC0
    ctx->pc = 0x18624Cu;
    SET_GPR_U32(ctx, 31, 0x186254u);
    ctx->pc = 0x186250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18624Cu;
            // 0x186250: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189EC0u;
    if (runtime->hasFunction(0x189EC0u)) {
        auto targetFn = runtime->lookupFunction(0x189EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186254u; }
        if (ctx->pc != 0x186254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189EC0_0x189ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186254u; }
        if (ctx->pc != 0x186254u) { return; }
    }
    ctx->pc = 0x186254u;
label_186254:
    // 0x186254: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x186254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x186258: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x186258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18625c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18625cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x186260: 0x2442dbb4  addiu       $v0, $v0, -0x244C
    ctx->pc = 0x186260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958004));
    // 0x186264: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x186264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x186268: 0x32882  srl         $a1, $v1, 2
    ctx->pc = 0x186268u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x18626c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x18626cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x186270: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x186270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x186274: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x186274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x186278: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x186278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18627c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18627cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x186280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x186280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186284: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x186284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186288: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x186288u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18628c: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x18628Cu;
    SET_GPR_U32(ctx, 31, 0x186294u);
    ctx->pc = 0x186290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18628Cu;
            // 0x186290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186294u; }
        if (ctx->pc != 0x186294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186E70_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186294u; }
        if (ctx->pc != 0x186294u) { return; }
    }
    ctx->pc = 0x186294u;
label_186294:
    // 0x186294: 0x964300ec  lhu         $v1, 0xEC($s2)
    ctx->pc = 0x186294u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x186298: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x186298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x18629c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18629Cu;
    {
        const bool branch_taken_0x18629c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18629c) {
            ctx->pc = 0x1862A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18629Cu;
            // 0x1862a0: 0x2402009f  addiu       $v0, $zero, 0x9F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1862B0u;
            goto label_1862b0;
        }
    }
    ctx->pc = 0x1862A4u;
    // 0x1862a4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1862a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1862a8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1862A8u;
    {
        const bool branch_taken_0x1862a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1862ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1862A8u;
            // 0x1862ac: 0xa24200f6  sb          $v0, 0xF6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862a8) {
            ctx->pc = 0x1863F8u;
            goto label_1863f8;
        }
    }
    ctx->pc = 0x1862B0u;
label_1862b0:
    // 0x1862b0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1862B0u;
    {
        const bool branch_taken_0x1862b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1862b0) {
            ctx->pc = 0x1862CCu;
            goto label_1862cc;
        }
    }
    ctx->pc = 0x1862B8u;
    // 0x1862b8: 0x8e440498  lw          $a0, 0x498($s2)
    ctx->pc = 0x1862b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
    // 0x1862bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1862bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1862c0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1862c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1862c4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1862C4u;
    {
        const bool branch_taken_0x1862c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1862c4) {
            ctx->pc = 0x186330u;
            goto label_186330;
        }
    }
    ctx->pc = 0x1862CCu;
label_1862cc:
    // 0x1862cc: 0x56120010  bnel        $s0, $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1862CCu;
    {
        const bool branch_taken_0x1862cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x1862cc) {
            ctx->pc = 0x1862D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1862CCu;
            // 0x1862d0: 0x8e440498  lw          $a0, 0x498($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186310u;
            goto label_186310;
        }
    }
    ctx->pc = 0x1862D4u;
    // 0x1862d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1862d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1862d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1862d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862dc: 0xa24200f6  sb          $v0, 0xF6($s2)
    ctx->pc = 0x1862dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 246), (uint8_t)GPR_U32(ctx, 2));
    // 0x1862e0: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x1862E0u;
    SET_GPR_U32(ctx, 31, 0x1862E8u);
    ctx->pc = 0x1862E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1862E0u;
            // 0x1862e4: 0xa64000f0  sh          $zero, 0xF0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 240), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862E8u; }
        if (ctx->pc != 0x1862E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862E8u; }
        if (ctx->pc != 0x1862E8u) { return; }
    }
    ctx->pc = 0x1862E8u;
label_1862e8:
    // 0x1862e8: 0x8e430498  lw          $v1, 0x498($s2)
    ctx->pc = 0x1862e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
    // 0x1862ec: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x1862ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x1862f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1862f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1862f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1862f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1862f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1862fc: 0xae420498  sw          $v0, 0x498($s2)
    ctx->pc = 0x1862fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
    // 0x186300: 0x92620016  lbu         $v0, 0x16($s3)
    ctx->pc = 0x186300u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x186304: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x186304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x186308: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x186308u;
    {
        const bool branch_taken_0x186308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18630Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186308u;
            // 0x18630c: 0xa2620016  sb          $v0, 0x16($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 22), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186308) {
            ctx->pc = 0x1863F8u;
            goto label_1863f8;
        }
    }
    ctx->pc = 0x186310u;
label_186310:
    // 0x186310: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x186310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x186314: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x186314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x186318: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x186318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18631c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x186320: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x186320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x186324: 0xae430498  sw          $v1, 0x498($s2)
    ctx->pc = 0x186324u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 3));
    // 0x186328: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x186328u;
    {
        const bool branch_taken_0x186328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18632Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186328u;
            // 0x18632c: 0xa24200f6  sb          $v0, 0xF6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186328) {
            ctx->pc = 0x1863F8u;
            goto label_1863f8;
        }
    }
    ctx->pc = 0x186330u;
label_186330:
    // 0x186330: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x186330u;
    {
        const bool branch_taken_0x186330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186330) {
            ctx->pc = 0x186334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186330u;
            // 0x186334: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186374u;
            goto label_186374;
        }
    }
    ctx->pc = 0x186338u;
    // 0x186338: 0x56120007  bnel        $s0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x186338u;
    {
        const bool branch_taken_0x186338 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x186338) {
            ctx->pc = 0x18633Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186338u;
            // 0x18633c: 0x3c03efff  lui         $v1, 0xEFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61439 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186358u;
            goto label_186358;
        }
    }
    ctx->pc = 0x186340u;
    // 0x186340: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x186340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x186344: 0xa24200f6  sb          $v0, 0xF6($s2)
    ctx->pc = 0x186344u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 246), (uint8_t)GPR_U32(ctx, 2));
    // 0x186348: 0x92620016  lbu         $v0, 0x16($s3)
    ctx->pc = 0x186348u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x18634c: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x18634cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x186350: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x186350u;
    {
        const bool branch_taken_0x186350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186350u;
            // 0x186354: 0xa2620016  sb          $v0, 0x16($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 22), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186350) {
            ctx->pc = 0x1863F8u;
            goto label_1863f8;
        }
    }
    ctx->pc = 0x186358u;
label_186358:
    // 0x186358: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x186358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18635c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x18635cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x186360: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x186360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186364: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x186364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x186368: 0xae430498  sw          $v1, 0x498($s2)
    ctx->pc = 0x186368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 3));
    // 0x18636c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x18636Cu;
    {
        const bool branch_taken_0x18636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18636Cu;
            // 0x186370: 0xa24200f6  sb          $v0, 0xF6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18636c) {
            ctx->pc = 0x1863F8u;
            goto label_1863f8;
        }
    }
    ctx->pc = 0x186374u;
label_186374:
    // 0x186374: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x186374u;
    {
        const bool branch_taken_0x186374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x186374) {
            ctx->pc = 0x186378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186374u;
            // 0x186378: 0x8e430494  lw          $v1, 0x494($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1863B8u;
            goto label_1863b8;
        }
    }
    ctx->pc = 0x18637Cu;
    // 0x18637c: 0x56120007  bnel        $s0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x18637Cu;
    {
        const bool branch_taken_0x18637c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x18637c) {
            ctx->pc = 0x186380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18637Cu;
            // 0x186380: 0x3c03efff  lui         $v1, 0xEFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61439 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18639Cu;
            goto label_18639c;
        }
    }
    ctx->pc = 0x186384u;
    // 0x186384: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x186384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x186388: 0xa24200f6  sb          $v0, 0xF6($s2)
    ctx->pc = 0x186388u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 246), (uint8_t)GPR_U32(ctx, 2));
    // 0x18638c: 0x92620016  lbu         $v0, 0x16($s3)
    ctx->pc = 0x18638cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x186390: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x186390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x186394: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x186394u;
    {
        const bool branch_taken_0x186394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186394u;
            // 0x186398: 0xa2620016  sb          $v0, 0x16($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 22), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186394) {
            ctx->pc = 0x1863F8u;
            goto label_1863f8;
        }
    }
    ctx->pc = 0x18639Cu;
label_18639c:
    // 0x18639c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1863a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1863a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1863a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1863a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1863a8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1863a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1863ac: 0xae430498  sw          $v1, 0x498($s2)
    ctx->pc = 0x1863acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 3));
    // 0x1863b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1863B0u;
    {
        const bool branch_taken_0x1863b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1863B0u;
            // 0x1863b4: 0xa24200f6  sb          $v0, 0xF6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863b0) {
            ctx->pc = 0x1863F8u;
            goto label_1863f8;
        }
    }
    ctx->pc = 0x1863B8u;
label_1863b8:
    // 0x1863b8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1863b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1863bc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1863BCu;
    {
        const bool branch_taken_0x1863bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1863bc) {
            ctx->pc = 0x1863C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1863BCu;
            // 0x1863c0: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1863DCu;
            goto label_1863dc;
        }
    }
    ctx->pc = 0x1863C4u;
    // 0x1863c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1863c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1863c8: 0xa24200f6  sb          $v0, 0xF6($s2)
    ctx->pc = 0x1863c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 246), (uint8_t)GPR_U32(ctx, 2));
    // 0x1863cc: 0x92620016  lbu         $v0, 0x16($s3)
    ctx->pc = 0x1863ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x1863d0: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x1863d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x1863d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1863D4u;
    {
        const bool branch_taken_0x1863d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1863D4u;
            // 0x1863d8: 0xa2620016  sb          $v0, 0x16($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 22), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863d4) {
            ctx->pc = 0x1863F8u;
            goto label_1863f8;
        }
    }
    ctx->pc = 0x1863DCu;
label_1863dc:
    // 0x1863dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1863DCu;
    {
        const bool branch_taken_0x1863dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1863dc) {
            ctx->pc = 0x1863F8u;
            goto label_1863f8;
        }
    }
    ctx->pc = 0x1863E4u;
    // 0x1863e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1863e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1863e8: 0xa24200f6  sb          $v0, 0xF6($s2)
    ctx->pc = 0x1863e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 246), (uint8_t)GPR_U32(ctx, 2));
    // 0x1863ec: 0x92620016  lbu         $v0, 0x16($s3)
    ctx->pc = 0x1863ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x1863f0: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x1863f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x1863f4: 0xa2620016  sb          $v0, 0x16($s3)
    ctx->pc = 0x1863f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 22), (uint8_t)GPR_U32(ctx, 2));
label_1863f8:
    // 0x1863f8: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1863F8u;
    {
        const bool branch_taken_0x1863f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1863f8) {
            ctx->pc = 0x1863FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1863F8u;
            // 0x1863fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18642Cu;
            goto label_18642c;
        }
    }
    ctx->pc = 0x186400u;
    // 0x186400: 0xc062c1c  jal         func_18B070
    ctx->pc = 0x186400u;
    SET_GPR_U32(ctx, 31, 0x186408u);
    ctx->pc = 0x186404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186400u;
            // 0x186404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B070u;
    if (runtime->hasFunction(0x18B070u)) {
        auto targetFn = runtime->lookupFunction(0x18B070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186408u; }
        if (ctx->pc != 0x186408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B070_0x18b070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186408u; }
        if (ctx->pc != 0x186408u) { return; }
    }
    ctx->pc = 0x186408u;
label_186408:
    // 0x186408: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x186408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18640c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18640cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x186410: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x186410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x186414: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x186414u;
    {
        const bool branch_taken_0x186414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x186414) {
            ctx->pc = 0x186428u;
            goto label_186428;
        }
    }
    ctx->pc = 0x18641Cu;
    // 0x18641c: 0xa64300f0  sh          $v1, 0xF0($s2)
    ctx->pc = 0x18641cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x186420: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x186420u;
    SET_GPR_U32(ctx, 31, 0x186428u);
    ctx->pc = 0x186424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186420u;
            // 0x186424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186428u; }
        if (ctx->pc != 0x186428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186428u; }
        if (ctx->pc != 0x186428u) { return; }
    }
    ctx->pc = 0x186428u;
label_186428:
    // 0x186428: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x186428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18642c:
    // 0x18642c: 0xc0617ec  jal         func_185FB0
    ctx->pc = 0x18642Cu;
    SET_GPR_U32(ctx, 31, 0x186434u);
    ctx->pc = 0x185FB0u;
    if (runtime->hasFunction(0x185FB0u)) {
        auto targetFn = runtime->lookupFunction(0x185FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186434u; }
        if (ctx->pc != 0x186434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185FB0_0x185fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186434u; }
        if (ctx->pc != 0x186434u) { return; }
    }
    ctx->pc = 0x186434u;
label_186434:
    // 0x186434: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x186434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186438: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x186438u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18643c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18643cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186440: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186448: 0x3e00008  jr          $ra
    ctx->pc = 0x186448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18644Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186448u;
            // 0x18644c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186450u;
label_186450:
    // 0x186450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x186454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x186454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x186458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18645c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18645cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186460: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x186460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x186464: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x186464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x186468: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x186468u;
    SET_GPR_U32(ctx, 31, 0x186470u);
    ctx->pc = 0x18646Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186468u;
            // 0x18646c: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (runtime->hasFunction(0x189F20u)) {
        auto targetFn = runtime->lookupFunction(0x189F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186470u; }
        if (ctx->pc != 0x186470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F20_0x189f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186470u; }
        if (ctx->pc != 0x186470u) { return; }
    }
    ctx->pc = 0x186470u;
label_186470:
    // 0x186470: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x186470u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x186474: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x186474u;
    SET_GPR_U32(ctx, 31, 0x18647Cu);
    ctx->pc = 0x186478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186474u;
            // 0x186478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18647Cu; }
        if (ctx->pc != 0x18647Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186E70_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18647Cu; }
        if (ctx->pc != 0x18647Cu) { return; }
    }
    ctx->pc = 0x18647Cu;
label_18647c:
    // 0x18647c: 0x962300ec  lhu         $v1, 0xEC($s1)
    ctx->pc = 0x18647cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x186480: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x186480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x186484: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x186484u;
    {
        const bool branch_taken_0x186484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x186484) {
            ctx->pc = 0x1864C0u;
            goto label_1864c0;
        }
    }
    ctx->pc = 0x18648Cu;
    // 0x18648c: 0xc058068  jal         func_1601A0
    ctx->pc = 0x18648Cu;
    SET_GPR_U32(ctx, 31, 0x186494u);
    ctx->pc = 0x186490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18648Cu;
            // 0x186490: 0x26240268  addiu       $a0, $s1, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601A0u;
    if (runtime->hasFunction(0x1601A0u)) {
        auto targetFn = runtime->lookupFunction(0x1601A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186494u; }
        if (ctx->pc != 0x186494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601A0_0x1601a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186494u; }
        if (ctx->pc != 0x186494u) { return; }
    }
    ctx->pc = 0x186494u;
label_186494:
    // 0x186494: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x186494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x186498: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x186498u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18649c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18649Cu;
    {
        const bool branch_taken_0x18649c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18649c) {
            ctx->pc = 0x1864C0u;
            goto label_1864c0;
        }
    }
    ctx->pc = 0x1864A4u;
    // 0x1864a4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1864a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1864a8: 0x24020095  addiu       $v0, $zero, 0x95
    ctx->pc = 0x1864a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x1864ac: 0xa22300f6  sb          $v1, 0xF6($s1)
    ctx->pc = 0x1864acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 246), (uint8_t)GPR_U32(ctx, 3));
    // 0x1864b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1864b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1864b4: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x1864B4u;
    SET_GPR_U32(ctx, 31, 0x1864BCu);
    ctx->pc = 0x1864B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1864B4u;
            // 0x1864b8: 0xa62200f0  sh          $v0, 0xF0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864BCu; }
        if (ctx->pc != 0x1864BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864BCu; }
        if (ctx->pc != 0x1864BCu) { return; }
    }
    ctx->pc = 0x1864BCu;
label_1864bc:
    // 0x1864bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1864bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1864c0:
    // 0x1864c0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1864C0u;
    {
        const bool branch_taken_0x1864c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1864c0) {
            ctx->pc = 0x1864F4u;
            goto label_1864f4;
        }
    }
    ctx->pc = 0x1864C8u;
    // 0x1864c8: 0xc0606b0  jal         func_181AC0
    ctx->pc = 0x1864C8u;
    SET_GPR_U32(ctx, 31, 0x1864D0u);
    ctx->pc = 0x1864CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1864C8u;
            // 0x1864cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181AC0u;
    if (runtime->hasFunction(0x181AC0u)) {
        auto targetFn = runtime->lookupFunction(0x181AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864D0u; }
        if (ctx->pc != 0x1864D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181AC0_0x181ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864D0u; }
        if (ctx->pc != 0x1864D0u) { return; }
    }
    ctx->pc = 0x1864D0u;
label_1864d0:
    // 0x1864d0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1864d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1864d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1864d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1864d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1864d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1864dc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1864DCu;
    {
        const bool branch_taken_0x1864dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1864dc) {
            ctx->pc = 0x1864F4u;
            goto label_1864f4;
        }
    }
    ctx->pc = 0x1864E4u;
    // 0x1864e4: 0xa62300f0  sh          $v1, 0xF0($s1)
    ctx->pc = 0x1864e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x1864e8: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x1864E8u;
    SET_GPR_U32(ctx, 31, 0x1864F0u);
    ctx->pc = 0x1864ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1864E8u;
            // 0x1864ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864F0u; }
        if (ctx->pc != 0x1864F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864F0u; }
        if (ctx->pc != 0x1864F0u) { return; }
    }
    ctx->pc = 0x1864F0u;
label_1864f0:
    // 0x1864f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1864f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1864f4:
    // 0x1864f4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1864F4u;
    {
        const bool branch_taken_0x1864f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1864f4) {
            ctx->pc = 0x186528u;
            goto label_186528;
        }
    }
    ctx->pc = 0x1864FCu;
    // 0x1864fc: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x1864FCu;
    SET_GPR_U32(ctx, 31, 0x186504u);
    ctx->pc = 0x186500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1864FCu;
            // 0x186500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (runtime->hasFunction(0x149DF0u)) {
        auto targetFn = runtime->lookupFunction(0x149DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186504u; }
        if (ctx->pc != 0x186504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149DF0_0x149df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186504u; }
        if (ctx->pc != 0x186504u) { return; }
    }
    ctx->pc = 0x186504u;
label_186504:
    // 0x186504: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x186504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x186508: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x186508u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18650c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18650cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x186510: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186510u;
    {
        const bool branch_taken_0x186510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x186510) {
            ctx->pc = 0x186528u;
            goto label_186528;
        }
    }
    ctx->pc = 0x186518u;
    // 0x186518: 0xa62300f0  sh          $v1, 0xF0($s1)
    ctx->pc = 0x186518u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x18651c: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x18651Cu;
    SET_GPR_U32(ctx, 31, 0x186524u);
    ctx->pc = 0x186520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18651Cu;
            // 0x186520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186524u; }
        if (ctx->pc != 0x186524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186524u; }
        if (ctx->pc != 0x186524u) { return; }
    }
    ctx->pc = 0x186524u;
label_186524:
    // 0x186524: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x186524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186528:
    // 0x186528: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x186528u;
    {
        const bool branch_taken_0x186528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x186528) {
            ctx->pc = 0x18652Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186528u;
            // 0x18652c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186550u;
            goto label_186550;
        }
    }
    ctx->pc = 0x186530u;
    // 0x186530: 0x962300f2  lhu         $v1, 0xF2($s1)
    ctx->pc = 0x186530u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 242)));
    // 0x186534: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x186534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x186538: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x186538u;
    {
        const bool branch_taken_0x186538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x186538) {
            ctx->pc = 0x18654Cu;
            goto label_18654c;
        }
    }
    ctx->pc = 0x186540u;
    // 0x186540: 0xa62300f0  sh          $v1, 0xF0($s1)
    ctx->pc = 0x186540u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x186544: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x186544u;
    SET_GPR_U32(ctx, 31, 0x18654Cu);
    ctx->pc = 0x186548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186544u;
            // 0x186548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18654Cu; }
        if (ctx->pc != 0x18654Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18654Cu; }
        if (ctx->pc != 0x18654Cu) { return; }
    }
    ctx->pc = 0x18654Cu;
label_18654c:
    // 0x18654c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18654cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186550:
    // 0x186550: 0xc0617ec  jal         func_185FB0
    ctx->pc = 0x186550u;
    SET_GPR_U32(ctx, 31, 0x186558u);
    ctx->pc = 0x185FB0u;
    if (runtime->hasFunction(0x185FB0u)) {
        auto targetFn = runtime->lookupFunction(0x185FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186558u; }
        if (ctx->pc != 0x186558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185FB0_0x185fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186558u; }
        if (ctx->pc != 0x186558u) { return; }
    }
    ctx->pc = 0x186558u;
label_186558:
    // 0x186558: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18655c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18655cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186560: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186564: 0x3e00008  jr          $ra
    ctx->pc = 0x186564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186564u;
            // 0x186568: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18656Cu;
    // 0x18656c: 0x0  nop
    ctx->pc = 0x18656cu;
    // NOP
label_186570:
    // 0x186570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x186574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x186574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x186578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18657c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18657cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186580: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x186580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x186584: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x186584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x186588: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x186588u;
    SET_GPR_U32(ctx, 31, 0x186590u);
    ctx->pc = 0x18658Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186588u;
            // 0x18658c: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (runtime->hasFunction(0x189F20u)) {
        auto targetFn = runtime->lookupFunction(0x189F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186590u; }
        if (ctx->pc != 0x186590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F20_0x189f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186590u; }
        if (ctx->pc != 0x186590u) { return; }
    }
    ctx->pc = 0x186590u;
label_186590:
    // 0x186590: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x186590u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x186594: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x186594u;
    SET_GPR_U32(ctx, 31, 0x18659Cu);
    ctx->pc = 0x186598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186594u;
            // 0x186598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18659Cu; }
        if (ctx->pc != 0x18659Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186E70_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18659Cu; }
        if (ctx->pc != 0x18659Cu) { return; }
    }
    ctx->pc = 0x18659Cu;
label_18659c:
    // 0x18659c: 0xc0606b0  jal         func_181AC0
    ctx->pc = 0x18659Cu;
    SET_GPR_U32(ctx, 31, 0x1865A4u);
    ctx->pc = 0x1865A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18659Cu;
            // 0x1865a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181AC0u;
    if (runtime->hasFunction(0x181AC0u)) {
        auto targetFn = runtime->lookupFunction(0x181AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865A4u; }
        if (ctx->pc != 0x1865A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181AC0_0x181ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865A4u; }
        if (ctx->pc != 0x1865A4u) { return; }
    }
    ctx->pc = 0x1865A4u;
label_1865a4:
    // 0x1865a4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1865a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1865a8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1865a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1865ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1865acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1865b0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1865B0u;
    {
        const bool branch_taken_0x1865b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1865b0) {
            ctx->pc = 0x1865C8u;
            goto label_1865c8;
        }
    }
    ctx->pc = 0x1865B8u;
    // 0x1865b8: 0xa62300f0  sh          $v1, 0xF0($s1)
    ctx->pc = 0x1865b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x1865bc: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x1865BCu;
    SET_GPR_U32(ctx, 31, 0x1865C4u);
    ctx->pc = 0x1865C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1865BCu;
            // 0x1865c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865C4u; }
        if (ctx->pc != 0x1865C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865C4u; }
        if (ctx->pc != 0x1865C4u) { return; }
    }
    ctx->pc = 0x1865C4u;
label_1865c4:
    // 0x1865c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1865c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1865c8:
    // 0x1865c8: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1865C8u;
    {
        const bool branch_taken_0x1865c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1865c8) {
            ctx->pc = 0x1865FCu;
            goto label_1865fc;
        }
    }
    ctx->pc = 0x1865D0u;
    // 0x1865d0: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x1865D0u;
    SET_GPR_U32(ctx, 31, 0x1865D8u);
    ctx->pc = 0x1865D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1865D0u;
            // 0x1865d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (runtime->hasFunction(0x149DF0u)) {
        auto targetFn = runtime->lookupFunction(0x149DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865D8u; }
        if (ctx->pc != 0x1865D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149DF0_0x149df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865D8u; }
        if (ctx->pc != 0x1865D8u) { return; }
    }
    ctx->pc = 0x1865D8u;
label_1865d8:
    // 0x1865d8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1865d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1865dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1865dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1865e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1865e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1865e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1865E4u;
    {
        const bool branch_taken_0x1865e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1865e4) {
            ctx->pc = 0x1865FCu;
            goto label_1865fc;
        }
    }
    ctx->pc = 0x1865ECu;
    // 0x1865ec: 0xa62300f0  sh          $v1, 0xF0($s1)
    ctx->pc = 0x1865ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x1865f0: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x1865F0u;
    SET_GPR_U32(ctx, 31, 0x1865F8u);
    ctx->pc = 0x1865F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1865F0u;
            // 0x1865f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865F8u; }
        if (ctx->pc != 0x1865F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865F8u; }
        if (ctx->pc != 0x1865F8u) { return; }
    }
    ctx->pc = 0x1865F8u;
label_1865f8:
    // 0x1865f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1865f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1865fc:
    // 0x1865fc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1865FCu;
    {
        const bool branch_taken_0x1865fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1865fc) {
            ctx->pc = 0x186624u;
            goto label_186624;
        }
    }
    ctx->pc = 0x186604u;
    // 0x186604: 0x962300f2  lhu         $v1, 0xF2($s1)
    ctx->pc = 0x186604u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 242)));
    // 0x186608: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x186608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18660c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18660Cu;
    {
        const bool branch_taken_0x18660c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18660c) {
            ctx->pc = 0x186624u;
            goto label_186624;
        }
    }
    ctx->pc = 0x186614u;
    // 0x186614: 0xa62300f0  sh          $v1, 0xF0($s1)
    ctx->pc = 0x186614u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x186618: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x186618u;
    SET_GPR_U32(ctx, 31, 0x186620u);
    ctx->pc = 0x18661Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186618u;
            // 0x18661c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186620u; }
        if (ctx->pc != 0x186620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186620u; }
        if (ctx->pc != 0x186620u) { return; }
    }
    ctx->pc = 0x186620u;
label_186620:
    // 0x186620: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x186620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186624:
    // 0x186624: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x186624u;
    {
        const bool branch_taken_0x186624 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x186624) {
            ctx->pc = 0x186628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186624u;
            // 0x186628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186638u;
            goto label_186638;
        }
    }
    ctx->pc = 0x18662Cu;
    // 0x18662c: 0xc061ac0  jal         func_186B00
    ctx->pc = 0x18662Cu;
    SET_GPR_U32(ctx, 31, 0x186634u);
    ctx->pc = 0x186630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18662Cu;
            // 0x186630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186B00u;
    if (runtime->hasFunction(0x186B00u)) {
        auto targetFn = runtime->lookupFunction(0x186B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186634u; }
        if (ctx->pc != 0x186634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186B00_0x186b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186634u; }
        if (ctx->pc != 0x186634u) { return; }
    }
    ctx->pc = 0x186634u;
label_186634:
    // 0x186634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186638:
    // 0x186638: 0xc0617ec  jal         func_185FB0
    ctx->pc = 0x186638u;
    SET_GPR_U32(ctx, 31, 0x186640u);
    ctx->pc = 0x185FB0u;
    if (runtime->hasFunction(0x185FB0u)) {
        auto targetFn = runtime->lookupFunction(0x185FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186640u; }
        if (ctx->pc != 0x186640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185FB0_0x185fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186640u; }
        if (ctx->pc != 0x186640u) { return; }
    }
    ctx->pc = 0x186640u;
label_186640:
    // 0x186640: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186644: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186648: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18664c: 0x3e00008  jr          $ra
    ctx->pc = 0x18664Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18664Cu;
            // 0x186650: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186654u;
    // 0x186654: 0x0  nop
    ctx->pc = 0x186654u;
    // NOP
    // 0x186658: 0x0  nop
    ctx->pc = 0x186658u;
    // NOP
    // 0x18665c: 0x0  nop
    ctx->pc = 0x18665cu;
    // NOP
label_186660:
    // 0x186660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18666c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x18666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x186670: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x186670u;
    SET_GPR_U32(ctx, 31, 0x186678u);
    ctx->pc = 0x186674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186670u;
            // 0x186674: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (runtime->hasFunction(0x189F20u)) {
        auto targetFn = runtime->lookupFunction(0x189F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186678u; }
        if (ctx->pc != 0x186678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F20_0x189f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186678u; }
        if (ctx->pc != 0x186678u) { return; }
    }
    ctx->pc = 0x186678u;
label_186678:
    // 0x186678: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x186678u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18667c: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x18667Cu;
    SET_GPR_U32(ctx, 31, 0x186684u);
    ctx->pc = 0x186680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18667Cu;
            // 0x186680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186684u; }
        if (ctx->pc != 0x186684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186E70_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186684u; }
        if (ctx->pc != 0x186684u) { return; }
    }
    ctx->pc = 0x186684u;
label_186684:
    // 0x186684: 0x960300ec  lhu         $v1, 0xEC($s0)
    ctx->pc = 0x186684u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x186688: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x186688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x18668c: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18668Cu;
    {
        const bool branch_taken_0x18668c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18668c) {
            ctx->pc = 0x186690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18668Cu;
            // 0x186690: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1866B8u;
            goto label_1866b8;
        }
    }
    ctx->pc = 0x186694u;
    // 0x186694: 0xc058068  jal         func_1601A0
    ctx->pc = 0x186694u;
    SET_GPR_U32(ctx, 31, 0x18669Cu);
    ctx->pc = 0x186698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186694u;
            // 0x186698: 0x26040268  addiu       $a0, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601A0u;
    if (runtime->hasFunction(0x1601A0u)) {
        auto targetFn = runtime->lookupFunction(0x1601A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18669Cu; }
        if (ctx->pc != 0x18669Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601A0_0x1601a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18669Cu; }
        if (ctx->pc != 0x18669Cu) { return; }
    }
    ctx->pc = 0x18669Cu;
label_18669c:
    // 0x18669c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18669cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1866a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1866a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1866a4: 0x5840002a  blezl       $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1866A4u;
    {
        const bool branch_taken_0x1866a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1866a4) {
            ctx->pc = 0x1866A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1866A4u;
            // 0x1866a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186750u;
            goto label_186750;
        }
    }
    ctx->pc = 0x1866ACu;
    // 0x1866ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1866acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1866b0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1866B0u;
    {
        const bool branch_taken_0x1866b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1866B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1866B0u;
            // 0x1866b4: 0xa20200f6  sb          $v0, 0xF6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866b0) {
            ctx->pc = 0x18674Cu;
            goto label_18674c;
        }
    }
    ctx->pc = 0x1866B8u;
label_1866b8:
    // 0x1866b8: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1866B8u;
    {
        const bool branch_taken_0x1866b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1866b8) {
            ctx->pc = 0x1866BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1866B8u;
            // 0x1866bc: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1866E4u;
            goto label_1866e4;
        }
    }
    ctx->pc = 0x1866C0u;
    // 0x1866c0: 0xc058068  jal         func_1601A0
    ctx->pc = 0x1866C0u;
    SET_GPR_U32(ctx, 31, 0x1866C8u);
    ctx->pc = 0x1866C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1866C0u;
            // 0x1866c4: 0x26040268  addiu       $a0, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601A0u;
    if (runtime->hasFunction(0x1601A0u)) {
        auto targetFn = runtime->lookupFunction(0x1601A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866C8u; }
        if (ctx->pc != 0x1866C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601A0_0x1601a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866C8u; }
        if (ctx->pc != 0x1866C8u) { return; }
    }
    ctx->pc = 0x1866C8u;
label_1866c8:
    // 0x1866c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1866c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1866cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1866ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1866d0: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1866D0u;
    {
        const bool branch_taken_0x1866d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1866d0) {
            ctx->pc = 0x18674Cu;
            goto label_18674c;
        }
    }
    ctx->pc = 0x1866D8u;
    // 0x1866d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1866d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1866dc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1866DCu;
    {
        const bool branch_taken_0x1866dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1866E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1866DCu;
            // 0x1866e0: 0xa20200f6  sb          $v0, 0xF6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866dc) {
            ctx->pc = 0x18674Cu;
            goto label_18674c;
        }
    }
    ctx->pc = 0x1866E4u;
label_1866e4:
    // 0x1866e4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1866E4u;
    {
        const bool branch_taken_0x1866e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1866e4) {
            ctx->pc = 0x186710u;
            goto label_186710;
        }
    }
    ctx->pc = 0x1866ECu;
    // 0x1866ec: 0xc058068  jal         func_1601A0
    ctx->pc = 0x1866ECu;
    SET_GPR_U32(ctx, 31, 0x1866F4u);
    ctx->pc = 0x1866F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1866ECu;
            // 0x1866f0: 0x26040268  addiu       $a0, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601A0u;
    if (runtime->hasFunction(0x1601A0u)) {
        auto targetFn = runtime->lookupFunction(0x1601A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866F4u; }
        if (ctx->pc != 0x1866F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601A0_0x1601a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866F4u; }
        if (ctx->pc != 0x1866F4u) { return; }
    }
    ctx->pc = 0x1866F4u;
label_1866f4:
    // 0x1866f4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1866f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1866f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1866f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1866fc: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1866FCu;
    {
        const bool branch_taken_0x1866fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1866fc) {
            ctx->pc = 0x18674Cu;
            goto label_18674c;
        }
    }
    ctx->pc = 0x186704u;
    // 0x186704: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x186704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x186708: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x186708u;
    {
        const bool branch_taken_0x186708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18670Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186708u;
            // 0x18670c: 0xa20200f6  sb          $v0, 0xF6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186708) {
            ctx->pc = 0x18674Cu;
            goto label_18674c;
        }
    }
    ctx->pc = 0x186710u;
label_186710:
    // 0x186710: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x186710u;
    {
        const bool branch_taken_0x186710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186710) {
            ctx->pc = 0x186714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186710u;
            // 0x186714: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186724u;
            goto label_186724;
        }
    }
    ctx->pc = 0x186718u;
    // 0x186718: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x186718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18671c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18671Cu;
    {
        const bool branch_taken_0x18671c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18671Cu;
            // 0x186720: 0xa20200f6  sb          $v0, 0xF6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18671c) {
            ctx->pc = 0x18674Cu;
            goto label_18674c;
        }
    }
    ctx->pc = 0x186724u;
label_186724:
    // 0x186724: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x186724u;
    {
        const bool branch_taken_0x186724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x186724) {
            ctx->pc = 0x186728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186724u;
            // 0x186728: 0x8e020494  lw          $v0, 0x494($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186738u;
            goto label_186738;
        }
    }
    ctx->pc = 0x18672Cu;
    // 0x18672c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18672cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x186730: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x186730u;
    {
        const bool branch_taken_0x186730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186730u;
            // 0x186734: 0xa20200f6  sb          $v0, 0xF6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186730) {
            ctx->pc = 0x18674Cu;
            goto label_18674c;
        }
    }
    ctx->pc = 0x186738u;
label_186738:
    // 0x186738: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x186738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x18673c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18673Cu;
    {
        const bool branch_taken_0x18673c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18673c) {
            ctx->pc = 0x18674Cu;
            goto label_18674c;
        }
    }
    ctx->pc = 0x186744u;
    // 0x186744: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x186744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x186748: 0xa20200f6  sb          $v0, 0xF6($s0)
    ctx->pc = 0x186748u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 2));
label_18674c:
    // 0x18674c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18674cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186750:
    // 0x186750: 0xc062c3c  jal         func_18B0F0
    ctx->pc = 0x186750u;
    SET_GPR_U32(ctx, 31, 0x186758u);
    ctx->pc = 0x18B0F0u;
    if (runtime->hasFunction(0x18B0F0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186758u; }
        if (ctx->pc != 0x186758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B0F0_0x18b0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186758u; }
        if (ctx->pc != 0x186758u) { return; }
    }
    ctx->pc = 0x186758u;
label_186758:
    // 0x186758: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x186758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18675c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18675cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x186760: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x186760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x186764: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186764u;
    {
        const bool branch_taken_0x186764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x186764) {
            ctx->pc = 0x186768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186764u;
            // 0x186768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18677Cu;
            goto label_18677c;
        }
    }
    ctx->pc = 0x18676Cu;
    // 0x18676c: 0xa60300f0  sh          $v1, 0xF0($s0)
    ctx->pc = 0x18676cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x186770: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x186770u;
    SET_GPR_U32(ctx, 31, 0x186778u);
    ctx->pc = 0x186774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186770u;
            // 0x186774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186778u; }
        if (ctx->pc != 0x186778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186778u; }
        if (ctx->pc != 0x186778u) { return; }
    }
    ctx->pc = 0x186778u;
label_186778:
    // 0x186778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18677c:
    // 0x18677c: 0xc0617ec  jal         func_185FB0
    ctx->pc = 0x18677Cu;
    SET_GPR_U32(ctx, 31, 0x186784u);
    ctx->pc = 0x185FB0u;
    if (runtime->hasFunction(0x185FB0u)) {
        auto targetFn = runtime->lookupFunction(0x185FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186784u; }
        if (ctx->pc != 0x186784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185FB0_0x185fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186784u; }
        if (ctx->pc != 0x186784u) { return; }
    }
    ctx->pc = 0x186784u;
label_186784:
    // 0x186784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18678c: 0x3e00008  jr          $ra
    ctx->pc = 0x18678Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18678Cu;
            // 0x186790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186794u;
    // 0x186794: 0x0  nop
    ctx->pc = 0x186794u;
    // NOP
    // 0x186798: 0x0  nop
    ctx->pc = 0x186798u;
    // NOP
    // 0x18679c: 0x0  nop
    ctx->pc = 0x18679cu;
    // NOP
label_1867a0:
    // 0x1867a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1867a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1867a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1867a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1867a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1867a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1867ac: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1867acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1867b0: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x1867B0u;
    SET_GPR_U32(ctx, 31, 0x1867B8u);
    ctx->pc = 0x1867B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1867B0u;
            // 0x1867b4: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189FE0u;
    if (runtime->hasFunction(0x189FE0u)) {
        auto targetFn = runtime->lookupFunction(0x189FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867B8u; }
        if (ctx->pc != 0x1867B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189FE0_0x189fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867B8u; }
        if (ctx->pc != 0x1867B8u) { return; }
    }
    ctx->pc = 0x1867B8u;
label_1867b8:
    // 0x1867b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1867b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867bc: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x1867BCu;
    SET_GPR_U32(ctx, 31, 0x1867C4u);
    ctx->pc = 0x1867C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1867BCu;
            // 0x1867c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867C4u; }
        if (ctx->pc != 0x1867C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186E70_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867C4u; }
        if (ctx->pc != 0x1867C4u) { return; }
    }
    ctx->pc = 0x1867C4u;
label_1867c4:
    // 0x1867c4: 0xc062c5c  jal         func_18B170
    ctx->pc = 0x1867C4u;
    SET_GPR_U32(ctx, 31, 0x1867CCu);
    ctx->pc = 0x1867C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1867C4u;
            // 0x1867c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B170u;
    if (runtime->hasFunction(0x18B170u)) {
        auto targetFn = runtime->lookupFunction(0x18B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867CCu; }
        if (ctx->pc != 0x1867CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B170_0x18b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867CCu; }
        if (ctx->pc != 0x1867CCu) { return; }
    }
    ctx->pc = 0x1867CCu;
label_1867cc:
    // 0x1867cc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1867ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1867d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1867d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1867d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1867d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1867d8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1867D8u;
    {
        const bool branch_taken_0x1867d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1867d8) {
            ctx->pc = 0x1867DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1867D8u;
            // 0x1867dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1867F0u;
            goto label_1867f0;
        }
    }
    ctx->pc = 0x1867E0u;
    // 0x1867e0: 0xa60300f0  sh          $v1, 0xF0($s0)
    ctx->pc = 0x1867e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x1867e4: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x1867E4u;
    SET_GPR_U32(ctx, 31, 0x1867ECu);
    ctx->pc = 0x1867E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1867E4u;
            // 0x1867e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867ECu; }
        if (ctx->pc != 0x1867ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867ECu; }
        if (ctx->pc != 0x1867ECu) { return; }
    }
    ctx->pc = 0x1867ECu;
label_1867ec:
    // 0x1867ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1867ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1867f0:
    // 0x1867f0: 0xc061ac0  jal         func_186B00
    ctx->pc = 0x1867F0u;
    SET_GPR_U32(ctx, 31, 0x1867F8u);
    ctx->pc = 0x186B00u;
    if (runtime->hasFunction(0x186B00u)) {
        auto targetFn = runtime->lookupFunction(0x186B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867F8u; }
        if (ctx->pc != 0x1867F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186B00_0x186b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867F8u; }
        if (ctx->pc != 0x1867F8u) { return; }
    }
    ctx->pc = 0x1867F8u;
label_1867f8:
    // 0x1867f8: 0xc0617ec  jal         func_185FB0
    ctx->pc = 0x1867F8u;
    SET_GPR_U32(ctx, 31, 0x186800u);
    ctx->pc = 0x1867FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1867F8u;
            // 0x1867fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185FB0u;
    if (runtime->hasFunction(0x185FB0u)) {
        auto targetFn = runtime->lookupFunction(0x185FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186800u; }
        if (ctx->pc != 0x186800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185FB0_0x185fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186800u; }
        if (ctx->pc != 0x186800u) { return; }
    }
    ctx->pc = 0x186800u;
label_186800:
    // 0x186800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186808: 0x3e00008  jr          $ra
    ctx->pc = 0x186808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18680Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186808u;
            // 0x18680c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186810u;
label_186810:
    // 0x186810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18681c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x18681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x186820: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x186820u;
    SET_GPR_U32(ctx, 31, 0x186828u);
    ctx->pc = 0x186824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186820u;
            // 0x186824: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189FE0u;
    if (runtime->hasFunction(0x189FE0u)) {
        auto targetFn = runtime->lookupFunction(0x189FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186828u; }
        if (ctx->pc != 0x186828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189FE0_0x189fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186828u; }
        if (ctx->pc != 0x186828u) { return; }
    }
    ctx->pc = 0x186828u;
label_186828:
    // 0x186828: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18682c: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x18682Cu;
    SET_GPR_U32(ctx, 31, 0x186834u);
    ctx->pc = 0x186830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18682Cu;
            // 0x186830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186834u; }
        if (ctx->pc != 0x186834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186E70_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186834u; }
        if (ctx->pc != 0x186834u) { return; }
    }
    ctx->pc = 0x186834u;
label_186834:
    // 0x186834: 0x960300ec  lhu         $v1, 0xEC($s0)
    ctx->pc = 0x186834u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x186838: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x186838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x18683c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18683Cu;
    {
        const bool branch_taken_0x18683c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18683c) {
            ctx->pc = 0x18686Cu;
            goto label_18686c;
        }
    }
    ctx->pc = 0x186844u;
    // 0x186844: 0xc058068  jal         func_1601A0
    ctx->pc = 0x186844u;
    SET_GPR_U32(ctx, 31, 0x18684Cu);
    ctx->pc = 0x186848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186844u;
            // 0x186848: 0x26040268  addiu       $a0, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601A0u;
    if (runtime->hasFunction(0x1601A0u)) {
        auto targetFn = runtime->lookupFunction(0x1601A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18684Cu; }
        if (ctx->pc != 0x18684Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601A0_0x1601a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18684Cu; }
        if (ctx->pc != 0x18684Cu) { return; }
    }
    ctx->pc = 0x18684Cu;
label_18684c:
    // 0x18684c: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x18684Cu;
    {
        const bool branch_taken_0x18684c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18684c) {
            ctx->pc = 0x186850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18684Cu;
            // 0x186850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1868F4u;
            goto label_1868f4;
        }
    }
    ctx->pc = 0x186854u;
    // 0x186854: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x186854u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x186858: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x186858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18685c: 0x306300c3  andi        $v1, $v1, 0xC3
    ctx->pc = 0x18685cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)195);
    // 0x186860: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x186860u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x186864: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x186864u;
    {
        const bool branch_taken_0x186864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186864u;
            // 0x186868: 0xa20200f6  sb          $v0, 0xF6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186864) {
            ctx->pc = 0x1868F0u;
            goto label_1868f0;
        }
    }
    ctx->pc = 0x18686Cu;
label_18686c:
    // 0x18686c: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x18686Cu;
    {
        const bool branch_taken_0x18686c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18686c) {
            ctx->pc = 0x186870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18686Cu;
            // 0x186870: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18688Cu;
            goto label_18688c;
        }
    }
    ctx->pc = 0x186874u;
    // 0x186874: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x186874u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x186878: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x186878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18687c: 0x306300c3  andi        $v1, $v1, 0xC3
    ctx->pc = 0x18687cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)195);
    // 0x186880: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x186880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x186884: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x186884u;
    {
        const bool branch_taken_0x186884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186884u;
            // 0x186888: 0xa20200f6  sb          $v0, 0xF6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186884) {
            ctx->pc = 0x1868F0u;
            goto label_1868f0;
        }
    }
    ctx->pc = 0x18688Cu;
label_18688c:
    // 0x18688c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18688Cu;
    {
        const bool branch_taken_0x18688c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18688c) {
            ctx->pc = 0x186890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18688Cu;
            // 0x186890: 0x8e020494  lw          $v0, 0x494($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1868ACu;
            goto label_1868ac;
        }
    }
    ctx->pc = 0x186894u;
    // 0x186894: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x186894u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x186898: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x186898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18689c: 0x306300c3  andi        $v1, $v1, 0xC3
    ctx->pc = 0x18689cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)195);
    // 0x1868a0: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x1868a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x1868a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1868A4u;
    {
        const bool branch_taken_0x1868a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1868A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1868A4u;
            // 0x1868a8: 0xa20200f6  sb          $v0, 0xF6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868a4) {
            ctx->pc = 0x1868F0u;
            goto label_1868f0;
        }
    }
    ctx->pc = 0x1868ACu;
label_1868ac:
    // 0x1868ac: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1868acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1868b0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1868B0u;
    {
        const bool branch_taken_0x1868b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1868b0) {
            ctx->pc = 0x1868B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1868B0u;
            // 0x1868b4: 0x8e020490  lw          $v0, 0x490($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1868D0u;
            goto label_1868d0;
        }
    }
    ctx->pc = 0x1868B8u;
    // 0x1868b8: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x1868b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1868bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1868bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1868c0: 0x306300c3  andi        $v1, $v1, 0xC3
    ctx->pc = 0x1868c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)195);
    // 0x1868c4: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x1868c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x1868c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1868C8u;
    {
        const bool branch_taken_0x1868c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1868CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1868C8u;
            // 0x1868cc: 0xa20200f6  sb          $v0, 0xF6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868c8) {
            ctx->pc = 0x1868F0u;
            goto label_1868f0;
        }
    }
    ctx->pc = 0x1868D0u;
label_1868d0:
    // 0x1868d0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1868d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1868d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1868D4u;
    {
        const bool branch_taken_0x1868d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1868d4) {
            ctx->pc = 0x1868F0u;
            goto label_1868f0;
        }
    }
    ctx->pc = 0x1868DCu;
    // 0x1868dc: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x1868dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1868e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1868e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1868e4: 0x306300c3  andi        $v1, $v1, 0xC3
    ctx->pc = 0x1868e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)195);
    // 0x1868e8: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x1868e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x1868ec: 0xa20200f6  sb          $v0, 0xF6($s0)
    ctx->pc = 0x1868ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 2));
label_1868f0:
    // 0x1868f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1868f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1868f4:
    // 0x1868f4: 0xc062c7c  jal         func_18B1F0
    ctx->pc = 0x1868F4u;
    SET_GPR_U32(ctx, 31, 0x1868FCu);
    ctx->pc = 0x18B1F0u;
    if (runtime->hasFunction(0x18B1F0u)) {
        auto targetFn = runtime->lookupFunction(0x18B1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1868FCu; }
        if (ctx->pc != 0x1868FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B1F0_0x18b1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1868FCu; }
        if (ctx->pc != 0x1868FCu) { return; }
    }
    ctx->pc = 0x1868FCu;
label_1868fc:
    // 0x1868fc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1868fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x186900: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x186900u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x186904: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x186904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x186908: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186908u;
    {
        const bool branch_taken_0x186908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x186908) {
            ctx->pc = 0x18690Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186908u;
            // 0x18690c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186920u;
            goto label_186920;
        }
    }
    ctx->pc = 0x186910u;
    // 0x186910: 0xa60300f0  sh          $v1, 0xF0($s0)
    ctx->pc = 0x186910u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x186914: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x186914u;
    SET_GPR_U32(ctx, 31, 0x18691Cu);
    ctx->pc = 0x186918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186914u;
            // 0x186918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18691Cu; }
        if (ctx->pc != 0x18691Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18691Cu; }
        if (ctx->pc != 0x18691Cu) { return; }
    }
    ctx->pc = 0x18691Cu;
label_18691c:
    // 0x18691c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18691cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186920:
    // 0x186920: 0xc0617ec  jal         func_185FB0
    ctx->pc = 0x186920u;
    SET_GPR_U32(ctx, 31, 0x186928u);
    ctx->pc = 0x185FB0u;
    if (runtime->hasFunction(0x185FB0u)) {
        auto targetFn = runtime->lookupFunction(0x185FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186928u; }
        if (ctx->pc != 0x186928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185FB0_0x185fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186928u; }
        if (ctx->pc != 0x186928u) { return; }
    }
    ctx->pc = 0x186928u;
label_186928:
    // 0x186928: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18692c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18692cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186930: 0x3e00008  jr          $ra
    ctx->pc = 0x186930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186930u;
            // 0x186934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186938u;
    // 0x186938: 0x0  nop
    ctx->pc = 0x186938u;
    // NOP
    // 0x18693c: 0x0  nop
    ctx->pc = 0x18693cu;
    // NOP
label_186940:
    // 0x186940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18694c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x18694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x186950: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x186950u;
    SET_GPR_U32(ctx, 31, 0x186958u);
    ctx->pc = 0x186954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186950u;
            // 0x186954: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189FE0u;
    if (runtime->hasFunction(0x189FE0u)) {
        auto targetFn = runtime->lookupFunction(0x189FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186958u; }
        if (ctx->pc != 0x186958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189FE0_0x189fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186958u; }
        if (ctx->pc != 0x186958u) { return; }
    }
    ctx->pc = 0x186958u;
label_186958:
    // 0x186958: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18695c: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x18695Cu;
    SET_GPR_U32(ctx, 31, 0x186964u);
    ctx->pc = 0x186960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18695Cu;
            // 0x186960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186964u; }
        if (ctx->pc != 0x186964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186E70_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186964u; }
        if (ctx->pc != 0x186964u) { return; }
    }
    ctx->pc = 0x186964u;
label_186964:
    // 0x186964: 0xc062ca8  jal         func_18B2A0
    ctx->pc = 0x186964u;
    SET_GPR_U32(ctx, 31, 0x18696Cu);
    ctx->pc = 0x186968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186964u;
            // 0x186968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B2A0u;
    if (runtime->hasFunction(0x18B2A0u)) {
        auto targetFn = runtime->lookupFunction(0x18B2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18696Cu; }
        if (ctx->pc != 0x18696Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B2A0_0x18b2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18696Cu; }
        if (ctx->pc != 0x18696Cu) { return; }
    }
    ctx->pc = 0x18696Cu;
label_18696c:
    // 0x18696c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18696cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x186970: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x186970u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x186974: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x186974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x186978: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186978u;
    {
        const bool branch_taken_0x186978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x186978) {
            ctx->pc = 0x18697Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186978u;
            // 0x18697c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186990u;
            goto label_186990;
        }
    }
    ctx->pc = 0x186980u;
    // 0x186980: 0xa60300f0  sh          $v1, 0xF0($s0)
    ctx->pc = 0x186980u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x186984: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x186984u;
    SET_GPR_U32(ctx, 31, 0x18698Cu);
    ctx->pc = 0x186988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186984u;
            // 0x186988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18698Cu; }
        if (ctx->pc != 0x18698Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18698Cu; }
        if (ctx->pc != 0x18698Cu) { return; }
    }
    ctx->pc = 0x18698Cu;
label_18698c:
    // 0x18698c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18698cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186990:
    // 0x186990: 0xc061ac0  jal         func_186B00
    ctx->pc = 0x186990u;
    SET_GPR_U32(ctx, 31, 0x186998u);
    ctx->pc = 0x186B00u;
    if (runtime->hasFunction(0x186B00u)) {
        auto targetFn = runtime->lookupFunction(0x186B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186998u; }
        if (ctx->pc != 0x186998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186B00_0x186b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186998u; }
        if (ctx->pc != 0x186998u) { return; }
    }
    ctx->pc = 0x186998u;
label_186998:
    // 0x186998: 0xc0617ec  jal         func_185FB0
    ctx->pc = 0x186998u;
    SET_GPR_U32(ctx, 31, 0x1869A0u);
    ctx->pc = 0x18699Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186998u;
            // 0x18699c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185FB0u;
    if (runtime->hasFunction(0x185FB0u)) {
        auto targetFn = runtime->lookupFunction(0x185FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869A0u; }
        if (ctx->pc != 0x1869A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185FB0_0x185fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869A0u; }
        if (ctx->pc != 0x1869A0u) { return; }
    }
    ctx->pc = 0x1869A0u;
label_1869a0:
    // 0x1869a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1869a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1869a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1869a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1869a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1869A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1869ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1869A8u;
            // 0x1869ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1869B0u;
label_1869b0:
    // 0x1869b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1869b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1869b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1869b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1869b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1869b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1869bc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1869bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1869c0: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x1869C0u;
    SET_GPR_U32(ctx, 31, 0x1869C8u);
    ctx->pc = 0x1869C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1869C0u;
            // 0x1869c4: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189FE0u;
    if (runtime->hasFunction(0x189FE0u)) {
        auto targetFn = runtime->lookupFunction(0x189FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869C8u; }
        if (ctx->pc != 0x1869C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189FE0_0x189fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869C8u; }
        if (ctx->pc != 0x1869C8u) { return; }
    }
    ctx->pc = 0x1869C8u;
label_1869c8:
    // 0x1869c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1869c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1869cc: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x1869CCu;
    SET_GPR_U32(ctx, 31, 0x1869D4u);
    ctx->pc = 0x1869D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1869CCu;
            // 0x1869d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869D4u; }
        if (ctx->pc != 0x1869D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186E70_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869D4u; }
        if (ctx->pc != 0x1869D4u) { return; }
    }
    ctx->pc = 0x1869D4u;
label_1869d4:
    // 0x1869d4: 0x960300ec  lhu         $v1, 0xEC($s0)
    ctx->pc = 0x1869d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x1869d8: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x1869d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1869dc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1869DCu;
    {
        const bool branch_taken_0x1869dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1869dc) {
            ctx->pc = 0x186A00u;
            goto label_186a00;
        }
    }
    ctx->pc = 0x1869E4u;
    // 0x1869e4: 0xc058068  jal         func_1601A0
    ctx->pc = 0x1869E4u;
    SET_GPR_U32(ctx, 31, 0x1869ECu);
    ctx->pc = 0x1869E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1869E4u;
            // 0x1869e8: 0x26040268  addiu       $a0, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601A0u;
    if (runtime->hasFunction(0x1601A0u)) {
        auto targetFn = runtime->lookupFunction(0x1601A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869ECu; }
        if (ctx->pc != 0x1869ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601A0_0x1601a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869ECu; }
        if (ctx->pc != 0x1869ECu) { return; }
    }
    ctx->pc = 0x1869ECu;
label_1869ec:
    // 0x1869ec: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1869ECu;
    {
        const bool branch_taken_0x1869ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1869ec) {
            ctx->pc = 0x1869F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1869ECu;
            // 0x1869f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186A40u;
            goto label_186a40;
        }
    }
    ctx->pc = 0x1869F4u;
    // 0x1869f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1869f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1869f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1869F8u;
    {
        const bool branch_taken_0x1869f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1869FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1869F8u;
            // 0x1869fc: 0xa20200f6  sb          $v0, 0xF6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869f8) {
            ctx->pc = 0x186A3Cu;
            goto label_186a3c;
        }
    }
    ctx->pc = 0x186A00u;
label_186a00:
    // 0x186a00: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x186A00u;
    {
        const bool branch_taken_0x186a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186a00) {
            ctx->pc = 0x186A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186A00u;
            // 0x186a04: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186A14u;
            goto label_186a14;
        }
    }
    ctx->pc = 0x186A08u;
    // 0x186a08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x186a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x186a0c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x186A0Cu;
    {
        const bool branch_taken_0x186a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186A0Cu;
            // 0x186a10: 0xa20200f6  sb          $v0, 0xF6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a0c) {
            ctx->pc = 0x186A3Cu;
            goto label_186a3c;
        }
    }
    ctx->pc = 0x186A14u;
label_186a14:
    // 0x186a14: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x186A14u;
    {
        const bool branch_taken_0x186a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x186a14) {
            ctx->pc = 0x186A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186A14u;
            // 0x186a18: 0x8e020494  lw          $v0, 0x494($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186A28u;
            goto label_186a28;
        }
    }
    ctx->pc = 0x186A1Cu;
    // 0x186a1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x186a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x186a20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x186A20u;
    {
        const bool branch_taken_0x186a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186A20u;
            // 0x186a24: 0xa20200f6  sb          $v0, 0xF6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a20) {
            ctx->pc = 0x186A3Cu;
            goto label_186a3c;
        }
    }
    ctx->pc = 0x186A28u;
label_186a28:
    // 0x186a28: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x186a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x186a2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186A2Cu;
    {
        const bool branch_taken_0x186a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186a2c) {
            ctx->pc = 0x186A3Cu;
            goto label_186a3c;
        }
    }
    ctx->pc = 0x186A34u;
    // 0x186a34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x186a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x186a38: 0xa20200f6  sb          $v0, 0xF6($s0)
    ctx->pc = 0x186a38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 2));
label_186a3c:
    // 0x186a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186a40:
    // 0x186a40: 0xc062cc8  jal         func_18B320
    ctx->pc = 0x186A40u;
    SET_GPR_U32(ctx, 31, 0x186A48u);
    ctx->pc = 0x18B320u;
    if (runtime->hasFunction(0x18B320u)) {
        auto targetFn = runtime->lookupFunction(0x18B320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A48u; }
        if (ctx->pc != 0x186A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B320_0x18b320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A48u; }
        if (ctx->pc != 0x186A48u) { return; }
    }
    ctx->pc = 0x186A48u;
label_186a48:
    // 0x186a48: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x186a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x186a4c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x186a4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x186a50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x186a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x186a54: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186A54u;
    {
        const bool branch_taken_0x186a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x186a54) {
            ctx->pc = 0x186A58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186A54u;
            // 0x186a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186A6Cu;
            goto label_186a6c;
        }
    }
    ctx->pc = 0x186A5Cu;
    // 0x186a5c: 0xa60300f0  sh          $v1, 0xF0($s0)
    ctx->pc = 0x186a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x186a60: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x186A60u;
    SET_GPR_U32(ctx, 31, 0x186A68u);
    ctx->pc = 0x186A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186A60u;
            // 0x186a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A68u; }
        if (ctx->pc != 0x186A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A68u; }
        if (ctx->pc != 0x186A68u) { return; }
    }
    ctx->pc = 0x186A68u;
label_186a68:
    // 0x186a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186a6c:
    // 0x186a6c: 0xc0617ec  jal         func_185FB0
    ctx->pc = 0x186A6Cu;
    SET_GPR_U32(ctx, 31, 0x186A74u);
    ctx->pc = 0x185FB0u;
    if (runtime->hasFunction(0x185FB0u)) {
        auto targetFn = runtime->lookupFunction(0x185FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A74u; }
        if (ctx->pc != 0x186A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185FB0_0x185fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A74u; }
        if (ctx->pc != 0x186A74u) { return; }
    }
    ctx->pc = 0x186A74u;
label_186a74:
    // 0x186a74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x186A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186A7Cu;
            // 0x186a80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186A84u;
    // 0x186a84: 0x0  nop
    ctx->pc = 0x186a84u;
    // NOP
    // 0x186a88: 0x0  nop
    ctx->pc = 0x186a88u;
    // NOP
    // 0x186a8c: 0x0  nop
    ctx->pc = 0x186a8cu;
    // NOP
label_186a90:
    // 0x186a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186a94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186a9c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x186a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x186aa0: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x186AA0u;
    SET_GPR_U32(ctx, 31, 0x186AA8u);
    ctx->pc = 0x186AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186AA0u;
            // 0x186aa4: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189FE0u;
    if (runtime->hasFunction(0x189FE0u)) {
        auto targetFn = runtime->lookupFunction(0x189FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AA8u; }
        if (ctx->pc != 0x186AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189FE0_0x189fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AA8u; }
        if (ctx->pc != 0x186AA8u) { return; }
    }
    ctx->pc = 0x186AA8u;
label_186aa8:
    // 0x186aa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186aac: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x186AACu;
    SET_GPR_U32(ctx, 31, 0x186AB4u);
    ctx->pc = 0x186AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186AACu;
            // 0x186ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AB4u; }
        if (ctx->pc != 0x186AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186E70_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AB4u; }
        if (ctx->pc != 0x186AB4u) { return; }
    }
    ctx->pc = 0x186AB4u;
label_186ab4:
    // 0x186ab4: 0xc062ce8  jal         func_18B3A0
    ctx->pc = 0x186AB4u;
    SET_GPR_U32(ctx, 31, 0x186ABCu);
    ctx->pc = 0x186AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186AB4u;
            // 0x186ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B3A0u;
    if (runtime->hasFunction(0x18B3A0u)) {
        auto targetFn = runtime->lookupFunction(0x18B3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186ABCu; }
        if (ctx->pc != 0x186ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B3A0_0x18b3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186ABCu; }
        if (ctx->pc != 0x186ABCu) { return; }
    }
    ctx->pc = 0x186ABCu;
label_186abc:
    // 0x186abc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x186abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x186ac0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x186ac0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x186ac4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x186ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x186ac8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186AC8u;
    {
        const bool branch_taken_0x186ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x186ac8) {
            ctx->pc = 0x186ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186AC8u;
            // 0x186acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186AE0u;
            goto label_186ae0;
        }
    }
    ctx->pc = 0x186AD0u;
    // 0x186ad0: 0xa60300f0  sh          $v1, 0xF0($s0)
    ctx->pc = 0x186ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x186ad4: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x186AD4u;
    SET_GPR_U32(ctx, 31, 0x186ADCu);
    ctx->pc = 0x186AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186AD4u;
            // 0x186ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186ADCu; }
        if (ctx->pc != 0x186ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186ADCu; }
        if (ctx->pc != 0x186ADCu) { return; }
    }
    ctx->pc = 0x186ADCu;
label_186adc:
    // 0x186adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186ae0:
    // 0x186ae0: 0xc061ac0  jal         func_186B00
    ctx->pc = 0x186AE0u;
    SET_GPR_U32(ctx, 31, 0x186AE8u);
    ctx->pc = 0x186B00u;
    if (runtime->hasFunction(0x186B00u)) {
        auto targetFn = runtime->lookupFunction(0x186B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AE8u; }
        if (ctx->pc != 0x186AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186B00_0x186b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AE8u; }
        if (ctx->pc != 0x186AE8u) { return; }
    }
    ctx->pc = 0x186AE8u;
label_186ae8:
    // 0x186ae8: 0xc0617ec  jal         func_185FB0
    ctx->pc = 0x186AE8u;
    SET_GPR_U32(ctx, 31, 0x186AF0u);
    ctx->pc = 0x186AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186AE8u;
            // 0x186aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185FB0u;
    if (runtime->hasFunction(0x185FB0u)) {
        auto targetFn = runtime->lookupFunction(0x185FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AF0u; }
        if (ctx->pc != 0x186AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185FB0_0x185fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AF0u; }
        if (ctx->pc != 0x186AF0u) { return; }
    }
    ctx->pc = 0x186AF0u;
label_186af0:
    // 0x186af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186af4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186af8: 0x3e00008  jr          $ra
    ctx->pc = 0x186AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186AF8u;
            // 0x186afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186B00u;
    ctx->pc = 0x186b00u;
}
