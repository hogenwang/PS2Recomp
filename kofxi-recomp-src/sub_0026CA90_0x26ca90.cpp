#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026CA90
// Address: 0x26ca90 - 0x26d2f0
void sub_0026CA90_0x26ca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CA90_0x26ca90");
#endif

    switch (ctx->pc) {
        case 0x26cad8u: goto label_26cad8;
        case 0x26caecu: goto label_26caec;
        case 0x26cb04u: goto label_26cb04;
        case 0x26cb18u: goto label_26cb18;
        case 0x26cb20u: goto label_26cb20;
        case 0x26cb48u: goto label_26cb48;
        case 0x26cb94u: goto label_26cb94;
        case 0x26cbacu: goto label_26cbac;
        case 0x26cbc4u: goto label_26cbc4;
        case 0x26cbd4u: goto label_26cbd4;
        case 0x26cbe4u: goto label_26cbe4;
        case 0x26cbf8u: goto label_26cbf8;
        case 0x26cc20u: goto label_26cc20;
        case 0x26cc40u: goto label_26cc40;
        case 0x26cc50u: goto label_26cc50;
        case 0x26cc68u: goto label_26cc68;
        case 0x26cc80u: goto label_26cc80;
        case 0x26cc88u: goto label_26cc88;
        case 0x26cc9cu: goto label_26cc9c;
        case 0x26ccc0u: goto label_26ccc0;
        case 0x26ccf0u: goto label_26ccf0;
        case 0x26cd08u: goto label_26cd08;
        case 0x26cd1cu: goto label_26cd1c;
        case 0x26cd2cu: goto label_26cd2c;
        case 0x26cd40u: goto label_26cd40;
        case 0x26cd58u: goto label_26cd58;
        case 0x26cd68u: goto label_26cd68;
        case 0x26cd70u: goto label_26cd70;
        case 0x26cd84u: goto label_26cd84;
        case 0x26cda8u: goto label_26cda8;
        case 0x26cdd8u: goto label_26cdd8;
        case 0x26cdecu: goto label_26cdec;
        case 0x26cdfcu: goto label_26cdfc;
        case 0x26ce60u: goto label_26ce60;
        case 0x26ce68u: goto label_26ce68;
        case 0x26cea8u: goto label_26cea8;
        case 0x26cef4u: goto label_26cef4;
        case 0x26cf04u: goto label_26cf04;
        case 0x26cf0cu: goto label_26cf0c;
        case 0x26cf14u: goto label_26cf14;
        case 0x26cf34u: goto label_26cf34;
        case 0x26cf64u: goto label_26cf64;
        case 0x26cf7cu: goto label_26cf7c;
        case 0x26cfa0u: goto label_26cfa0;
        case 0x26cfa8u: goto label_26cfa8;
        case 0x26cfc4u: goto label_26cfc4;
        case 0x26cfdcu: goto label_26cfdc;
        case 0x26cff4u: goto label_26cff4;
        case 0x26d014u: goto label_26d014;
        case 0x26d02cu: goto label_26d02c;
        case 0x26d044u: goto label_26d044;
        case 0x26d054u: goto label_26d054;
        case 0x26d06cu: goto label_26d06c;
        case 0x26d07cu: goto label_26d07c;
        case 0x26d08cu: goto label_26d08c;
        case 0x26d090u: goto label_26d090;
        case 0x26d0a0u: goto label_26d0a0;
        case 0x26d0b0u: goto label_26d0b0;
        case 0x26d0c0u: goto label_26d0c0;
        case 0x26d0f4u: goto label_26d0f4;
        case 0x26d10cu: goto label_26d10c;
        case 0x26d124u: goto label_26d124;
        case 0x26d13cu: goto label_26d13c;
        case 0x26d174u: goto label_26d174;
        case 0x26d18cu: goto label_26d18c;
        case 0x26d1a4u: goto label_26d1a4;
        case 0x26d1bcu: goto label_26d1bc;
        case 0x26d1d4u: goto label_26d1d4;
        case 0x26d1e8u: goto label_26d1e8;
        case 0x26d1fcu: goto label_26d1fc;
        case 0x26d20cu: goto label_26d20c;
        case 0x26d21cu: goto label_26d21c;
        case 0x26d22cu: goto label_26d22c;
        case 0x26d23cu: goto label_26d23c;
        case 0x26d24cu: goto label_26d24c;
        case 0x26d25cu: goto label_26d25c;
        case 0x26d26cu: goto label_26d26c;
        case 0x26d27cu: goto label_26d27c;
        case 0x26d28cu: goto label_26d28c;
        case 0x26d29cu: goto label_26d29c;
        case 0x26d2acu: goto label_26d2ac;
        case 0x26d2bcu: goto label_26d2bc;
        default: break;
    }

    ctx->pc = 0x26ca90u;

    // 0x26ca90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26ca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x26ca94: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x26ca94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca98: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x26ca98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x26ca9c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26ca9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26caa0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x26caa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x26caa4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x26caa4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26caa8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26caa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26caac: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x26caacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x26cab0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x26cab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x26cab4: 0x24a58d38  addiu       $a1, $a1, -0x72C8
    ctx->pc = 0x26cab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937912));
    // 0x26cab8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x26cab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x26cabc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26cabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26cac0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x26cac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x26cac4: 0x2446ff14  addiu       $a2, $v0, -0xEC
    ctx->pc = 0x26cac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967060));
    // 0x26cac8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x26cac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x26cacc: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x26caccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x26cad0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x26cad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x26cad4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x26cad4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26cad8:
    // 0x26cad8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26cad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26cadc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26cadcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cae0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x26cae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x26cae4: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CAE4u;
    SET_GPR_U32(ctx, 31, 0x26CAECu);
    ctx->pc = 0x26CAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CAE4u;
            // 0x26cae8: 0x265000f0  addiu       $s0, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CAECu; }
        if (ctx->pc != 0x26CAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CAECu; }
        if (ctx->pc != 0x26CAECu) { return; }
    }
    ctx->pc = 0x26CAECu;
label_26caec:
    // 0x26caec: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x26caecu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
    // 0x26caf0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26caf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26caf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26caf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26caf8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x26caf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26cafc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26CAFCu;
    SET_GPR_U32(ctx, 31, 0x26CB04u);
    ctx->pc = 0x26CB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CAFCu;
            // 0x26cb00: 0x3c160040  lui         $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB04u; }
        if (ctx->pc != 0x26CB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB04u; }
        if (ctx->pc != 0x26CB04u) { return; }
    }
    ctx->pc = 0x26CB04u;
label_26cb04:
    // 0x26cb04: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x26cb04u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x26cb08: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26cb08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26cb0c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26cb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26cb10: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CB10u;
    SET_GPR_U32(ctx, 31, 0x26CB18u);
    ctx->pc = 0x26CB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB10u;
            // 0x26cb14: 0x24a58c88  addiu       $a1, $a1, -0x7378 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB18u; }
        if (ctx->pc != 0x26CB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB18u; }
        if (ctx->pc != 0x26CB18u) { return; }
    }
    ctx->pc = 0x26CB18u;
label_26cb18:
    // 0x26cb18: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x26CB18u;
    {
        const bool branch_taken_0x26cb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB18u;
            // 0x26cb1c: 0x211102b  sltu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb18) {
            ctx->pc = 0x26CBFCu;
            goto label_26cbfc;
        }
    }
    ctx->pc = 0x26CB20u;
label_26cb20:
    // 0x26cb20: 0x5462002e  bnel        $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x26CB20u;
    {
        const bool branch_taken_0x26cb20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26cb20) {
            ctx->pc = 0x26CB24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB20u;
            // 0x26cb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26CBDCu;
            goto label_26cbdc;
        }
    }
    ctx->pc = 0x26CB28u;
    // 0x26cb28: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x26cb28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x26cb2c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x26cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x26cb30: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x26cb30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26cb34: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x26CB34u;
    {
        const bool branch_taken_0x26cb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB34u;
            // 0x26cb38: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb34) {
            ctx->pc = 0x26CC3Cu;
            goto label_26cc3c;
        }
    }
    ctx->pc = 0x26CB3Cu;
    // 0x26cb3c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26cb40: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CB40u;
    SET_GPR_U32(ctx, 31, 0x26CB48u);
    ctx->pc = 0x26CB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB40u;
            // 0x26cb44: 0x24458d90  addiu       $a1, $v0, -0x7270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB48u; }
        if (ctx->pc != 0x26CB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB48u; }
        if (ctx->pc != 0x26CB48u) { return; }
    }
    ctx->pc = 0x26CB48u;
