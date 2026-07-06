#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EEC08
// Address: 0x1eec08 - 0x1eed98
void sub_001EEC08_0x1eec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEC08_0x1eec08");
#endif

    switch (ctx->pc) {
        case 0x1eec08u: goto label_1eec08;
        case 0x1eec0cu: goto label_1eec0c;
        case 0x1eec10u: goto label_1eec10;
        case 0x1eec14u: goto label_1eec14;
        case 0x1eec18u: goto label_1eec18;
        case 0x1eec1cu: goto label_1eec1c;
        case 0x1eec20u: goto label_1eec20;
        case 0x1eec24u: goto label_1eec24;
        case 0x1eec28u: goto label_1eec28;
        case 0x1eec2cu: goto label_1eec2c;
        case 0x1eec30u: goto label_1eec30;
        case 0x1eec34u: goto label_1eec34;
        case 0x1eec38u: goto label_1eec38;
        case 0x1eec3cu: goto label_1eec3c;
        case 0x1eec40u: goto label_1eec40;
        case 0x1eec44u: goto label_1eec44;
        case 0x1eec48u: goto label_1eec48;
        case 0x1eec4cu: goto label_1eec4c;
        case 0x1eec50u: goto label_1eec50;
        case 0x1eec54u: goto label_1eec54;
        case 0x1eec58u: goto label_1eec58;
        case 0x1eec5cu: goto label_1eec5c;
        case 0x1eec60u: goto label_1eec60;
        case 0x1eec64u: goto label_1eec64;
        case 0x1eec68u: goto label_1eec68;
        case 0x1eec6cu: goto label_1eec6c;
        case 0x1eec70u: goto label_1eec70;
        case 0x1eec74u: goto label_1eec74;
        case 0x1eec78u: goto label_1eec78;
        case 0x1eec7cu: goto label_1eec7c;
        case 0x1eec80u: goto label_1eec80;
        case 0x1eec84u: goto label_1eec84;
        case 0x1eec88u: goto label_1eec88;
        case 0x1eec8cu: goto label_1eec8c;
        case 0x1eec90u: goto label_1eec90;
        case 0x1eec94u: goto label_1eec94;
        case 0x1eec98u: goto label_1eec98;
        case 0x1eec9cu: goto label_1eec9c;
        case 0x1eeca0u: goto label_1eeca0;
        case 0x1eeca4u: goto label_1eeca4;
        case 0x1eeca8u: goto label_1eeca8;
        case 0x1eecacu: goto label_1eecac;
        case 0x1eecb0u: goto label_1eecb0;
        case 0x1eecb4u: goto label_1eecb4;
        case 0x1eecb8u: goto label_1eecb8;
        case 0x1eecbcu: goto label_1eecbc;
        case 0x1eecc0u: goto label_1eecc0;
        case 0x1eecc4u: goto label_1eecc4;
        case 0x1eecc8u: goto label_1eecc8;
        case 0x1eecccu: goto label_1eeccc;
        case 0x1eecd0u: goto label_1eecd0;
        case 0x1eecd4u: goto label_1eecd4;
        case 0x1eecd8u: goto label_1eecd8;
        case 0x1eecdcu: goto label_1eecdc;
        case 0x1eece0u: goto label_1eece0;
        case 0x1eece4u: goto label_1eece4;
        case 0x1eece8u: goto label_1eece8;
        case 0x1eececu: goto label_1eecec;
        case 0x1eecf0u: goto label_1eecf0;
        case 0x1eecf4u: goto label_1eecf4;
        case 0x1eecf8u: goto label_1eecf8;
        case 0x1eecfcu: goto label_1eecfc;
        case 0x1eed00u: goto label_1eed00;
        case 0x1eed04u: goto label_1eed04;
        case 0x1eed08u: goto label_1eed08;
        case 0x1eed0cu: goto label_1eed0c;
        case 0x1eed10u: goto label_1eed10;
        case 0x1eed14u: goto label_1eed14;
        case 0x1eed18u: goto label_1eed18;
        case 0x1eed1cu: goto label_1eed1c;
        case 0x1eed20u: goto label_1eed20;
        case 0x1eed24u: goto label_1eed24;
        case 0x1eed28u: goto label_1eed28;
        case 0x1eed2cu: goto label_1eed2c;
        case 0x1eed30u: goto label_1eed30;
        case 0x1eed34u: goto label_1eed34;
        case 0x1eed38u: goto label_1eed38;
        case 0x1eed3cu: goto label_1eed3c;
        case 0x1eed40u: goto label_1eed40;
        case 0x1eed44u: goto label_1eed44;
        case 0x1eed48u: goto label_1eed48;
        case 0x1eed4cu: goto label_1eed4c;
        case 0x1eed50u: goto label_1eed50;
        case 0x1eed54u: goto label_1eed54;
        case 0x1eed58u: goto label_1eed58;
        case 0x1eed5cu: goto label_1eed5c;
        case 0x1eed60u: goto label_1eed60;
        case 0x1eed64u: goto label_1eed64;
        case 0x1eed68u: goto label_1eed68;
        case 0x1eed6cu: goto label_1eed6c;
        case 0x1eed70u: goto label_1eed70;
        case 0x1eed74u: goto label_1eed74;
        case 0x1eed78u: goto label_1eed78;
        case 0x1eed7cu: goto label_1eed7c;
        case 0x1eed80u: goto label_1eed80;
        case 0x1eed84u: goto label_1eed84;
        case 0x1eed88u: goto label_1eed88;
        case 0x1eed8cu: goto label_1eed8c;
        case 0x1eed90u: goto label_1eed90;
        case 0x1eed94u: goto label_1eed94;
        default: break;
    }

    ctx->pc = 0x1eec08u;