label_26cb48:
    // 0x26cb48: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x26cb48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x26cb4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26cb50: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26CB50u;
    {
        const bool branch_taken_0x26cb50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB50u;
            // 0x26cb54: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb50) {
            ctx->pc = 0x26CB9Cu;
            goto label_26cb9c;
        }
    }
    ctx->pc = 0x26CB58u;
    // 0x26cb58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26CB58u;
    {
        const bool branch_taken_0x26cb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB58u;
            // 0x26cb5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb58) {
            ctx->pc = 0x26CB70u;
            goto label_26cb70;
        }
    }
    ctx->pc = 0x26CB60u;
    // 0x26cb60: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26CB60u;
    {
        const bool branch_taken_0x26cb60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB60u;
            // 0x26cb64: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb60) {
            ctx->pc = 0x26CB84u;
            goto label_26cb84;
        }
    }
    ctx->pc = 0x26CB68u;
    // 0x26cb68: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26CB68u;
    {
        const bool branch_taken_0x26cb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cb68) {
            ctx->pc = 0x26CBCCu;
            goto label_26cbcc;
        }
    }
    ctx->pc = 0x26CB70u;
label_26cb70:
    // 0x26cb70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26cb74: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26CB74u;
    {
        const bool branch_taken_0x26cb74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB74u;
            // 0x26cb78: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb74) {
            ctx->pc = 0x26CBB4u;
            goto label_26cbb4;
        }
    }
    ctx->pc = 0x26CB7Cu;
    // 0x26cb7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x26CB7Cu;
    {
        const bool branch_taken_0x26cb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cb7c) {
            ctx->pc = 0x26CBCCu;
            goto label_26cbcc;
        }
    }
    ctx->pc = 0x26CB84u;
label_26cb84:
    // 0x26cb84: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x26cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x26cb88: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26cb88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26cb8c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CB8Cu;
    SET_GPR_U32(ctx, 31, 0x26CB94u);
    ctx->pc = 0x26CB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB8Cu;
            // 0x26cb90: 0x24658da8  addiu       $a1, $v1, -0x7258 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB94u; }
        if (ctx->pc != 0x26CB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB94u; }
        if (ctx->pc != 0x26CB94u) { return; }
    }
    ctx->pc = 0x26CB94u;
label_26cb94:
    // 0x26cb94: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26CB94u;
    {
        const bool branch_taken_0x26cb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB94u;
            // 0x26cb98: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb94) {
            ctx->pc = 0x26CBECu;
            goto label_26cbec;
        }
    }
    ctx->pc = 0x26CB9Cu;
label_26cb9c:
    // 0x26cb9c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x26cb9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x26cba0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26cba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26cba4: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CBA4u;
    SET_GPR_U32(ctx, 31, 0x26CBACu);
    ctx->pc = 0x26CBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CBA4u;
            // 0x26cba8: 0x27c58dd0  addiu       $a1, $fp, -0x7230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294938064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CBACu; }
        if (ctx->pc != 0x26CBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CBACu; }
        if (ctx->pc != 0x26CBACu) { return; }
    }
    ctx->pc = 0x26CBACu;
label_26cbac:
    // 0x26cbac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26CBACu;
    {
        const bool branch_taken_0x26cbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CBACu;
            // 0x26cbb0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cbac) {
            ctx->pc = 0x26CBECu;
            goto label_26cbec;
        }
    }
    ctx->pc = 0x26CBB4u;
label_26cbb4:
    // 0x26cbb4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26cbb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26cbb8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x26cbb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x26cbbc: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CBBCu;
    SET_GPR_U32(ctx, 31, 0x26CBC4u);
    ctx->pc = 0x26CBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CBBCu;
            // 0x26cbc0: 0x26c58df8  addiu       $a1, $s6, -0x7208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294938104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CBC4u; }
        if (ctx->pc != 0x26CBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CBC4u; }
        if (ctx->pc != 0x26CBC4u) { return; }
    }
    ctx->pc = 0x26CBC4u;
label_26cbc4:
    // 0x26cbc4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26CBC4u;
    {
        const bool branch_taken_0x26cbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CBC4u;
            // 0x26cbc8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cbc4) {
            ctx->pc = 0x26CBECu;
            goto label_26cbec;
        }
    }
    ctx->pc = 0x26CBCCu;
label_26cbcc:
    // 0x26cbcc: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CBCCu;
    SET_GPR_U32(ctx, 31, 0x26CBD4u);
    ctx->pc = 0x26CBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CBCCu;
            // 0x26cbd0: 0x26858e20  addiu       $a1, $s4, -0x71E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CBD4u; }
        if (ctx->pc != 0x26CBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CBD4u; }
        if (ctx->pc != 0x26CBD4u) { return; }
    }
    ctx->pc = 0x26CBD4u;
label_26cbd4:
    // 0x26cbd4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26CBD4u;
    {
        const bool branch_taken_0x26cbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CBD4u;
            // 0x26cbd8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cbd4) {
            ctx->pc = 0x26CBECu;
            goto label_26cbec;
        }
    }
    ctx->pc = 0x26CBDCu;
label_26cbdc:
    // 0x26cbdc: 0xc09b4fa  jal         func_26D3E8
    ctx->pc = 0x26CBDCu;
    SET_GPR_U32(ctx, 31, 0x26CBE4u);
    ctx->pc = 0x26CBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CBDCu;
            // 0x26cbe0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D3E8u;
    if (runtime->hasFunction(0x26D3E8u)) {
        auto targetFn = runtime->lookupFunction(0x26D3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CBE4u; }
        if (ctx->pc != 0x26CBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D3E8_0x26d3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CBE4u; }
        if (ctx->pc != 0x26CBE4u) { return; }
    }
    ctx->pc = 0x26CBE4u;
label_26cbe4:
    // 0x26cbe4: 0x44000ba  bltz        $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x26CBE4u;
    {
        const bool branch_taken_0x26cbe4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26CBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CBE4u;
            // 0x26cbe8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cbe4) {
            ctx->pc = 0x26CED0u;
            goto label_26ced0;
        }
    }
    ctx->pc = 0x26CBECu;
label_26cbec:
    // 0x26cbec: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x26cbecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26cbf0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x26cbf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26cbf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26cbf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_26cbf8:
    // 0x26cbf8: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x26cbf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_26cbfc:
    // 0x26cbfc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x26CBFCu;
    {
        const bool branch_taken_0x26cbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cbfc) {
            ctx->pc = 0x26CC00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26CBFCu;
            // 0x26cc00: 0x26f00059  addiu       $s0, $s7, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 89));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26CC40u;
            goto label_26cc40;
        }
    }
    ctx->pc = 0x26CC04u;
    // 0x26cc04: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x26cc04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26cc08: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26CC08u;
    {
        const bool branch_taken_0x26cc08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC08u;
            // 0x26cc0c: 0x2302023  subu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc08) {
            ctx->pc = 0x26CC28u;
            goto label_26cc28;
        }
    }
    ctx->pc = 0x26CC10u;
    // 0x26cc10: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x26cc14: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26cc18: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CC18u;
    SET_GPR_U32(ctx, 31, 0x26CC20u);
    ctx->pc = 0x26CC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC18u;
            // 0x26cc1c: 0x24458d70  addiu       $a1, $v0, -0x7290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC20u; }
        if (ctx->pc != 0x26CC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC20u; }
        if (ctx->pc != 0x26CC20u) { return; }
    }
    ctx->pc = 0x26CC20u;
label_26cc20:
    // 0x26cc20: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x26CC20u;
    {
        const bool branch_taken_0x26cc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC20u;
            // 0x26cc24: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc20) {
            ctx->pc = 0x26CBF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26cbf8;
        }
    }
    ctx->pc = 0x26CC28u;
label_26cc28:
    // 0x26cc28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26cc2c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x26CC2Cu;
    {
        const bool branch_taken_0x26cc2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC2Cu;
            // 0x26cc30: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc2c) {
            ctx->pc = 0x26CCE0u;
            goto label_26cce0;
        }
    }
    ctx->pc = 0x26CC34u;
    // 0x26cc34: 0x1040ffba  beqz        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x26CC34u;
    {
        const bool branch_taken_0x26cc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC34u;
            // 0x26cc38: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc34) {
            ctx->pc = 0x26CB20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26cb20;
        }
    }
    ctx->pc = 0x26CC3Cu;
label_26cc3c:
    // 0x26cc3c: 0x26f00059  addiu       $s0, $s7, 0x59
    ctx->pc = 0x26cc3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 89));
label_26cc40:
    // 0x26cc40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26cc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26cc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc48: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26CC48u;
    SET_GPR_U32(ctx, 31, 0x26CC50u);
    ctx->pc = 0x26CC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC48u;
            // 0x26cc4c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC50u; }
        if (ctx->pc != 0x26CC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC50u; }
        if (ctx->pc != 0x26CC50u) { return; }
    }
    ctx->pc = 0x26CC50u;
label_26cc50:
    // 0x26cc50: 0x1260002f  beqz        $s3, . + 4 + (0x2F << 2)
    ctx->pc = 0x26CC50u;
    {
        const bool branch_taken_0x26cc50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC50u;
            // 0x26cc54: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc50) {
            ctx->pc = 0x26CD10u;
            goto label_26cd10;
        }
    }
    ctx->pc = 0x26CC58u;
    // 0x26cc58: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26cc5c: 0x24a58cc8  addiu       $a1, $a1, -0x7338
    ctx->pc = 0x26cc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937800));
    // 0x26cc60: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CC60u;
    SET_GPR_U32(ctx, 31, 0x26CC68u);
    ctx->pc = 0x26CC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC60u;
            // 0x26cc64: 0x2654006c  addiu       $s4, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC68u; }
        if (ctx->pc != 0x26CC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC68u; }
        if (ctx->pc != 0x26CC68u) { return; }
    }
    ctx->pc = 0x26CC68u;
label_26cc68:
    // 0x26cc68: 0x265100ec  addiu       $s1, $s2, 0xEC
    ctx->pc = 0x26cc68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 236));
    // 0x26cc6c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x26cc6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc70: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x26cc70u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x26cc74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26CC74u;
    {
        const bool branch_taken_0x26cc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC74u;
            // 0x26cc78: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc74) {
            ctx->pc = 0x26CC9Cu;
            goto label_26cc9c;
        }
    }
    ctx->pc = 0x26CC7Cu;
    // 0x26cc7c: 0x0  nop
    ctx->pc = 0x26cc7cu;
    // NOP
label_26cc80:
    // 0x26cc80: 0xc09b4fa  jal         func_26D3E8
    ctx->pc = 0x26CC80u;
    SET_GPR_U32(ctx, 31, 0x26CC88u);
    ctx->pc = 0x26CC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC80u;
            // 0x26cc84: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D3E8u;
    if (runtime->hasFunction(0x26D3E8u)) {
        auto targetFn = runtime->lookupFunction(0x26D3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC88u; }
        if (ctx->pc != 0x26CC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D3E8_0x26d3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC88u; }
        if (ctx->pc != 0x26CC88u) { return; }
    }
    ctx->pc = 0x26CC88u;
label_26cc88:
    // 0x26cc88: 0x4400091  bltz        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x26CC88u;
    {
        const bool branch_taken_0x26cc88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26CC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC88u;
            // 0x26cc8c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc88) {
            ctx->pc = 0x26CED0u;
            goto label_26ced0;
        }
    }
    ctx->pc = 0x26CC90u;
    // 0x26cc90: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x26cc90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26cc94: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x26cc94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26cc98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26cc98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_26cc9c:
    // 0x26cc9c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x26cc9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x26cca0: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x26CCA0u;
    {
        const bool branch_taken_0x26cca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cca0) {
            ctx->pc = 0x26CCA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCA0u;
            // 0x26cca4: 0x26f00019  addiu       $s0, $s7, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 25));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26CD30u;
            goto label_26cd30;
        }
    }
    ctx->pc = 0x26CCA8u;
    // 0x26cca8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x26cca8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26ccac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26CCACu;
    {
        const bool branch_taken_0x26ccac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCACu;
            // 0x26ccb0: 0x2302023  subu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ccac) {
            ctx->pc = 0x26CCC8u;
            goto label_26ccc8;
        }
    }
    ctx->pc = 0x26CCB4u;
    // 0x26ccb4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26ccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26ccb8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CCB8u;
    SET_GPR_U32(ctx, 31, 0x26CCC0u);
    ctx->pc = 0x26CCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCB8u;
            // 0x26ccbc: 0x26c58d70  addiu       $a1, $s6, -0x7290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294937968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CCC0u; }
        if (ctx->pc != 0x26CCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CCC0u; }
        if (ctx->pc != 0x26CCC0u) { return; }
    }
    ctx->pc = 0x26CCC0u;
label_26ccc0:
    // 0x26ccc0: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x26CCC0u;
    {
        const bool branch_taken_0x26ccc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCC0u;
            // 0x26ccc4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ccc0) {
            ctx->pc = 0x26CC9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26cc9c;
        }
    }
    ctx->pc = 0x26CCC8u;
label_26ccc8:
    // 0x26ccc8: 0x1073000b  beq         $v1, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x26CCC8u;
    {
        const bool branch_taken_0x26ccc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x26CCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCC8u;
            // 0x26cccc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ccc8) {
            ctx->pc = 0x26CCF8u;
            goto label_26ccf8;
        }
    }
    ctx->pc = 0x26CCD0u;
    // 0x26ccd0: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x26CCD0u;
    {
        const bool branch_taken_0x26ccd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCD0u;
            // 0x26ccd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ccd0) {
            ctx->pc = 0x26CC80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26cc80;
        }
    }
    ctx->pc = 0x26CCD8u;
    // 0x26ccd8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26CCD8u;
    {
        const bool branch_taken_0x26ccd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCD8u;
            // 0x26ccdc: 0x26f00019  addiu       $s0, $s7, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ccd8) {
            ctx->pc = 0x26CD30u;
            goto label_26cd30;
        }
    }
    ctx->pc = 0x26CCE0u;
label_26cce0:
    // 0x26cce0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26cce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26cce4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26cce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26cce8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CCE8u;
    SET_GPR_U32(ctx, 31, 0x26CCF0u);
    ctx->pc = 0x26CCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCE8u;
            // 0x26ccec: 0x24a58d80  addiu       $a1, $a1, -0x7280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CCF0u; }
        if (ctx->pc != 0x26CCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CCF0u; }
        if (ctx->pc != 0x26CCF0u) { return; }
    }
    ctx->pc = 0x26CCF0u;
label_26ccf0:
    // 0x26ccf0: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x26CCF0u;
    {
        const bool branch_taken_0x26ccf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCF0u;
            // 0x26ccf4: 0x26f00059  addiu       $s0, $s7, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ccf0) {
            ctx->pc = 0x26CC40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26cc40;
        }
    }
    ctx->pc = 0x26CCF8u;
label_26ccf8:
    // 0x26ccf8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26ccf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26ccfc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26cd00: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CD00u;
    SET_GPR_U32(ctx, 31, 0x26CD08u);
    ctx->pc = 0x26CD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD00u;
            // 0x26cd04: 0x24a58d80  addiu       $a1, $a1, -0x7280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD08u; }
        if (ctx->pc != 0x26CD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD08u; }
        if (ctx->pc != 0x26CD08u) { return; }
    }
    ctx->pc = 0x26CD08u;
label_26cd08:
    // 0x26cd08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26CD08u;
    {
        const bool branch_taken_0x26cd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD08u;
            // 0x26cd0c: 0x26f00019  addiu       $s0, $s7, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd08) {
            ctx->pc = 0x26CD30u;
            goto label_26cd30;
        }
    }
    ctx->pc = 0x26CD10u;
label_26cd10:
    // 0x26cd10: 0x2654006c  addiu       $s4, $s2, 0x6C
    ctx->pc = 0x26cd10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x26cd14: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26CD14u;
    SET_GPR_U32(ctx, 31, 0x26CD1Cu);
    ctx->pc = 0x26CD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD14u;
            // 0x26cd18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD1Cu; }
        if (ctx->pc != 0x26CD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD1Cu; }
        if (ctx->pc != 0x26CD1Cu) { return; }
    }
    ctx->pc = 0x26CD1Cu;
label_26cd1c:
    // 0x26cd1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26cd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd20: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x26cd20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26cd24: 0xc04a966  jal         func_12A598
    ctx->pc = 0x26CD24u;
    SET_GPR_U32(ctx, 31, 0x26CD2Cu);
    ctx->pc = 0x26CD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD24u;
            // 0x26cd28: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD2Cu; }
        if (ctx->pc != 0x26CD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD2Cu; }
        if (ctx->pc != 0x26CD2Cu) { return; }
    }
    ctx->pc = 0x26CD2Cu;
label_26cd2c:
    // 0x26cd2c: 0x26f00019  addiu       $s0, $s7, 0x19
    ctx->pc = 0x26cd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 25));
label_26cd30:
    // 0x26cd30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26cd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26cd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd38: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26CD38u;
    SET_GPR_U32(ctx, 31, 0x26CD40u);
    ctx->pc = 0x26CD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD38u;
            // 0x26cd3c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD40u; }
        if (ctx->pc != 0x26CD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD40u; }
        if (ctx->pc != 0x26CD40u) { return; }
    }
    ctx->pc = 0x26CD40u;