label_1eec08:
    // 0x1eec08: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1eec08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1eec0c:
    // 0x1eec0c: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x1eec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_1eec10:
    // 0x1eec10: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1eec10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1eec14:
    // 0x1eec14: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1eec14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1eec18:
    // 0x1eec18: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1eec18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_1eec1c:
    // 0x1eec1c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1eec1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1eec20:
    // 0x1eec20: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1eec20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1eec24:
    // 0x1eec24: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1eec24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_1eec28:
    // 0x1eec28: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1eec28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eec2c:
    // 0x1eec2c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1eec2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_1eec30:
    // 0x1eec30: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1eec30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eec34:
    // 0x1eec34: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1eec34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_1eec38:
    // 0x1eec38: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1eec38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_1eec3c:
    // 0x1eec3c: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x1eec3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_1eec40:
    // 0x1eec40: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1eec40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_1eec44:
    // 0x1eec44: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x1eec44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_1eec48:
    // 0x1eec48: 0xc07aa24  jal         func_1EA890
label_1eec4c:
    if (ctx->pc == 0x1EEC4Cu) {
        ctx->pc = 0x1EEC4Cu;
            // 0x1eec4c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC50u;
        goto label_1eec50;
    }
    ctx->pc = 0x1EEC48u;
    SET_GPR_U32(ctx, 31, 0x1EEC50u);
    ctx->pc = 0x1EEC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC48u;
            // 0x1eec4c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA890u;
    if (runtime->hasFunction(0x1EA890u)) {
        auto targetFn = runtime->lookupFunction(0x1EA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEC50u; }
        if (ctx->pc != 0x1EEC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA890_0x1ea890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEC50u; }
        if (ctx->pc != 0x1EEC50u) { return; }
    }
    ctx->pc = 0x1EEC50u;
label_1eec50:
    // 0x1eec50: 0x54400046  bnel        $v0, $zero, . + 4 + (0x46 << 2)
label_1eec54:
    if (ctx->pc == 0x1EEC54u) {
        ctx->pc = 0x1EEC54u;
            // 0x1eec54: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x1EEC58u;
        goto label_1eec58;
    }
    ctx->pc = 0x1EEC50u;
    {
        const bool branch_taken_0x1eec50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eec50) {
            ctx->pc = 0x1EEC54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC50u;
            // 0x1eec54: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EED6Cu;
            goto label_1eed6c;
        }
    }
    ctx->pc = 0x1EEC58u;