label_26cd40:
    // 0x26cd40: 0x12a00027  beqz        $s5, . + 4 + (0x27 << 2)
    ctx->pc = 0x26CD40u;
    {
        const bool branch_taken_0x26cd40 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD40u;
            // 0x26cd44: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd40) {
            ctx->pc = 0x26CDE0u;
            goto label_26cde0;
        }
    }
    ctx->pc = 0x26CD48u;
    // 0x26cd48: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26cd4c: 0x24a58cd8  addiu       $a1, $a1, -0x7328
    ctx->pc = 0x26cd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937816));
    // 0x26cd50: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CD50u;
    SET_GPR_U32(ctx, 31, 0x26CD58u);
    ctx->pc = 0x26CD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD50u;
            // 0x26cd54: 0x2655002c  addiu       $s5, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD58u; }
        if (ctx->pc != 0x26CD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD58u; }
        if (ctx->pc != 0x26CD58u) { return; }
    }
    ctx->pc = 0x26CD58u;
label_26cd58:
    // 0x26cd58: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x26cd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd5c: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x26cd5cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x26cd60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26CD60u;
    {
        const bool branch_taken_0x26cd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD60u;
            // 0x26cd64: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd60) {
            ctx->pc = 0x26CD84u;
            goto label_26cd84;
        }
    }
    ctx->pc = 0x26CD68u;
label_26cd68:
    // 0x26cd68: 0xc09b4fa  jal         func_26D3E8
    ctx->pc = 0x26CD68u;
    SET_GPR_U32(ctx, 31, 0x26CD70u);
    ctx->pc = 0x26CD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD68u;
            // 0x26cd6c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D3E8u;
    if (runtime->hasFunction(0x26D3E8u)) {
        auto targetFn = runtime->lookupFunction(0x26D3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD70u; }
        if (ctx->pc != 0x26CD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D3E8_0x26d3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD70u; }
        if (ctx->pc != 0x26CD70u) { return; }
    }
    ctx->pc = 0x26CD70u;
label_26cd70:
    // 0x26cd70: 0x4400057  bltz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x26CD70u;
    {
        const bool branch_taken_0x26cd70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26CD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD70u;
            // 0x26cd74: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd70) {
            ctx->pc = 0x26CED0u;
            goto label_26ced0;
        }
    }
    ctx->pc = 0x26CD78u;
    // 0x26cd78: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x26cd78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26cd7c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x26cd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26cd80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26cd80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_26cd84:
    // 0x26cd84: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x26cd84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x26cd88: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x26CD88u;
    {
        const bool branch_taken_0x26cd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cd88) {
            ctx->pc = 0x26CD8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD88u;
            // 0x26cd8c: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26CE00u;
            goto label_26ce00;
        }
    }
    ctx->pc = 0x26CD90u;
    // 0x26cd90: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x26cd90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26cd94: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26CD94u;
    {
        const bool branch_taken_0x26cd94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD94u;
            // 0x26cd98: 0x2902023  subu        $a0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd94) {
            ctx->pc = 0x26CDB0u;
            goto label_26cdb0;
        }
    }
    ctx->pc = 0x26CD9Cu;
    // 0x26cd9c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26cd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26cda0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CDA0u;
    SET_GPR_U32(ctx, 31, 0x26CDA8u);
    ctx->pc = 0x26CDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDA0u;
            // 0x26cda4: 0x26658d70  addiu       $a1, $s3, -0x7290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294937968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDA8u; }
        if (ctx->pc != 0x26CDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDA8u; }
        if (ctx->pc != 0x26CDA8u) { return; }
    }
    ctx->pc = 0x26CDA8u;
label_26cda8:
    // 0x26cda8: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x26CDA8u;
    {
        const bool branch_taken_0x26cda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDA8u;
            // 0x26cdac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cda8) {
            ctx->pc = 0x26CD84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26cd84;
        }
    }
    ctx->pc = 0x26CDB0u;
label_26cdb0:
    // 0x26cdb0: 0x10710005  beq         $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26CDB0u;
    {
        const bool branch_taken_0x26cdb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x26CDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDB0u;
            // 0x26cdb4: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cdb0) {
            ctx->pc = 0x26CDC8u;
            goto label_26cdc8;
        }
    }
    ctx->pc = 0x26CDB8u;
    // 0x26cdb8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x26CDB8u;
    {
        const bool branch_taken_0x26cdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDB8u;
            // 0x26cdbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cdb8) {
            ctx->pc = 0x26CD68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26cd68;
        }
    }
    ctx->pc = 0x26CDC0u;
    // 0x26cdc0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26CDC0u;
    {
        const bool branch_taken_0x26cdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDC0u;
            // 0x26cdc4: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cdc0) {
            ctx->pc = 0x26CE00u;
            goto label_26ce00;
        }
    }
    ctx->pc = 0x26CDC8u;
label_26cdc8:
    // 0x26cdc8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26cdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26cdcc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26cdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26cdd0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CDD0u;
    SET_GPR_U32(ctx, 31, 0x26CDD8u);
    ctx->pc = 0x26CDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDD0u;
            // 0x26cdd4: 0x24a58d80  addiu       $a1, $a1, -0x7280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDD8u; }
        if (ctx->pc != 0x26CDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDD8u; }
        if (ctx->pc != 0x26CDD8u) { return; }
    }
    ctx->pc = 0x26CDD8u;
label_26cdd8:
    // 0x26cdd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26CDD8u;
    {
        const bool branch_taken_0x26cdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDD8u;
            // 0x26cddc: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cdd8) {
            ctx->pc = 0x26CE00u;
            goto label_26ce00;
        }
    }
    ctx->pc = 0x26CDE0u;
label_26cde0:
    // 0x26cde0: 0x2655002c  addiu       $s5, $s2, 0x2C
    ctx->pc = 0x26cde0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x26cde4: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26CDE4u;
    SET_GPR_U32(ctx, 31, 0x26CDECu);
    ctx->pc = 0x26CDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDE4u;
            // 0x26cde8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDECu; }
        if (ctx->pc != 0x26CDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDECu; }
        if (ctx->pc != 0x26CDECu) { return; }
    }
    ctx->pc = 0x26CDECu;
label_26cdec:
    // 0x26cdec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26cdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cdf0: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x26cdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26cdf4: 0xc04a966  jal         func_12A598
    ctx->pc = 0x26CDF4u;
    SET_GPR_U32(ctx, 31, 0x26CDFCu);
    ctx->pc = 0x26CDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDF4u;
            // 0x26cdf8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDFCu; }
        if (ctx->pc != 0x26CDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDFCu; }
        if (ctx->pc != 0x26CDFCu) { return; }
    }
    ctx->pc = 0x26CDFCu;
label_26cdfc:
    // 0x26cdfc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_26ce00:
    // 0x26ce00: 0xaae2000c  swl         $v0, 0xC($s7)
    ctx->pc = 0x26ce00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26ce04: 0xbae20009  swr         $v0, 0x9($s7)
    ctx->pc = 0x26ce04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 9); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26ce08: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x26ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26ce0c: 0xaae30010  swl         $v1, 0x10($s7)
    ctx->pc = 0x26ce0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26ce10: 0xbae3000d  swr         $v1, 0xD($s7)
    ctx->pc = 0x26ce10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26ce14: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x26ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x26ce18: 0xaae20014  swl         $v0, 0x14($s7)
    ctx->pc = 0x26ce18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26ce1c: 0xbae20011  swr         $v0, 0x11($s7)
    ctx->pc = 0x26ce1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 17); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26ce20: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x26ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x26ce24: 0xaae30018  swl         $v1, 0x18($s7)
    ctx->pc = 0x26ce24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26ce28: 0xbae30015  swr         $v1, 0x15($s7)
    ctx->pc = 0x26ce28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 21); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26ce2c: 0x92e30007  lbu         $v1, 0x7($s7)
    ctx->pc = 0x26ce2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 7)));
    // 0x26ce30: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x26ce30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x26ce34: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26CE34u;
    {
        const bool branch_taken_0x26ce34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE34u;
            // 0x26ce38: 0x34630020  ori         $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce34) {
            ctx->pc = 0x26CE60u;
            goto label_26ce60;
        }
    }
    ctx->pc = 0x26CE3Cu;
    // 0x26ce3c: 0x8ee203dc  lw          $v0, 0x3DC($s7)
    ctx->pc = 0x26ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 988)));
    // 0x26ce40: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26ce40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26ce44: 0xa2e30007  sb          $v1, 0x7($s7)
    ctx->pc = 0x26ce44u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x26ce48: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x26ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x26ce4c: 0x24a58e38  addiu       $a1, $a1, -0x71C8
    ctx->pc = 0x26ce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938168));
    // 0x26ce50: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26ce50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ce54: 0xaee203e0  sw          $v0, 0x3E0($s7)
    ctx->pc = 0x26ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 992), GPR_U32(ctx, 2));
    // 0x26ce58: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CE58u;
    SET_GPR_U32(ctx, 31, 0x26CE60u);
    ctx->pc = 0x26CE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE58u;
            // 0x26ce5c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE60u; }
        if (ctx->pc != 0x26CE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE60u; }
        if (ctx->pc != 0x26CE60u) { return; }
    }
    ctx->pc = 0x26CE60u;