label_1eec58:
    // 0x1eec58: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x1eec58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1eec5c:
    // 0x1eec5c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1eec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1eec60:
    // 0x1eec60: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x1eec60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1eec64:
    // 0x1eec64: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1eec64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1eec68:
    // 0x1eec68: 0x8fb70008  lw          $s7, 0x8($sp)
    ctx->pc = 0x1eec68u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1eec6c:
    // 0x1eec6c: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x1eec6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1eec70:
    // 0x1eec70: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
label_1eec74:
    if (ctx->pc == 0x1EEC74u) {
        ctx->pc = 0x1EEC74u;
            // 0x1eec74: 0x8fbe0014  lw          $fp, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x1EEC78u;
        goto label_1eec78;
    }
    ctx->pc = 0x1EEC70u;
    {
        const bool branch_taken_0x1eec70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC70u;
            // 0x1eec74: 0x8fbe0014  lw          $fp, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec70) {
            ctx->pc = 0x1EED68u;
            goto label_1eed68;
        }
    }
    ctx->pc = 0x1EEC78u;
label_1eec78:
    // 0x1eec78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eec7c:
    // 0x1eec7c: 0x56c20014  bnel        $s6, $v0, . + 4 + (0x14 << 2)
label_1eec80:
    if (ctx->pc == 0x1EEC80u) {
        ctx->pc = 0x1EEC80u;
            // 0x1eec80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1EEC84u;
        goto label_1eec84;
    }
    ctx->pc = 0x1EEC7Cu;
    {
        const bool branch_taken_0x1eec7c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eec7c) {
            ctx->pc = 0x1EEC80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC7Cu;
            // 0x1eec80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EECD0u;
            goto label_1eecd0;
        }
    }
    ctx->pc = 0x1EEC84u;
label_1eec84:
    // 0x1eec84: 0x6400022  bltz        $s2, . + 4 + (0x22 << 2)
label_1eec88:
    if (ctx->pc == 0x1EEC88u) {
        ctx->pc = 0x1EEC88u;
            // 0x1eec88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC8Cu;
        goto label_1eec8c;
    }
    ctx->pc = 0x1EEC84u;
    {
        const bool branch_taken_0x1eec84 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1EEC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC84u;
            // 0x1eec88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec84) {
            ctx->pc = 0x1EED10u;
            goto label_1eed10;
        }
    }
    ctx->pc = 0x1EEC8Cu;
label_1eec8c:
    // 0x1eec8c: 0xc07e7a8  jal         func_1F9EA0
label_1eec90:
    if (ctx->pc == 0x1EEC90u) {
        ctx->pc = 0x1EEC90u;
            // 0x1eec90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EEC94u;
        goto label_1eec94;
    }
    ctx->pc = 0x1EEC8Cu;
    SET_GPR_U32(ctx, 31, 0x1EEC94u);
    ctx->pc = 0x1EEC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC8Cu;
            // 0x1eec90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9EA0u;
    if (runtime->hasFunction(0x1F9EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEC94u; }
        if (ctx->pc != 0x1EEC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9EA0_0x1f9ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEC94u; }
        if (ctx->pc != 0x1EEC94u) { return; }
    }
    ctx->pc = 0x1EEC94u;
label_1eec94:
    // 0x1eec94: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
label_1eec98:
    if (ctx->pc == 0x1EEC98u) {
        ctx->pc = 0x1EEC98u;
            // 0x1eec98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC9Cu;
        goto label_1eec9c;
    }
    ctx->pc = 0x1EEC94u;
    {
        const bool branch_taken_0x1eec94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eec94) {
            ctx->pc = 0x1EEC98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC94u;
            // 0x1eec98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EED68u;
            goto label_1eed68;
        }
    }
    ctx->pc = 0x1EEC9Cu;
label_1eec9c:
    // 0x1eec9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1eec9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1eeca0:
    // 0x1eeca0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eeca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eeca4:
    // 0x1eeca4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1eeca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1eeca8:
    // 0x1eeca8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1eeca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1eecac:
    // 0x1eecac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1eecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1eecb0:
    // 0x1eecb0: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x1eecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