label_26ce60:
    // 0x26ce60: 0xc08b614  jal         func_22D850
    ctx->pc = 0x26CE60u;
    SET_GPR_U32(ctx, 31, 0x26CE68u);
    ctx->pc = 0x26CE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE60u;
            // 0x26ce64: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE68u; }
        if (ctx->pc != 0x26CE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D850_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE68u; }
        if (ctx->pc != 0x26CE68u) { return; }
    }
    ctx->pc = 0x26CE68u;
label_26ce68:
    // 0x26ce68: 0x8ee603e0  lw          $a2, 0x3E0($s7)
    ctx->pc = 0x26ce68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 992)));
    // 0x26ce6c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26ce70: 0x26258e68  addiu       $a1, $s1, -0x7198
    ctx->pc = 0x26ce70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294938216));
    // 0x26ce74: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x26ce74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x26ce78: 0x63882  srl         $a3, $a2, 2
    ctx->pc = 0x26ce78u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x26ce7c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x26ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x26ce80: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x26ce80u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x26ce84: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x26ce84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x26ce88: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x26ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x26ce8c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26CE8Cu;
    {
        const bool branch_taken_0x26ce8c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ce8c) {
            ctx->pc = 0x26CE90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE8Cu;
            // 0x26ce90: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x26CE94u;
            goto label_26ce94;
        }
    }
    ctx->pc = 0x26CE94u;
label_26ce94:
    // 0x26ce94: 0x4010  mfhi        $t0
    ctx->pc = 0x26ce94u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x26ce98: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x26ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x26ce9c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x26ce9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cea0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CEA0u;
    SET_GPR_U32(ctx, 31, 0x26CEA8u);
    ctx->pc = 0x26CEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CEA0u;
            // 0x26cea4: 0xaee303e0  sw          $v1, 0x3E0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 992), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CEA8u; }
        if (ctx->pc != 0x26CEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CEA8u; }
        if (ctx->pc != 0x26CEA8u) { return; }
    }
    ctx->pc = 0x26CEA8u;
label_26cea8:
    // 0x26cea8: 0x92f00007  lbu         $s0, 0x7($s7)
    ctx->pc = 0x26cea8u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 7)));
    // 0x26ceac: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x26ceacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x26ceb0: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x26CEB0u;
    {
        const bool branch_taken_0x26ceb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ceb0) {
            ctx->pc = 0x26CEB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26CEB0u;
            // 0x26ceb4: 0x8ee203e0  lw          $v0, 0x3E0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 992)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26CF38u;
            goto label_26cf38;
        }
    }
    ctx->pc = 0x26CEB8u;
    // 0x26ceb8: 0x8ee203dc  lw          $v0, 0x3DC($s7)
    ctx->pc = 0x26ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 988)));
    // 0x26cebc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26CEBCu;
    {
        const bool branch_taken_0x26cebc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26CEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CEBCu;
            // 0x26cec0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cebc) {
            ctx->pc = 0x26CED8u;
            goto label_26ced8;
        }
    }
    ctx->pc = 0x26CEC4u;
    // 0x26cec4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26cec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26cec8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26CEC8u;
    {
        const bool branch_taken_0x26cec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CEC8u;
            // 0x26cecc: 0x46806320  cvt.s.w     $f12, $f12 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cec8) {
            ctx->pc = 0x26CEECu;
            goto label_26ceec;
        }
    }
    ctx->pc = 0x26CED0u;
label_26ced0:
    // 0x26ced0: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x26CED0u;
    {
        const bool branch_taken_0x26ced0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CED0u;
            // 0x26ced4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ced0) {
            ctx->pc = 0x26D2C0u;
            goto label_26d2c0;
        }
    }
    ctx->pc = 0x26CED8u;
label_26ced8:
    // 0x26ced8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26ced8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26cedc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26cedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26cee0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26cee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26cee4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x26cee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x26cee8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x26cee8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_26ceec:
    // 0x26ceec: 0xc048930  jal         func_1224C0
    ctx->pc = 0x26CEECu;
    SET_GPR_U32(ctx, 31, 0x26CEF4u);
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CEF4u; }
        if (ctx->pc != 0x26CEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CEF4u; }
        if (ctx->pc != 0x26CEF4u) { return; }
    }
    ctx->pc = 0x26CEF4u;
label_26cef4:
    // 0x26cef4: 0x3405ffb0  ori         $a1, $zero, 0xFFB0
    ctx->pc = 0x26cef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65456);
    // 0x26cef8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x26cef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x26cefc: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x26CEFCu;
    SET_GPR_U32(ctx, 31, 0x26CF04u);
    ctx->pc = 0x26CF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CEFCu;
            // 0x26cf00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF04u; }
        if (ctx->pc != 0x26CF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF04u; }
        if (ctx->pc != 0x26CF04u) { return; }
    }
    ctx->pc = 0x26CF04u;
label_26cf04:
    // 0x26cf04: 0xc048c12  jal         func_123048
    ctx->pc = 0x26CF04u;
    SET_GPR_U32(ctx, 31, 0x26CF0Cu);
    ctx->pc = 0x26CF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF04u;
            // 0x26cf08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123048u;
    if (runtime->hasFunction(0x123048u)) {
        auto targetFn = runtime->lookupFunction(0x123048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF0Cu; }
        if (ctx->pc != 0x26CF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123048_0x123048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF0Cu; }
        if (ctx->pc != 0x26CF0Cu) { return; }
    }
    ctx->pc = 0x26CF0Cu;
label_26cf0c:
    // 0x26cf0c: 0xc048940  jal         func_122500
    ctx->pc = 0x26CF0Cu;
    SET_GPR_U32(ctx, 31, 0x26CF14u);
    ctx->pc = 0x26CF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF0Cu;
            // 0x26cf10: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x122500u;
    if (runtime->hasFunction(0x122500u)) {
        auto targetFn = runtime->lookupFunction(0x122500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF14u; }
        if (ctx->pc != 0x26CF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122500_0x122500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF14u; }
        if (ctx->pc != 0x26CF14u) { return; }
    }
    ctx->pc = 0x26CF14u;
label_26cf14:
    // 0x26cf14: 0x36030010  ori         $v1, $s0, 0x10
    ctx->pc = 0x26cf14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x26cf18: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26cf18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26cf1c: 0xa2e30007  sb          $v1, 0x7($s7)
    ctx->pc = 0x26cf1cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x26cf20: 0x24a58e98  addiu       $a1, $a1, -0x7168
    ctx->pc = 0x26cf20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938264));
    // 0x26cf24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26cf24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cf28: 0xaee203e4  sw          $v0, 0x3E4($s7)
    ctx->pc = 0x26cf28u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 996), GPR_U32(ctx, 2));
    // 0x26cf2c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CF2Cu;
    SET_GPR_U32(ctx, 31, 0x26CF34u);
    ctx->pc = 0x26CF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF2Cu;
            // 0x26cf30: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF34u; }
        if (ctx->pc != 0x26CF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF34u; }
        if (ctx->pc != 0x26CF34u) { return; }
    }
    ctx->pc = 0x26CF34u;
label_26cf34:
    // 0x26cf34: 0x8ee203e0  lw          $v0, 0x3E0($s7)
    ctx->pc = 0x26cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 992)));
label_26cf38:
    // 0x26cf38: 0x8ee303e4  lw          $v1, 0x3E4($s7)
    ctx->pc = 0x26cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 996)));
    // 0x26cf3c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x26cf3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26cf40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26CF40u;
    {
        const bool branch_taken_0x26cf40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF40u;
            // 0x26cf44: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cf40) {
            ctx->pc = 0x26CF64u;
            goto label_26cf64;
        }
    }
    ctx->pc = 0x26CF48u;
    // 0x26cf48: 0x26258e68  addiu       $a1, $s1, -0x7198
    ctx->pc = 0x26cf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294938216));
    // 0x26cf4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26cf50: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26cf54: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x26cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x26cf58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26cf58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cf5c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CF5Cu;
    SET_GPR_U32(ctx, 31, 0x26CF64u);
    ctx->pc = 0x26CF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF5Cu;
            // 0x26cf60: 0xaee203e0  sw          $v0, 0x3E0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF64u; }
        if (ctx->pc != 0x26CF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF64u; }
        if (ctx->pc != 0x26CF64u) { return; }
    }
    ctx->pc = 0x26CF64u;
label_26cf64:
    // 0x26cf64: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26cf64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26cf68: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26cf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26cf6c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x26cf6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x26cf70: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x26cf70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x26cf74: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CF74u;
    SET_GPR_U32(ctx, 31, 0x26CF7Cu);
    ctx->pc = 0x26CF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF74u;
            // 0x26cf78: 0x24a58ec8  addiu       $a1, $a1, -0x7138 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF7Cu; }
        if (ctx->pc != 0x26CF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF7Cu; }
        if (ctx->pc != 0x26CF7Cu) { return; }
    }
    ctx->pc = 0x26CF7Cu;