label_1eecb4:
    // 0x1eecb4: 0xc07e6e8  jal         func_1F9BA0
label_1eecb8:
    if (ctx->pc == 0x1EECB8u) {
        ctx->pc = 0x1EECB8u;
            // 0x1eecb8: 0xafb0002c  sw          $s0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
        ctx->pc = 0x1EECBCu;
        goto label_1eecbc;
    }
    ctx->pc = 0x1EECB4u;
    SET_GPR_U32(ctx, 31, 0x1EECBCu);
    ctx->pc = 0x1EECB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EECB4u;
            // 0x1eecb8: 0xafb0002c  sw          $s0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9BA0u;
    if (runtime->hasFunction(0x1F9BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EECBCu; }
        if (ctx->pc != 0x1EECBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9BA0_0x1f9ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EECBCu; }
        if (ctx->pc != 0x1EECBCu) { return; }
    }
    ctx->pc = 0x1EECBCu;
label_1eecbc:
    // 0x1eecbc: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_1eecc0:
    if (ctx->pc == 0x1EECC0u) {
        ctx->pc = 0x1EECC0u;
            // 0x1eecc0: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x1EECC4u;
        goto label_1eecc4;
    }
    ctx->pc = 0x1EECBCu;
    {
        const bool branch_taken_0x1eecbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eecbc) {
            ctx->pc = 0x1EECC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EECBCu;
            // 0x1eecc0: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EED14u;
            goto label_1eed14;
        }
    }
    ctx->pc = 0x1EECC4u;
label_1eecc4:
    // 0x1eecc4: 0x10000029  b           . + 4 + (0x29 << 2)
label_1eecc8:
    if (ctx->pc == 0x1EECC8u) {
        ctx->pc = 0x1EECC8u;
            // 0x1eecc8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x1EECCCu;
        goto label_1eeccc;
    }
    ctx->pc = 0x1EECC4u;
    {
        const bool branch_taken_0x1eecc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EECC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EECC4u;
            // 0x1eecc8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eecc4) {
            ctx->pc = 0x1EED6Cu;
            goto label_1eed6c;
        }
    }
    ctx->pc = 0x1EECCCu;
label_1eeccc:
    // 0x1eeccc: 0x0  nop
    ctx->pc = 0x1eecccu;
    // NOP
label_1eecd0:
    // 0x1eecd0: 0x16c20010  bne         $s6, $v0, . + 4 + (0x10 << 2)
label_1eecd4:
    if (ctx->pc == 0x1EECD4u) {
        ctx->pc = 0x1EECD4u;
            // 0x1eecd4: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x1EECD8u;
        goto label_1eecd8;
    }
    ctx->pc = 0x1EECD0u;
    {
        const bool branch_taken_0x1eecd0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EECD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EECD0u;
            // 0x1eecd4: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eecd0) {
            ctx->pc = 0x1EED14u;
            goto label_1eed14;
        }
    }
    ctx->pc = 0x1EECD8u;
label_1eecd8:
    // 0x1eecd8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1eecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1eecdc:
    // 0x1eecdc: 0x8c42178c  lw          $v0, 0x178C($v0)
    ctx->pc = 0x1eecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6028)));
label_1eece0:
    // 0x1eece0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1eece4:
    if (ctx->pc == 0x1EECE4u) {
        ctx->pc = 0x1EECE4u;
            // 0x1eece4: 0x26841338  addiu       $a0, $s4, 0x1338 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4920));
        ctx->pc = 0x1EECE8u;
        goto label_1eece8;
    }
    ctx->pc = 0x1EECE0u;
    {
        const bool branch_taken_0x1eece0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EECE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EECE0u;
            // 0x1eece4: 0x26841338  addiu       $a0, $s4, 0x1338 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eece0) {
            ctx->pc = 0x1EED10u;
            goto label_1eed10;
        }
    }
    ctx->pc = 0x1EECE8u;
label_1eece8:
    // 0x1eece8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1eece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1eecec:
    // 0x1eecec: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x1eececu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
label_1eecf0:
    // 0x1eecf0: 0x40f809  jalr        $v0
label_1eecf4:
    if (ctx->pc == 0x1EECF4u) {
        ctx->pc = 0x1EECF4u;
            // 0x1eecf4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1EECF8u;
        goto label_1eecf8;
    }
    ctx->pc = 0x1EECF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EECF8u);
        ctx->pc = 0x1EECF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EECF0u;
            // 0x1eecf4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EECF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EECF8u; }
            if (ctx->pc != 0x1EECF8u) { return; }
        }
        }
    }
    ctx->pc = 0x1EECF8u;
label_1eecf8:
    // 0x1eecf8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1eecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1eecfc:
    // 0x1eecfc: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_1eed00:
    if (ctx->pc == 0x1EED00u) {
        ctx->pc = 0x1EED00u;
            // 0x1eed00: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x1EED04u;
        goto label_1eed04;
    }
    ctx->pc = 0x1EECFCu;
    {
        const bool branch_taken_0x1eecfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eecfc) {
            ctx->pc = 0x1EED00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EECFCu;
            // 0x1eed00: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EED14u;
            goto label_1eed14;
        }
    }
    ctx->pc = 0x1EED04u;
label_1eed04:
    // 0x1eed04: 0x10000018  b           . + 4 + (0x18 << 2)
label_1eed08:
    if (ctx->pc == 0x1EED08u) {
        ctx->pc = 0x1EED08u;
            // 0x1eed08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EED0Cu;
        goto label_1eed0c;
    }
    ctx->pc = 0x1EED04u;
    {
        const bool branch_taken_0x1eed04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EED08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED04u;
            // 0x1eed08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed04) {
            ctx->pc = 0x1EED68u;
            goto label_1eed68;
        }
    }
    ctx->pc = 0x1EED0Cu;
label_1eed0c:
    // 0x1eed0c: 0x0  nop
    ctx->pc = 0x1eed0cu;
    // NOP
label_1eed10:
    // 0x1eed10: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x1eed10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1eed14:
    // 0x1eed14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1eed18:
    if (ctx->pc == 0x1EED18u) {
        ctx->pc = 0x1EED18u;
            // 0x1eed18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EED1Cu;
        goto label_1eed1c;
    }
    ctx->pc = 0x1EED14u;
    {
        const bool branch_taken_0x1eed14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EED18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED14u;
            // 0x1eed18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed14) {
            ctx->pc = 0x1EED30u;
            goto label_1eed30;
        }
    }
    ctx->pc = 0x1EED1Cu;
label_1eed1c:
    // 0x1eed1c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1eed1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1eed20:
    // 0x1eed20: 0xc0757de  jal         func_1D5F78
label_1eed24:
    if (ctx->pc == 0x1EED24u) {
        ctx->pc = 0x1EED24u;
            // 0x1eed24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EED28u;
        goto label_1eed28;
    }
    ctx->pc = 0x1EED20u;
    SET_GPR_U32(ctx, 31, 0x1EED28u);
    ctx->pc = 0x1EED24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED20u;
            // 0x1eed24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F78u;
    if (runtime->hasFunction(0x1D5F78u)) {
        auto targetFn = runtime->lookupFunction(0x1D5F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EED28u; }
        if (ctx->pc != 0x1EED28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5F78_0x1d5f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EED28u; }
        if (ctx->pc != 0x1EED28u) { return; }
    }
    ctx->pc = 0x1EED28u;
label_1eed28:
    // 0x1eed28: 0x10000009  b           . + 4 + (0x9 << 2)
label_1eed2c:
    if (ctx->pc == 0x1EED2Cu) {
        ctx->pc = 0x1EED2Cu;
            // 0x1eed2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EED30u;
        goto label_1eed30;
    }
    ctx->pc = 0x1EED28u;
    {
        const bool branch_taken_0x1eed28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EED2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED28u;
            // 0x1eed2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed28) {
            ctx->pc = 0x1EED50u;
            goto label_1eed50;
        }
    }
    ctx->pc = 0x1EED30u;
label_1eed30:
    // 0x1eed30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1eed30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1eed34:
    // 0x1eed34: 0xc0757de  jal         func_1D5F78