label_26cf7c:
    // 0x26cf7c: 0x265e001c  addiu       $fp, $s2, 0x1C
    ctx->pc = 0x26cf7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x26cf80: 0x92490003  lbu         $t1, 0x3($s2)
    ctx->pc = 0x26cf80u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x26cf84: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26cf84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26cf88: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x26cf88u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26cf8c: 0x24a58ef0  addiu       $a1, $a1, -0x7110
    ctx->pc = 0x26cf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938352));
    // 0x26cf90: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x26cf90u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x26cf94: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26cf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26cf98: 0x92480002  lbu         $t0, 0x2($s2)
    ctx->pc = 0x26cf98u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x26cf9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26cf9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26cfa0:
    // 0x26cfa0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CFA0u;
    SET_GPR_U32(ctx, 31, 0x26CFA8u);
    ctx->pc = 0x26CFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CFA0u;
            // 0x26cfa4: 0x3c160040  lui         $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFA8u; }
        if (ctx->pc != 0x26CFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFA8u; }
        if (ctx->pc != 0x26CFA8u) { return; }
    }
    ctx->pc = 0x26CFA8u;
label_26cfa8:
    // 0x26cfa8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26cfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26cfac: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x26cfacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26cfb0: 0x96470008  lhu         $a3, 0x8($s2)
    ctx->pc = 0x26cfb0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26cfb4: 0x24a58f20  addiu       $a1, $a1, -0x70E0
    ctx->pc = 0x26cfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938400));
    // 0x26cfb8: 0x9648000a  lhu         $t0, 0xA($s2)
    ctx->pc = 0x26cfb8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x26cfbc: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CFBCu;
    SET_GPR_U32(ctx, 31, 0x26CFC4u);
    ctx->pc = 0x26CFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CFBCu;
            // 0x26cfc0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFC4u; }
        if (ctx->pc != 0x26CFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFC4u; }
        if (ctx->pc != 0x26CFC4u) { return; }
    }
    ctx->pc = 0x26CFC4u;
label_26cfc4:
    // 0x26cfc4: 0x8ae4000c  lwl         $a0, 0xC($s7)
    ctx->pc = 0x26cfc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26cfc8: 0x9ae40009  lwr         $a0, 0x9($s7)
    ctx->pc = 0x26cfc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 9); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26cfcc: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x26cfccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x26cfd0: 0x26108f48  addiu       $s0, $s0, -0x70B8
    ctx->pc = 0x26cfd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938440));
    // 0x26cfd4: 0xc0990d8  jal         func_264360
    ctx->pc = 0x26CFD4u;
    SET_GPR_U32(ctx, 31, 0x26CFDCu);
    ctx->pc = 0x26CFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CFD4u;
            // 0x26cfd8: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFDCu; }
        if (ctx->pc != 0x26CFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFDCu; }
        if (ctx->pc != 0x26CFDCu) { return; }
    }
    ctx->pc = 0x26CFDCu;
label_26cfdc:
    // 0x26cfdc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26cfdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cfe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26cfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cfe4: 0x26e200d9  addiu       $v0, $s7, 0xD9
    ctx->pc = 0x26cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 217));
    // 0x26cfe8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26cfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26cfec: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26CFECu;
    SET_GPR_U32(ctx, 31, 0x26CFF4u);
    ctx->pc = 0x26CFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CFECu;
            // 0x26cff0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFF4u; }
        if (ctx->pc != 0x26CFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFF4u; }
        if (ctx->pc != 0x26CFF4u) { return; }
    }
    ctx->pc = 0x26CFF4u;
label_26cff4:
    // 0x26cff4: 0x8ae40010  lwl         $a0, 0x10($s7)
    ctx->pc = 0x26cff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26cff8: 0x9ae4000d  lwr         $a0, 0xD($s7)
    ctx->pc = 0x26cff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26cffc: 0x26e301d9  addiu       $v1, $s7, 0x1D9
    ctx->pc = 0x26cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 473));
    // 0x26d000: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x26d000u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x26d004: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x26d004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x26d008: 0x26108f58  addiu       $s0, $s0, -0x70A8
    ctx->pc = 0x26d008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938456));
    // 0x26d00c: 0xc0990d8  jal         func_264360
    ctx->pc = 0x26D00Cu;
    SET_GPR_U32(ctx, 31, 0x26D014u);
    ctx->pc = 0x26D010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D00Cu;
            // 0x26d010: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D014u; }
        if (ctx->pc != 0x26D014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D014u; }
        if (ctx->pc != 0x26D014u) { return; }
    }
    ctx->pc = 0x26D014u;
label_26d014:
    // 0x26d014: 0x26e302d9  addiu       $v1, $s7, 0x2D9
    ctx->pc = 0x26d014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 729));
    // 0x26d018: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26d018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d01c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x26d01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x26d020: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26d020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d024: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D024u;
    SET_GPR_U32(ctx, 31, 0x26D02Cu);
    ctx->pc = 0x26D028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D024u;
            // 0x26d028: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D02Cu; }
        if (ctx->pc != 0x26D02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D02Cu; }
        if (ctx->pc != 0x26D02Cu) { return; }
    }
    ctx->pc = 0x26D02Cu;
label_26d02c:
    // 0x26d02c: 0x8ae40014  lwl         $a0, 0x14($s7)
    ctx->pc = 0x26d02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26d030: 0x9ae40011  lwr         $a0, 0x11($s7)
    ctx->pc = 0x26d030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 17); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26d034: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x26d034u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x26d038: 0x26108f68  addiu       $s0, $s0, -0x7098
    ctx->pc = 0x26d038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938472));
    // 0x26d03c: 0xc0990d8  jal         func_264360
    ctx->pc = 0x26D03Cu;
    SET_GPR_U32(ctx, 31, 0x26D044u);
    ctx->pc = 0x26D040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D03Cu;
            // 0x26d040: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D044u; }
        if (ctx->pc != 0x26D044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D044u; }
        if (ctx->pc != 0x26D044u) { return; }
    }
    ctx->pc = 0x26D044u;
label_26d044:
    // 0x26d044: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26d044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d048: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26d048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d04c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D04Cu;
    SET_GPR_U32(ctx, 31, 0x26D054u);
    ctx->pc = 0x26D050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D04Cu;
            // 0x26d050: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D054u; }
        if (ctx->pc != 0x26D054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D054u; }
        if (ctx->pc != 0x26D054u) { return; }
    }
    ctx->pc = 0x26D054u;
label_26d054:
    // 0x26d054: 0x8ae40018  lwl         $a0, 0x18($s7)
    ctx->pc = 0x26d054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26d058: 0x9ae40015  lwr         $a0, 0x15($s7)
    ctx->pc = 0x26d058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 21); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26d05c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x26d05cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x26d060: 0x26108f78  addiu       $s0, $s0, -0x7088
    ctx->pc = 0x26d060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938488));
    // 0x26d064: 0xc0990d8  jal         func_264360
    ctx->pc = 0x26D064u;
    SET_GPR_U32(ctx, 31, 0x26D06Cu);
    ctx->pc = 0x26D068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D064u;
            // 0x26d068: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D06Cu; }
        if (ctx->pc != 0x26D06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D06Cu; }
        if (ctx->pc != 0x26D06Cu) { return; }
    }
    ctx->pc = 0x26D06Cu;
label_26d06c:
    // 0x26d06c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26d06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d070: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26d070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d074: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D074u;
    SET_GPR_U32(ctx, 31, 0x26D07Cu);
    ctx->pc = 0x26D078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D074u;
            // 0x26d078: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D07Cu; }
        if (ctx->pc != 0x26D07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D07Cu; }
        if (ctx->pc != 0x26D07Cu) { return; }
    }
    ctx->pc = 0x26D07Cu;
label_26d07c:
    // 0x26d07c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d080: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26d080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26d084: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D084u;
    SET_GPR_U32(ctx, 31, 0x26D08Cu);
    ctx->pc = 0x26D088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D084u;
            // 0x26d088: 0x24a58f88  addiu       $a1, $a1, -0x7078 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D08Cu; }
        if (ctx->pc != 0x26D08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D08Cu; }
        if (ctx->pc != 0x26D08Cu) { return; }
    }
    ctx->pc = 0x26D08Cu;
label_26d08c:
    // 0x26d08c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_26d090:
    // 0x26d090: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26d090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26d094: 0x24458f98  addiu       $a1, $v0, -0x7068
    ctx->pc = 0x26d094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938520));
    // 0x26d098: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D098u;
    SET_GPR_U32(ctx, 31, 0x26D0A0u);
    ctx->pc = 0x26D09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D098u;
            // 0x26d09c: 0x27e8021  addu        $s0, $s3, $fp (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0A0u; }
        if (ctx->pc != 0x26D0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0A0u; }
        if (ctx->pc != 0x26D0A0u) { return; }
    }
    ctx->pc = 0x26D0A0u;