label_1eed38:
    if (ctx->pc == 0x1EED38u) {
        ctx->pc = 0x1EED38u;
            // 0x1eed38: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EED3Cu;
        goto label_1eed3c;
    }
    ctx->pc = 0x1EED34u;
    SET_GPR_U32(ctx, 31, 0x1EED3Cu);
    ctx->pc = 0x1EED38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED34u;
            // 0x1eed38: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F78u;
    if (runtime->hasFunction(0x1D5F78u)) {
        auto targetFn = runtime->lookupFunction(0x1D5F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EED3Cu; }
        if (ctx->pc != 0x1EED3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5F78_0x1d5f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EED3Cu; }
        if (ctx->pc != 0x1EED3Cu) { return; }
    }
    ctx->pc = 0x1EED3Cu;
label_1eed3c:
    // 0x1eed3c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1eed3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1eed40:
    // 0x1eed40: 0x2b12821  addu        $a1, $s5, $s1
    ctx->pc = 0x1eed40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_1eed44:
    // 0x1eed44: 0xc0757de  jal         func_1D5F78
label_1eed48:
    if (ctx->pc == 0x1EED48u) {
        ctx->pc = 0x1EED48u;
            // 0x1eed48: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->pc = 0x1EED4Cu;
        goto label_1eed4c;
    }
    ctx->pc = 0x1EED44u;
    SET_GPR_U32(ctx, 31, 0x1EED4Cu);
    ctx->pc = 0x1EED48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED44u;
            // 0x1eed48: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F78u;
    if (runtime->hasFunction(0x1D5F78u)) {
        auto targetFn = runtime->lookupFunction(0x1D5F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EED4Cu; }
        if (ctx->pc != 0x1EED4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5F78_0x1d5f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EED4Cu; }
        if (ctx->pc != 0x1EED4Cu) { return; }
    }
    ctx->pc = 0x1EED4Cu;
label_1eed4c:
    // 0x1eed4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1eed4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1eed50:
    // 0x1eed50: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1eed50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1eed54:
    // 0x1eed54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1eed54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eed58:
    // 0x1eed58: 0xc07aa5a  jal         func_1EA968
label_1eed5c:
    if (ctx->pc == 0x1EED5Cu) {
        ctx->pc = 0x1EED5Cu;
            // 0x1eed5c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EED60u;
        goto label_1eed60;
    }
    ctx->pc = 0x1EED58u;
    SET_GPR_U32(ctx, 31, 0x1EED60u);
    ctx->pc = 0x1EED5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED58u;
            // 0x1eed5c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA968u;
    if (runtime->hasFunction(0x1EA968u)) {
        auto targetFn = runtime->lookupFunction(0x1EA968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EED60u; }
        if (ctx->pc != 0x1EED60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA968_0x1ea968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EED60u; }
        if (ctx->pc != 0x1EED60u) { return; }
    }
    ctx->pc = 0x1EED60u;
label_1eed60:
    // 0x1eed60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eed60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eed64:
    // 0x1eed64: 0x62100a  movz        $v0, $v1, $v0
    ctx->pc = 0x1eed64u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1eed68:
    // 0x1eed68: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1eed68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1eed6c:
    // 0x1eed6c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1eed6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1eed70:
    // 0x1eed70: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1eed70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1eed74:
    // 0x1eed74: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1eed74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1eed78:
    // 0x1eed78: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1eed78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1eed7c:
    // 0x1eed7c: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x1eed7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1eed80:
    // 0x1eed80: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1eed80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1eed84:
    // 0x1eed84: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x1eed84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1eed88:
    // 0x1eed88: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1eed88u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1eed8c:
    // 0x1eed8c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x1eed8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_1eed90:
    // 0x1eed90: 0x3e00008  jr          $ra
label_1eed94:
    if (ctx->pc == 0x1EED94u) {
        ctx->pc = 0x1EED94u;
            // 0x1eed94: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1EED98u;
        goto label_fallthrough_0x1eed90;
    }
    ctx->pc = 0x1EED90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EED94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED90u;
            // 0x1eed94: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1eed90:
    ctx->pc = 0x1EED98u;
    ctx->pc = 0x1eed98u;
}