label_26d0a0:
    // 0x26d0a0: 0x26720004  addiu       $s2, $s3, 0x4
    ctx->pc = 0x26d0a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x26d0a4: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x26d0a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26d0a8: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x26d0a8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26d0ac: 0x0  nop
    ctx->pc = 0x26d0acu;
    // NOP
label_26d0b0:
    // 0x26d0b0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26d0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26d0b4: 0x26c58fa0  addiu       $a1, $s6, -0x7060
    ctx->pc = 0x26d0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294938528));
    // 0x26d0b8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D0B8u;
    SET_GPR_U32(ctx, 31, 0x26D0C0u);
    ctx->pc = 0x26D0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D0B8u;
            // 0x26d0bc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0C0u; }
        if (ctx->pc != 0x26D0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0C0u; }
        if (ctx->pc != 0x26D0C0u) { return; }
    }
    ctx->pc = 0x26D0C0u;
label_26d0c0:
    // 0x26d0c0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x26d0c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x26d0c4: 0x623fffa  bgezl       $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26D0C4u;
    {
        const bool branch_taken_0x26d0c4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x26d0c4) {
            ctx->pc = 0x26D0C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26D0C4u;
            // 0x26d0c8: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26D0B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26d0b0;
        }
    }
    ctx->pc = 0x26D0CCu;
    // 0x26d0cc: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x26d0ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0d0: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x26d0d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x26d0d4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x26D0D4u;
    {
        const bool branch_taken_0x26d0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D0D4u;
            // 0x26d0d8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d0d4) {
            ctx->pc = 0x26D090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26d090;
        }
    }
    ctx->pc = 0x26D0DCu;
    // 0x26d0dc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d0e0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26d0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26d0e4: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x26d0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x26d0e8: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x26d0e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x26d0ec: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D0ECu;
    SET_GPR_U32(ctx, 31, 0x26D0F4u);
    ctx->pc = 0x26D0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D0ECu;
            // 0x26d0f0: 0x24a58fa8  addiu       $a1, $a1, -0x7058 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0F4u; }
        if (ctx->pc != 0x26D0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0F4u; }
        if (ctx->pc != 0x26D0F4u) { return; }
    }
    ctx->pc = 0x26D0F4u;
label_26d0f4:
    // 0x26d0f4: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x26d0f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x26d0f8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d0fc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x26d0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d100: 0x24a58fb0  addiu       $a1, $a1, -0x7050
    ctx->pc = 0x26d100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938544));
    // 0x26d104: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D104u;
    SET_GPR_U32(ctx, 31, 0x26D10Cu);
    ctx->pc = 0x26D108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D104u;
            // 0x26d108: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D10Cu; }
        if (ctx->pc != 0x26D10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D10Cu; }
        if (ctx->pc != 0x26D10Cu) { return; }
    }
    ctx->pc = 0x26D10Cu;
label_26d10c:
    // 0x26d10c: 0x263190a8  addiu       $s1, $s1, -0x6F58
    ctx->pc = 0x26d10cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294938792));
    // 0x26d110: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d114: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x26d114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d118: 0x24a58fc0  addiu       $a1, $a1, -0x7040
    ctx->pc = 0x26d118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938560));
    // 0x26d11c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D11Cu;
    SET_GPR_U32(ctx, 31, 0x26D124u);
    ctx->pc = 0x26D120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D11Cu;
            // 0x26d120: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D124u; }
        if (ctx->pc != 0x26D124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D124u; }
        if (ctx->pc != 0x26D124u) { return; }
    }
    ctx->pc = 0x26D124u;
label_26d124:
    // 0x26d124: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x26d124u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x26d128: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d12c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26d12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26d130: 0x24a58fd0  addiu       $a1, $a1, -0x7030
    ctx->pc = 0x26d130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938576));
    // 0x26d134: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D134u;
    SET_GPR_U32(ctx, 31, 0x26D13Cu);
    ctx->pc = 0x26D138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D134u;
            // 0x26d138: 0x265290c8  addiu       $s2, $s2, -0x6F38 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D13Cu; }
        if (ctx->pc != 0x26D13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D13Cu; }
        if (ctx->pc != 0x26D13Cu) { return; }
    }
    ctx->pc = 0x26D13Cu;
label_26d13c:
    // 0x26d13c: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x26d13cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x26d140: 0x92e20400  lbu         $v0, 0x400($s7)
    ctx->pc = 0x26d140u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1024)));
    // 0x26d144: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x26d144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x26d148: 0x24631b68  addiu       $v1, $v1, 0x1B68
    ctx->pc = 0x26d148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7016));
    // 0x26d14c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d14cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26d150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26d154: 0x24a58fe0  addiu       $a1, $a1, -0x7020
    ctx->pc = 0x26d154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938592));
    // 0x26d158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26d158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26d15c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26d15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26d160: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x26d160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26d164: 0x267390e0  addiu       $s3, $s3, -0x6F20
    ctx->pc = 0x26d164u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938848));
    // 0x26d168: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x26d168u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x26d16c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D16Cu;
    SET_GPR_U32(ctx, 31, 0x26D174u);
    ctx->pc = 0x26D170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D16Cu;
            // 0x26d170: 0x3c160040  lui         $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D174u; }
        if (ctx->pc != 0x26D174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D174u; }
        if (ctx->pc != 0x26D174u) { return; }
    }
    ctx->pc = 0x26D174u;
label_26d174:
    // 0x26d174: 0x26b59100  addiu       $s5, $s5, -0x6F00
    ctx->pc = 0x26d174u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294938880));
    // 0x26d178: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d17c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x26d17cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26d180: 0x24a59000  addiu       $a1, $a1, -0x7000
    ctx->pc = 0x26d180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938624));
    // 0x26d184: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D184u;
    SET_GPR_U32(ctx, 31, 0x26D18Cu);
    ctx->pc = 0x26D188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D184u;
            // 0x26d188: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D18Cu; }
        if (ctx->pc != 0x26D18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D18Cu; }
        if (ctx->pc != 0x26D18Cu) { return; }
    }
    ctx->pc = 0x26D18Cu;
label_26d18c:
    // 0x26d18c: 0x26d69110  addiu       $s6, $s6, -0x6EF0
    ctx->pc = 0x26d18cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294938896));
    // 0x26d190: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d194: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x26d194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x26d198: 0x24a59018  addiu       $a1, $a1, -0x6FE8
    ctx->pc = 0x26d198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938648));
    // 0x26d19c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D19Cu;
    SET_GPR_U32(ctx, 31, 0x26D1A4u);
    ctx->pc = 0x26D1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D19Cu;
            // 0x26d1a0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1A4u; }
        if (ctx->pc != 0x26D1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1A4u; }
        if (ctx->pc != 0x26D1A4u) { return; }
    }
    ctx->pc = 0x26D1A4u;
label_26d1a4:
    // 0x26d1a4: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x26d1a4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x26d1a8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d1ac: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x26d1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d1b0: 0x24a59030  addiu       $a1, $a1, -0x6FD0
    ctx->pc = 0x26d1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938672));
    // 0x26d1b4: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D1B4u;
    SET_GPR_U32(ctx, 31, 0x26D1BCu);
    ctx->pc = 0x26D1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D1B4u;
            // 0x26d1b8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1BCu; }
        if (ctx->pc != 0x26D1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1BCu; }
        if (ctx->pc != 0x26D1BCu) { return; }
    }
    ctx->pc = 0x26D1BCu;
label_26d1bc:
    // 0x26d1bc: 0x26949138  addiu       $s4, $s4, -0x6EC8
    ctx->pc = 0x26d1bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938936));
    // 0x26d1c0: 0x8ee603dc  lw          $a2, 0x3DC($s7)
    ctx->pc = 0x26d1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 988)));
    // 0x26d1c4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d1c8: 0x24a59048  addiu       $a1, $a1, -0x6FB8
    ctx->pc = 0x26d1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938696));
    // 0x26d1cc: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D1CCu;
    SET_GPR_U32(ctx, 31, 0x26D1D4u);
    ctx->pc = 0x26D1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D1CCu;
            // 0x26d1d0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1D4u; }
        if (ctx->pc != 0x26D1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1D4u; }
        if (ctx->pc != 0x26D1D4u) { return; }
    }
    ctx->pc = 0x26D1D4u;
label_26d1d4:
    // 0x26d1d4: 0x8ee603e0  lw          $a2, 0x3E0($s7)
    ctx->pc = 0x26d1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 992)));
    // 0x26d1d8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d1dc: 0x24a59068  addiu       $a1, $a1, -0x6F98
    ctx->pc = 0x26d1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938728));
    // 0x26d1e0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D1E0u;
    SET_GPR_U32(ctx, 31, 0x26D1E8u);
    ctx->pc = 0x26D1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D1E0u;
            // 0x26d1e4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1E8u; }
        if (ctx->pc != 0x26D1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1E8u; }
        if (ctx->pc != 0x26D1E8u) { return; }
    }
    ctx->pc = 0x26D1E8u;
label_26d1e8:
    // 0x26d1e8: 0x8ee603e4  lw          $a2, 0x3E4($s7)
    ctx->pc = 0x26d1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 996)));
    // 0x26d1ec: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d1f0: 0x24a59088  addiu       $a1, $a1, -0x6F78
    ctx->pc = 0x26d1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938760));
    // 0x26d1f4: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D1F4u;
    SET_GPR_U32(ctx, 31, 0x26D1FCu);
    ctx->pc = 0x26D1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D1F4u;
            // 0x26d1f8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1FCu; }
        if (ctx->pc != 0x26D1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1FCu; }
        if (ctx->pc != 0x26D1FCu) { return; }
    }
    ctx->pc = 0x26D1FCu;
label_26d1fc:
    // 0x26d1fc: 0x8ae403eb  lwl         $a0, 0x3EB($s7)
    ctx->pc = 0x26d1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 1003); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26d200: 0x9ae403e8  lwr         $a0, 0x3E8($s7)
    ctx->pc = 0x26d200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 1000); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26d204: 0xc0990d8  jal         func_264360
    ctx->pc = 0x26D204u;
    SET_GPR_U32(ctx, 31, 0x26D20Cu);
    ctx->pc = 0x26D208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D204u;
            // 0x26d208: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D20Cu; }
        if (ctx->pc != 0x26D20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D20Cu; }
        if (ctx->pc != 0x26D20Cu) { return; }
    }
    ctx->pc = 0x26D20Cu;
label_26d20c:
    // 0x26d20c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26d20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d210: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26d210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d214: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D214u;
    SET_GPR_U32(ctx, 31, 0x26D21Cu);
    ctx->pc = 0x26D218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D214u;
            // 0x26d218: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D21Cu; }
        if (ctx->pc != 0x26D21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D21Cu; }
        if (ctx->pc != 0x26D21Cu) { return; }
    }
    ctx->pc = 0x26D21Cu;
label_26d21c:
    // 0x26d21c: 0x8ae403ef  lwl         $a0, 0x3EF($s7)
    ctx->pc = 0x26d21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 1007); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26d220: 0x9ae403ec  lwr         $a0, 0x3EC($s7)
    ctx->pc = 0x26d220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 1004); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26d224: 0xc0990d8  jal         func_264360
    ctx->pc = 0x26D224u;
    SET_GPR_U32(ctx, 31, 0x26D22Cu);
    ctx->pc = 0x26D228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D224u;
            // 0x26d228: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D22Cu; }
        if (ctx->pc != 0x26D22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D22Cu; }
        if (ctx->pc != 0x26D22Cu) { return; }
    }
    ctx->pc = 0x26D22Cu;
label_26d22c:
    // 0x26d22c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26d22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d230: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26d230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d234: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D234u;
    SET_GPR_U32(ctx, 31, 0x26D23Cu);
    ctx->pc = 0x26D238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D234u;
            // 0x26d238: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D23Cu; }
        if (ctx->pc != 0x26D23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D23Cu; }
        if (ctx->pc != 0x26D23Cu) { return; }
    }
    ctx->pc = 0x26D23Cu;
label_26d23c:
    // 0x26d23c: 0x8ae403f3  lwl         $a0, 0x3F3($s7)
    ctx->pc = 0x26d23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 1011); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26d240: 0x9ae403f0  lwr         $a0, 0x3F0($s7)
    ctx->pc = 0x26d240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 1008); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26d244: 0xc0990d8  jal         func_264360
    ctx->pc = 0x26D244u;
    SET_GPR_U32(ctx, 31, 0x26D24Cu);
    ctx->pc = 0x26D248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D244u;
            // 0x26d248: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D24Cu; }
        if (ctx->pc != 0x26D24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D24Cu; }
        if (ctx->pc != 0x26D24Cu) { return; }
    }
    ctx->pc = 0x26D24Cu;
label_26d24c:
    // 0x26d24c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26d24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d250: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26d250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d254: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D254u;
    SET_GPR_U32(ctx, 31, 0x26D25Cu);
    ctx->pc = 0x26D258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D254u;
            // 0x26d258: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D25Cu; }
        if (ctx->pc != 0x26D25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D25Cu; }
        if (ctx->pc != 0x26D25Cu) { return; }
    }
    ctx->pc = 0x26D25Cu;
label_26d25c:
    // 0x26d25c: 0x8ae403f7  lwl         $a0, 0x3F7($s7)
    ctx->pc = 0x26d25cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 1015); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26d260: 0x9ae403f4  lwr         $a0, 0x3F4($s7)
    ctx->pc = 0x26d260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 1012); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26d264: 0xc0990d8  jal         func_264360
    ctx->pc = 0x26D264u;
    SET_GPR_U32(ctx, 31, 0x26D26Cu);
    ctx->pc = 0x26D268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D264u;
            // 0x26d268: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D26Cu; }
        if (ctx->pc != 0x26D26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D26Cu; }
        if (ctx->pc != 0x26D26Cu) { return; }
    }
    ctx->pc = 0x26D26Cu;
label_26d26c:
    // 0x26d26c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26d26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d270: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26d270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d274: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D274u;
    SET_GPR_U32(ctx, 31, 0x26D27Cu);
    ctx->pc = 0x26D278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D274u;
            // 0x26d278: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D27Cu; }
        if (ctx->pc != 0x26D27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D27Cu; }
        if (ctx->pc != 0x26D27Cu) { return; }
    }
    ctx->pc = 0x26D27Cu;
label_26d27c:
    // 0x26d27c: 0x8ae403fb  lwl         $a0, 0x3FB($s7)
    ctx->pc = 0x26d27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 1019); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26d280: 0x9ae403f8  lwr         $a0, 0x3F8($s7)
    ctx->pc = 0x26d280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 1016); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26d284: 0xc0990d8  jal         func_264360
    ctx->pc = 0x26D284u;
    SET_GPR_U32(ctx, 31, 0x26D28Cu);
    ctx->pc = 0x26D288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D284u;
            // 0x26d288: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D28Cu; }
        if (ctx->pc != 0x26D28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D28Cu; }
        if (ctx->pc != 0x26D28Cu) { return; }
    }
    ctx->pc = 0x26D28Cu;
label_26d28c:
    // 0x26d28c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26d28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d290: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26d290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d294: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D294u;
    SET_GPR_U32(ctx, 31, 0x26D29Cu);
    ctx->pc = 0x26D298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D294u;
            // 0x26d298: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D29Cu; }
        if (ctx->pc != 0x26D29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D29Cu; }
        if (ctx->pc != 0x26D29Cu) { return; }
    }
    ctx->pc = 0x26D29Cu;
label_26d29c:
    // 0x26d29c: 0x8ae403ff  lwl         $a0, 0x3FF($s7)
    ctx->pc = 0x26d29cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 1023); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26d2a0: 0x9ae403fc  lwr         $a0, 0x3FC($s7)
    ctx->pc = 0x26d2a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 1020); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26d2a4: 0xc0990d8  jal         func_264360
    ctx->pc = 0x26D2A4u;
    SET_GPR_U32(ctx, 31, 0x26D2ACu);
    ctx->pc = 0x26D2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D2A4u;
            // 0x26d2a8: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D2ACu; }
        if (ctx->pc != 0x26D2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D2ACu; }
        if (ctx->pc != 0x26D2ACu) { return; }
    }
    ctx->pc = 0x26D2ACu;
label_26d2ac:
    // 0x26d2ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26d2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d2b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26d2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d2b4: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D2B4u;
    SET_GPR_U32(ctx, 31, 0x26D2BCu);
    ctx->pc = 0x26D2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D2B4u;
            // 0x26d2b8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D2BCu; }
        if (ctx->pc != 0x26D2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D2BCu; }
        if (ctx->pc != 0x26D2BCu) { return; }
    }
    ctx->pc = 0x26D2BCu;
label_26d2bc:
    // 0x26d2bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26d2bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d2c0:
    // 0x26d2c0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x26d2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26d2c4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x26d2c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26d2c8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x26d2c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26d2cc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x26d2ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26d2d0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x26d2d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26d2d4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x26d2d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26d2d8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x26d2d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26d2dc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x26d2dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d2e0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x26d2e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d2e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26d2e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x26D2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D2E8u;
            // 0x26d2ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D2F0u;
    ctx->pc = 0x26d2f0u;
}
