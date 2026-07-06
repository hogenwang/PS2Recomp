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

// Function: sub_00337CB0
// Address: 0x337cb0 - 0x3392e0
void sub_00337CB0_0x337cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337CB0_0x337cb0");
#endif

    switch (ctx->pc) {
        case 0x337cd4u: goto label_337cd4;
        case 0x337d50u: goto label_337d50;
        case 0x337d64u: goto label_337d64;
        case 0x337d7cu: goto label_337d7c;
        case 0x337d90u: goto label_337d90;
        case 0x337da4u: goto label_337da4;
        case 0x337db8u: goto label_337db8;
        case 0x337dccu: goto label_337dcc;
        case 0x337de0u: goto label_337de0;
        case 0x337e50u: goto label_337e50;
        case 0x337eb4u: goto label_337eb4;
        case 0x337ec0u: goto label_337ec0;
        case 0x337ec8u: goto label_337ec8;
        case 0x337ee8u: goto label_337ee8;
        case 0x337f00u: goto label_337f00;
        case 0x338020u: goto label_338020;
        case 0x338088u: goto label_338088;
        case 0x3380c0u: goto label_3380c0;
        case 0x338114u: goto label_338114;
        case 0x338148u: goto label_338148;
        case 0x33817cu: goto label_33817c;
        case 0x3381c4u: goto label_3381c4;
        case 0x338200u: goto label_338200;
        case 0x338210u: goto label_338210;
        case 0x338240u: goto label_338240;
        case 0x338284u: goto label_338284;
        case 0x3382b0u: goto label_3382b0;
        case 0x3382d8u: goto label_3382d8;
        case 0x33830cu: goto label_33830c;
        case 0x338314u: goto label_338314;
        case 0x33835cu: goto label_33835c;
        case 0x338368u: goto label_338368;
        case 0x338370u: goto label_338370;
        case 0x338378u: goto label_338378;
        case 0x338384u: goto label_338384;
        case 0x33838cu: goto label_33838c;
        case 0x3383b8u: goto label_3383b8;
        case 0x338408u: goto label_338408;
        case 0x338428u: goto label_338428;
        case 0x338450u: goto label_338450;
        case 0x338460u: goto label_338460;
        case 0x338464u: goto label_338464;
        case 0x338484u: goto label_338484;
        case 0x338490u: goto label_338490;
        case 0x3384b0u: goto label_3384b0;
        case 0x3384d0u: goto label_3384d0;
        case 0x3384f8u: goto label_3384f8;
        case 0x338568u: goto label_338568;
        case 0x3385acu: goto label_3385ac;
        case 0x338610u: goto label_338610;
        case 0x338640u: goto label_338640;
        case 0x3386a0u: goto label_3386a0;
        case 0x338728u: goto label_338728;
        case 0x338758u: goto label_338758;
        case 0x338788u: goto label_338788;
        case 0x3387acu: goto label_3387ac;
        case 0x3387e4u: goto label_3387e4;
        case 0x338808u: goto label_338808;
        case 0x338898u: goto label_338898;
        case 0x3388c8u: goto label_3388c8;
        case 0x3388e4u: goto label_3388e4;
        case 0x338908u: goto label_338908;
        case 0x338940u: goto label_338940;
        case 0x338948u: goto label_338948;
        case 0x338968u: goto label_338968;
        case 0x3389ccu: goto label_3389cc;
        case 0x3389e4u: goto label_3389e4;
        case 0x3389f4u: goto label_3389f4;
        case 0x338a0cu: goto label_338a0c;
        case 0x338a1cu: goto label_338a1c;
        case 0x338a2cu: goto label_338a2c;
        case 0x338a34u: goto label_338a34;
        case 0x338a44u: goto label_338a44;
        case 0x338a50u: goto label_338a50;
        case 0x338aa0u: goto label_338aa0;
        case 0x338aa8u: goto label_338aa8;
        case 0x338aecu: goto label_338aec;
        case 0x338b10u: goto label_338b10;
        case 0x338b34u: goto label_338b34;
        case 0x338b58u: goto label_338b58;
        case 0x338b60u: goto label_338b60;
        case 0x338b90u: goto label_338b90;
        case 0x338ba0u: goto label_338ba0;
        case 0x338bf8u: goto label_338bf8;
        case 0x338c1cu: goto label_338c1c;
        case 0x338c40u: goto label_338c40;
        case 0x338c7cu: goto label_338c7c;
        case 0x338cb8u: goto label_338cb8;
        case 0x338cc8u: goto label_338cc8;
        case 0x338cd4u: goto label_338cd4;
        case 0x338d58u: goto label_338d58;
        case 0x338d98u: goto label_338d98;
        case 0x338dc4u: goto label_338dc4;
        case 0x338de8u: goto label_338de8;
        case 0x338e0cu: goto label_338e0c;
        case 0x338e48u: goto label_338e48;
        case 0x338e6cu: goto label_338e6c;
        case 0x338e90u: goto label_338e90;
        case 0x338ebcu: goto label_338ebc;
        case 0x338ee4u: goto label_338ee4;
        case 0x338f18u: goto label_338f18;
        case 0x338f4cu: goto label_338f4c;
        case 0x338f9cu: goto label_338f9c;
        case 0x338fd0u: goto label_338fd0;
        case 0x339034u: goto label_339034;
        case 0x339050u: goto label_339050;
        case 0x33909cu: goto label_33909c;
        case 0x3390e8u: goto label_3390e8;
        case 0x33911cu: goto label_33911c;
        case 0x339150u: goto label_339150;
        case 0x339184u: goto label_339184;
        case 0x3391b4u: goto label_3391b4;
        case 0x3391e8u: goto label_3391e8;
        case 0x33921cu: goto label_33921c;
        case 0x33924cu: goto label_33924c;
        case 0x339288u: goto label_339288;
        case 0x3392bcu: goto label_3392bc;
        default: break;
    }

    ctx->pc = 0x337cb0u;

    // 0x337cb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x337cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x337cb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x337cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x337cb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x337cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x337cbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x337cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x337cc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x337cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337cc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x337cc8: 0x8ca400dc  lw          $a0, 0xDC($a1)
    ctx->pc = 0x337cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x337ccc: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x337CCCu;
    SET_GPR_U32(ctx, 31, 0x337CD4u);
    ctx->pc = 0x337CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337CCCu;
    // 0x337cd0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x337CCCu, 0x337CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337CD4u;
label_337cd4:
    // 0x337cd4: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x337cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x337cd8: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x337cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x337cdc: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x337cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x337ce0: 0x122fc2  srl         $a1, $s2, 31
    ctx->pc = 0x337ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x337ce4: 0x720018  mult        $zero, $v1, $s2
    ctx->pc = 0x337ce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x337ce8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x337ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337cec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x337cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337cf0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x337cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337cf4: 0x1810  mfhi        $v1
    ctx->pc = 0x337cf4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x337cf8: 0x14870042  bne         $a0, $a3, . + 4 + (0x42 << 2)
    ctx->pc = 0x337CF8u;
    {
        const bool branch_taken_0x337cf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x337CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337CF8u;
        // 0x337cfc: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337cf8) {
            ctx->pc = 0x337E04u;
            goto label_337e04;
        }
    }
    ctx->pc = 0x337D00u;
    // 0x337d00: 0x8e230490  lw          $v1, 0x490($s1)
    ctx->pc = 0x337d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x337d04: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x337d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x337d08: 0x5460003f  bnel        $v1, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x337D08u;
    {
        const bool branch_taken_0x337d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x337d08) {
            ctx->pc = 0x337D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337D08u;
            // 0x337d0c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337E08u;
            goto label_337e08;
        }
    }
    ctx->pc = 0x337D10u;
    // 0x337d10: 0x50a60026  beql        $a1, $a2, . + 4 + (0x26 << 2)
    ctx->pc = 0x337D10u;
    {
        const bool branch_taken_0x337d10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x337d10) {
            ctx->pc = 0x337D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337D10u;
            // 0x337d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337DACu;
            goto label_337dac;
        }
    }
    ctx->pc = 0x337D18u;
    // 0x337d18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x337d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x337d1c: 0x50a30014  beql        $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x337D1Cu;
    {
        const bool branch_taken_0x337d1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x337d1c) {
            ctx->pc = 0x337D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337D1Cu;
            // 0x337d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337D70u;
            goto label_337d70;
        }
    }
    ctx->pc = 0x337D24u;
    // 0x337d24: 0x50a70006  beql        $a1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x337D24u;
    {
        const bool branch_taken_0x337d24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x337d24) {
            ctx->pc = 0x337D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337D24u;
            // 0x337d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337D40u;
            goto label_337d40;
        }
    }
    ctx->pc = 0x337D2Cu;
    // 0x337d2c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337D2Cu;
    {
        const bool branch_taken_0x337d2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x337d2c) {
            ctx->pc = 0x337D3Cu;
            goto label_337d3c;
        }
    }
    ctx->pc = 0x337D34u;
    // 0x337d34: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x337D34u;
    {
        const bool branch_taken_0x337d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D34u;
        // 0x337d38: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337d34) {
            ctx->pc = 0x337DECu;
            goto label_337dec;
        }
    }
    ctx->pc = 0x337D3Cu;
label_337d3c:
    // 0x337d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_337d40:
    // 0x337d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337d44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337d48: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337D48u;
    SET_GPR_U32(ctx, 31, 0x337D50u);
    ctx->pc = 0x337D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337D48u;
    // 0x337d4c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337D48u, 0x337D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337D50u;
label_337d50:
    // 0x337d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337d54: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x337d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337d58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337d5c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337D5Cu;
    SET_GPR_U32(ctx, 31, 0x337D64u);
    ctx->pc = 0x337D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337D5Cu;
    // 0x337d60: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337D5Cu, 0x337D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337D64u;
label_337d64:
    // 0x337d64: 0xae200238  sw          $zero, 0x238($s1)
    ctx->pc = 0x337d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 0));
    // 0x337d68: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x337D68u;
    {
        const bool branch_taken_0x337d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D68u;
        // 0x337d6c: 0xae200214  sw          $zero, 0x214($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337d68) {
            ctx->pc = 0x337DE8u;
            goto label_337de8;
        }
    }
    ctx->pc = 0x337D70u;
label_337d70:
    // 0x337d70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337d74: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337D74u;
    SET_GPR_U32(ctx, 31, 0x337D7Cu);
    ctx->pc = 0x337D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337D74u;
    // 0x337d78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337D74u, 0x337D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337D7Cu;
label_337d7c:
    // 0x337d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337d80: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x337d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x337d84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337d88: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337D88u;
    SET_GPR_U32(ctx, 31, 0x337D90u);
    ctx->pc = 0x337D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337D88u;
    // 0x337d8c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337D88u, 0x337D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337D90u;
label_337d90:
    // 0x337d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337d94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x337d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337d98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337d9c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337D9Cu;
    SET_GPR_U32(ctx, 31, 0x337DA4u);
    ctx->pc = 0x337DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337D9Cu;
    // 0x337da0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337D9Cu, 0x337DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337DA4u;
label_337da4:
    // 0x337da4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x337DA4u;
    {
        const bool branch_taken_0x337da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337DA4u;
        // 0x337da8: 0xae200214  sw          $zero, 0x214($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337da4) {
            ctx->pc = 0x337DE8u;
            goto label_337de8;
        }
    }
    ctx->pc = 0x337DACu;
label_337dac:
    // 0x337dac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337db0: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337DB0u;
    SET_GPR_U32(ctx, 31, 0x337DB8u);
    ctx->pc = 0x337DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337DB0u;
    // 0x337db4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337DB0u, 0x337DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337DB8u;
label_337db8:
    // 0x337db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337dbc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x337dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x337dc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337dc4: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337DC4u;
    SET_GPR_U32(ctx, 31, 0x337DCCu);
    ctx->pc = 0x337DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337DC4u;
    // 0x337dc8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337DC4u, 0x337DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337DCCu;
label_337dcc:
    // 0x337dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337dd0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x337dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337dd8: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337DD8u;
    SET_GPR_U32(ctx, 31, 0x337DE0u);
    ctx->pc = 0x337DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337DD8u;
    // 0x337ddc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337DD8u, 0x337DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337DE0u;
label_337de0:
    // 0x337de0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x337de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x337de4: 0xae230214  sw          $v1, 0x214($s1)
    ctx->pc = 0x337de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 3));
label_337de8:
    // 0x337de8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x337de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_337dec:
    // 0x337dec: 0xa623020c  sh          $v1, 0x20C($s1)
    ctx->pc = 0x337decu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 524), (uint16_t)GPR_U32(ctx, 3));
    // 0x337df0: 0xae200220  sw          $zero, 0x220($s1)
    ctx->pc = 0x337df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 0));
    // 0x337df4: 0x86230228  lh          $v1, 0x228($s1)
    ctx->pc = 0x337df4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x337df8: 0xa623022a  sh          $v1, 0x22A($s1)
    ctx->pc = 0x337df8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 554), (uint16_t)GPR_U32(ctx, 3));
    // 0x337dfc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x337DFCu;
    {
        const bool branch_taken_0x337dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337DFCu;
        // 0x337e00: 0xa6200228  sh          $zero, 0x228($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 552), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337dfc) {
            ctx->pc = 0x337E50u;
            goto label_337e50;
        }
    }
    ctx->pc = 0x337E04u;
label_337e04:
    // 0x337e04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x337e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_337e08:
    // 0x337e08: 0x54a30012  bnel        $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x337E08u;
    {
        const bool branch_taken_0x337e08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x337e08) {
            ctx->pc = 0x337E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337E08u;
            // 0x337e0c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337E54u;
            goto label_337e54;
        }
    }
    ctx->pc = 0x337E10u;
    // 0x337e10: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x337E10u;
    {
        const bool branch_taken_0x337e10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x337e10) {
            ctx->pc = 0x337E28u;
            goto label_337e28;
        }
    }
    ctx->pc = 0x337E18u;
    // 0x337e18: 0x8e230490  lw          $v1, 0x490($s1)
    ctx->pc = 0x337e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x337e1c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x337e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x337e20: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x337E20u;
    {
        const bool branch_taken_0x337e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x337e20) {
            ctx->pc = 0x337E50u;
            goto label_337e50;
        }
    }
    ctx->pc = 0x337E28u;
label_337e28:
    // 0x337e28: 0x58800005  blezl       $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x337E28u;
    {
        const bool branch_taken_0x337e28 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x337e28) {
            ctx->pc = 0x337E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337E28u;
            // 0x337e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337E40u;
            goto label_337e40;
        }
    }
    ctx->pc = 0x337E30u;
    // 0x337e30: 0x8e220214  lw          $v0, 0x214($s1)
    ctx->pc = 0x337e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x337e34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x337e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x337e38: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x337e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
    // 0x337e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_337e40:
    // 0x337e40: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x337e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337e44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337e48: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337E48u;
    SET_GPR_U32(ctx, 31, 0x337E50u);
    ctx->pc = 0x337E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337E48u;
    // 0x337e4c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337E48u, 0x337E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337E50u;
label_337e50:
    // 0x337e50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x337e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_337e54:
    // 0x337e54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x337e54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x337e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337e5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x337e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337e60: 0x3e00008  jr          $ra
    ctx->pc = 0x337E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E60u;
        // 0x337e64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337E68u;
    // 0x337e68: 0x0  nop
    ctx->pc = 0x337e68u;
    // NOP
    // 0x337e6c: 0x0  nop
    ctx->pc = 0x337e6cu;
    // NOP
    // 0x337e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337e74: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x337e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x337e78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x337e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x337e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x337e80: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x337e80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x337e84: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x337e84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x337e88: 0x5020014c  beql        $at, $zero, . + 4 + (0x14C << 2)
    ctx->pc = 0x337E88u;
    {
        const bool branch_taken_0x337e88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x337e88) {
            ctx->pc = 0x337E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337E88u;
            // 0x337e8c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3383BCu;
            goto label_3383bc;
        }
    }
    ctx->pc = 0x337E90u;
    // 0x337e90: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x337e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x337e94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x337e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x337e98: 0x24844c70  addiu       $a0, $a0, 0x4C70
    ctx->pc = 0x337e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19568));
    // 0x337e9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x337e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x337ea0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x337ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x337ea4: 0x600008  jr          $v1
    ctx->pc = 0x337EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x337EACu: goto label_337eac;
            case 0x337F18u: goto label_337f18;
            case 0x3381F8u: goto label_3381f8;
            case 0x338208u: goto label_338208;
            case 0x338294u: goto label_338294;
            case 0x3382BCu: goto label_3382bc;
            case 0x3382E4u: goto label_3382e4;
            case 0x338320u: goto label_338320;
            case 0x33839Cu: goto label_33839c;
            case 0x3383B8u: goto label_3383b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337EA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x337EACu;
label_337eac:
    // 0x337eac: 0xc053438  jal         func_14D0E0
    ctx->pc = 0x337EACu;
    SET_GPR_U32(ctx, 31, 0x337EB4u);
    ctx->pc = 0x14D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D0E0u, 0x337EACu, 0x337EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337EB4u;
label_337eb4:
    // 0x337eb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x337eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337eb8: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x337EB8u;
    SET_GPR_U32(ctx, 31, 0x337EC0u);
    ctx->pc = 0x337EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337EB8u;
    // 0x337ebc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x337EB8u, 0x337EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337EC0u;
label_337ec0:
    // 0x337ec0: 0xc0cc0bc  jal         func_3302F0
    ctx->pc = 0x337EC0u;
    SET_GPR_U32(ctx, 31, 0x337EC8u);
    ctx->pc = 0x3302F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302F0u, 0x337EC0u, 0x337EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337EC8u;
label_337ec8:
    // 0x337ec8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x337ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x337ecc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x337eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x337ed0: 0x24840970  addiu       $a0, $a0, 0x970
    ctx->pc = 0x337ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2416));
    // 0x337ed4: 0x24a54b90  addiu       $a1, $a1, 0x4B90
    ctx->pc = 0x337ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19344));
    // 0x337ed8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337edc: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x337edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x337ee0: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x337EE0u;
    SET_GPR_U32(ctx, 31, 0x337EE8u);
    ctx->pc = 0x337EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337EE0u;
    // 0x337ee4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x337EE0u, 0x337EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337EE8u;
label_337ee8:
    // 0x337ee8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x337ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x337eec: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x337eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x337ef0: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x337ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x337ef4: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x337ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x337ef8: 0xc0cc0cc  jal         func_330330
    ctx->pc = 0x337EF8u;
    SET_GPR_U32(ctx, 31, 0x337F00u);
    ctx->pc = 0x337EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337EF8u;
    // 0x337efc: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330330u, 0x337EF8u, 0x337F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337F00u;
label_337f00:
    // 0x337f00: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x337f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x337f04: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x337f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x337f08: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x337f08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x337f0c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x337f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x337f10: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x337F10u;
    {
        const bool branch_taken_0x337f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F10u;
        // 0x337f14: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f10) {
            ctx->pc = 0x3383B8u;
            goto label_3383b8;
        }
    }
    ctx->pc = 0x337F18u;
label_337f18:
    // 0x337f18: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x337f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x337f1c: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x337f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x337f20: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x337f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x337f24: 0x1460009a  bnez        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x337F24u;
    {
        const bool branch_taken_0x337f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x337f24) {
            ctx->pc = 0x338190u;
            goto label_338190;
        }
    }
    ctx->pc = 0x337F2Cu;
    // 0x337f2c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x337f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x337f30: 0x8c64e7c8  lw          $a0, -0x1838($v1)
    ctx->pc = 0x337f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x337f34: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x337f34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x337f38: 0x10200095  beqz        $at, . + 4 + (0x95 << 2)
    ctx->pc = 0x337F38u;
    {
        const bool branch_taken_0x337f38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x337f38) {
            ctx->pc = 0x338190u;
            goto label_338190;
        }
    }
    ctx->pc = 0x337F40u;
    // 0x337f40: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x337f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x337f44: 0x10860086  beq         $a0, $a2, . + 4 + (0x86 << 2)
    ctx->pc = 0x337F44u;
    {
        const bool branch_taken_0x337f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x337f44) {
            ctx->pc = 0x338160u;
            goto label_338160;
        }
    }
    ctx->pc = 0x337F4Cu;
    // 0x337f4c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x337f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x337f50: 0x10860076  beq         $a0, $a2, . + 4 + (0x76 << 2)
    ctx->pc = 0x337F50u;
    {
        const bool branch_taken_0x337f50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x337f50) {
            ctx->pc = 0x33812Cu;
            goto label_33812c;
        }
    }
    ctx->pc = 0x337F58u;
    // 0x337f58: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x337f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x337f5c: 0x1083005e  beq         $a0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x337F5Cu;
    {
        const bool branch_taken_0x337f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x337f5c) {
            ctx->pc = 0x3380D8u;
            goto label_3380d8;
        }
    }
    ctx->pc = 0x337F64u;
    // 0x337f64: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x337f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x337f68: 0x1083005b  beq         $a0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x337F68u;
    {
        const bool branch_taken_0x337f68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x337f68) {
            ctx->pc = 0x3380D8u;
            goto label_3380d8;
        }
    }
    ctx->pc = 0x337F70u;
    // 0x337f70: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x337f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x337f74: 0x10830058  beq         $a0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x337F74u;
    {
        const bool branch_taken_0x337f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x337f74) {
            ctx->pc = 0x3380D8u;
            goto label_3380d8;
        }
    }
    ctx->pc = 0x337F7Cu;
    // 0x337f7c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x337f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x337f80: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x337F80u;
    {
        const bool branch_taken_0x337f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x337f80) {
            ctx->pc = 0x338038u;
            goto label_338038;
        }
    }
    ctx->pc = 0x337F88u;
    // 0x337f88: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x337f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x337f8c: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x337F8Cu;
    {
        const bool branch_taken_0x337f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x337f8c) {
            ctx->pc = 0x338038u;
            goto label_338038;
        }
    }
    ctx->pc = 0x337F94u;
    // 0x337f94: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x337f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x337f98: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x337F98u;
    {
        const bool branch_taken_0x337f98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x337f98) {
            ctx->pc = 0x338038u;
            goto label_338038;
        }
    }
    ctx->pc = 0x337FA0u;
    // 0x337fa0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x337fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x337fa4: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x337FA4u;
    {
        const bool branch_taken_0x337fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x337fa4) {
            ctx->pc = 0x338038u;
            goto label_338038;
        }
    }
    ctx->pc = 0x337FACu;
    // 0x337fac: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x337facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x337fb0: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x337FB0u;
    {
        const bool branch_taken_0x337fb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x337fb0) {
            ctx->pc = 0x338038u;
            goto label_338038;
        }
    }
    ctx->pc = 0x337FB8u;
    // 0x337fb8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x337fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x337fbc: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x337FBCu;
    {
        const bool branch_taken_0x337fbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x337fbc) {
            ctx->pc = 0x338038u;
            goto label_338038;
        }
    }
    ctx->pc = 0x337FC4u;
    // 0x337fc4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x337fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x337fc8: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x337FC8u;
    {
        const bool branch_taken_0x337fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x337fc8) {
            ctx->pc = 0x338038u;
            goto label_338038;
        }
    }
    ctx->pc = 0x337FD0u;
    // 0x337fd0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x337fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x337fd4: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x337FD4u;
    {
        const bool branch_taken_0x337fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x337fd4) {
            ctx->pc = 0x338038u;
            goto label_338038;
        }
    }
    ctx->pc = 0x337FDCu;
    // 0x337fdc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x337fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337fe0: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x337FE0u;
    {
        const bool branch_taken_0x337fe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x337fe0) {
            ctx->pc = 0x338038u;
            goto label_338038;
        }
    }
    ctx->pc = 0x337FE8u;
    // 0x337fe8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x337fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337fec: 0x10850012  beq         $a0, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x337FECu;
    {
        const bool branch_taken_0x337fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x337fec) {
            ctx->pc = 0x338038u;
            goto label_338038;
        }
    }
    ctx->pc = 0x337FF4u;
    // 0x337ff4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x337FF4u;
    {
        const bool branch_taken_0x337ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x337ff4) {
            ctx->pc = 0x338004u;
            goto label_338004;
        }
    }
    ctx->pc = 0x337FFCu;
    // 0x337ffc: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x337FFCu;
    {
        const bool branch_taken_0x337ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337ffc) {
            ctx->pc = 0x338190u;
            goto label_338190;
        }
    }
    ctx->pc = 0x338004u;
label_338004:
    // 0x338004: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x338004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x338008: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x338008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33800c: 0x24848b80  addiu       $a0, $a0, -0x7480
    ctx->pc = 0x33800cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937472));
    // 0x338010: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x338010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x338014: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x338014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x338018: 0xc0cdba8  jal         func_336EA0
    ctx->pc = 0x338018u;
    SET_GPR_U32(ctx, 31, 0x338020u);
    ctx->pc = 0x33801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338018u;
    // 0x33801c: 0x240901a0  addiu       $t1, $zero, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336EA0u, 0x338018u, 0x338020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338020u;
label_338020:
    // 0x338020: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x338020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x338024: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x338024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x338028: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x338028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33802c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33802cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x338030: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x338030u;
    {
        const bool branch_taken_0x338030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338030u;
        // 0x338034: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338030) {
            ctx->pc = 0x338190u;
            goto label_338190;
        }
    }
    ctx->pc = 0x338038u;
label_338038:
    // 0x338038: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x338038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33803c: 0x8c44e7c8  lw          $a0, -0x1838($v0)
    ctx->pc = 0x33803cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x338040: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x338040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x338044: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x338044u;
    {
        const bool branch_taken_0x338044 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x338048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338044u;
        // 0x338048: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338044) {
            ctx->pc = 0x338054u;
            goto label_338054;
        }
    }
    ctx->pc = 0x33804Cu;
    // 0x33804c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33804cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x338050: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x338050u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_338054:
    // 0x338054: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x338054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x338058: 0x4363c  dsll32      $a2, $a0, 24
    ctx->pc = 0x338058u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 24));
    // 0x33805c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338060: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x338060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x338064: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x338064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x338068: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x338068u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x33806c: 0x24500060  addiu       $s0, $v0, 0x60
    ctx->pc = 0x33806cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x338070: 0x24848b80  addiu       $a0, $a0, -0x7480
    ctx->pc = 0x338070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937472));
    // 0x338074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x338074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338078: 0x2407fee0  addiu       $a3, $zero, -0x120
    ctx->pc = 0x338078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
    // 0x33807c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x33807cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338080: 0xc0cdba8  jal         func_336EA0
    ctx->pc = 0x338080u;
    SET_GPR_U32(ctx, 31, 0x338088u);
    ctx->pc = 0x338084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338080u;
    // 0x338084: 0x24090040  addiu       $t1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336EA0u, 0x338080u, 0x338088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338088u;
label_338088:
    // 0x338088: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x338088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33808c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33808cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x338090: 0x8c43e7c8  lw          $v1, -0x1838($v0)
    ctx->pc = 0x338090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x338094: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x338094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338098: 0x24848b80  addiu       $a0, $a0, -0x7480
    ctx->pc = 0x338098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937472));
    // 0x33809c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33809cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3380a0: 0x240702e0  addiu       $a3, $zero, 0x2E0
    ctx->pc = 0x3380a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    // 0x3380a4: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x3380a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3380a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3380a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3380ac: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3380acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3380b0: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x3380b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
    // 0x3380b4: 0xac43e7c8  sw          $v1, -0x1838($v0)
    ctx->pc = 0x3380b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961096), GPR_U32(ctx, 3));
    // 0x3380b8: 0xc0cdba8  jal         func_336EA0
    ctx->pc = 0x3380B8u;
    SET_GPR_U32(ctx, 31, 0x3380C0u);
    ctx->pc = 0x3380BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3380B8u;
    // 0x3380bc: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336EA0u, 0x3380B8u, 0x3380C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3380C0u;
label_3380c0:
    // 0x3380c0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3380c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3380c4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3380c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3380c8: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x3380c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x3380cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3380ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3380d0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3380D0u;
    {
        const bool branch_taken_0x3380d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3380D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3380D0u;
        // 0x3380d4: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3380d0) {
            ctx->pc = 0x338190u;
            goto label_338190;
        }
    }
    ctx->pc = 0x3380D8u;
label_3380d8:
    // 0x3380d8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3380d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3380dc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3380dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3380e0: 0x8c42e7c8  lw          $v0, -0x1838($v0)
    ctx->pc = 0x3380e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x3380e4: 0x24848b80  addiu       $a0, $a0, -0x7480
    ctx->pc = 0x3380e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937472));
    // 0x3380e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3380e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3380ec: 0x2407fee0  addiu       $a3, $zero, -0x120
    ctx->pc = 0x3380ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
    // 0x3380f0: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x3380f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3380f4: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x3380f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3380f8: 0x2443ffeb  addiu       $v1, $v0, -0x15
    ctx->pc = 0x3380f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967275));
    // 0x3380fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3380fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x338100: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x338100u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x338104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338108: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x338108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33810c: 0xc0cdba8  jal         func_336EA0
    ctx->pc = 0x33810Cu;
    SET_GPR_U32(ctx, 31, 0x338114u);
    ctx->pc = 0x338110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33810Cu;
    // 0x338110: 0x24480150  addiu       $t0, $v0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336EA0u, 0x33810Cu, 0x338114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338114u;
label_338114:
    // 0x338114: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x338114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x338118: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x338118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33811c: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33811cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x338120: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x338120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x338124: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x338124u;
    {
        const bool branch_taken_0x338124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338124u;
        // 0x338128: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338124) {
            ctx->pc = 0x338190u;
            goto label_338190;
        }
    }
    ctx->pc = 0x33812Cu;
label_33812c:
    // 0x33812c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33812cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x338130: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x338130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x338134: 0x24848b80  addiu       $a0, $a0, -0x7480
    ctx->pc = 0x338134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937472));
    // 0x338138: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x338138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33813c: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x33813cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x338140: 0xc0cdba8  jal         func_336EA0
    ctx->pc = 0x338140u;
    SET_GPR_U32(ctx, 31, 0x338148u);
    ctx->pc = 0x338144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338140u;
    // 0x338144: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336EA0u, 0x338140u, 0x338148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338148u;
label_338148:
    // 0x338148: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x338148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33814c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33814cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x338150: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x338150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x338154: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x338154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x338158: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x338158u;
    {
        const bool branch_taken_0x338158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338158u;
        // 0x33815c: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338158) {
            ctx->pc = 0x338190u;
            goto label_338190;
        }
    }
    ctx->pc = 0x338160u;
label_338160:
    // 0x338160: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x338160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x338164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x338164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338168: 0x24848b80  addiu       $a0, $a0, -0x7480
    ctx->pc = 0x338168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937472));
    // 0x33816c: 0x2407fee0  addiu       $a3, $zero, -0x120
    ctx->pc = 0x33816cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
    // 0x338170: 0x24080130  addiu       $t0, $zero, 0x130
    ctx->pc = 0x338170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x338174: 0xc0cdbd0  jal         func_336F40
    ctx->pc = 0x338174u;
    SET_GPR_U32(ctx, 31, 0x33817Cu);
    ctx->pc = 0x338178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338174u;
    // 0x338178: 0x240900a8  addiu       $t1, $zero, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F40u, 0x338174u, 0x33817Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33817Cu;
label_33817c:
    // 0x33817c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33817cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x338180: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x338180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x338184: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x338184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x338188: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x338188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33818c: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x33818cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
label_338190:
    // 0x338190: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x338190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x338194: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x338194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x338198: 0x2861002c  slti        $at, $v1, 0x2C
    ctx->pc = 0x338198u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)44) ? 1 : 0);
    // 0x33819c: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x33819Cu;
    {
        const bool branch_taken_0x33819c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33819c) {
            ctx->pc = 0x3381E0u;
            goto label_3381e0;
        }
    }
    ctx->pc = 0x3381A4u;
    // 0x3381a4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3381a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3381a8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3381a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3381ac: 0x248483d0  addiu       $a0, $a0, -0x7C30
    ctx->pc = 0x3381acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935504));
    // 0x3381b0: 0x24a54b90  addiu       $a1, $a1, 0x4B90
    ctx->pc = 0x3381b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19344));
    // 0x3381b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3381b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3381b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3381b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3381bc: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x3381BCu;
    SET_GPR_U32(ctx, 31, 0x3381C4u);
    ctx->pc = 0x3381C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3381BCu;
    // 0x3381c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x3381BCu, 0x3381C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3381C4u;
label_3381c4:
    // 0x3381c4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3381c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3381c8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3381c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3381cc: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x3381ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x3381d0: 0xa060e810  sb          $zero, -0x17F0($v1)
    ctx->pc = 0x3381d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
    // 0x3381d4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3381d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3381d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3381d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3381dc: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x3381dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_3381e0:
    // 0x3381e0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3381e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3381e4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3381e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3381e8: 0x8c84e7d0  lw          $a0, -0x1830($a0)
    ctx->pc = 0x3381e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
    // 0x3381ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3381ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3381f0: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x3381F0u;
    {
        const bool branch_taken_0x3381f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3381F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3381F0u;
        // 0x3381f4: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3381f0) {
            ctx->pc = 0x3383B8u;
            goto label_3383b8;
        }
    }
    ctx->pc = 0x3381F8u;
label_3381f8:
    // 0x3381f8: 0xc0cc0bc  jal         func_3302F0
    ctx->pc = 0x3381F8u;
    SET_GPR_U32(ctx, 31, 0x338200u);
    ctx->pc = 0x3302F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302F0u, 0x3381F8u, 0x338200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338200u;
label_338200:
    // 0x338200: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x338200u;
    {
        const bool branch_taken_0x338200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338200) {
            ctx->pc = 0x3383B8u;
            goto label_3383b8;
        }
    }
    ctx->pc = 0x338208u;
label_338208:
    // 0x338208: 0xc0ce9d4  jal         func_33A750
    ctx->pc = 0x338208u;
    SET_GPR_U32(ctx, 31, 0x338210u);
    ctx->pc = 0x33A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A750u, 0x338208u, 0x338210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338210u;
label_338210:
    // 0x338210: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x338210u;
    {
        const bool branch_taken_0x338210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338210) {
            ctx->pc = 0x338258u;
            goto label_338258;
        }
    }
    ctx->pc = 0x338218u;
    // 0x338218: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x338218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33821c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x33821cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x338220: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x338220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x338224: 0x2484fe70  addiu       $a0, $a0, -0x190
    ctx->pc = 0x338224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966896));
    // 0x338228: 0xac40e7e8  sw          $zero, -0x1818($v0)
    ctx->pc = 0x338228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961128), GPR_U32(ctx, 0));
    // 0x33822c: 0x24a54b90  addiu       $a1, $a1, 0x4B90
    ctx->pc = 0x33822cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19344));
    // 0x338230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x338230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338234: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x338234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338238: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x338238u;
    SET_GPR_U32(ctx, 31, 0x338240u);
    ctx->pc = 0x33823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338238u;
    // 0x33823c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x338238u, 0x338240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338240u;
label_338240:
    // 0x338240: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x338240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x338244: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x338244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x338248: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x338248u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
    // 0x33824c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33824cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x338250: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x338250u;
    {
        const bool branch_taken_0x338250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338250u;
        // 0x338254: 0xa060e810  sb          $zero, -0x17F0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338250) {
            ctx->pc = 0x3383B8u;
            goto label_3383b8;
        }
    }
    ctx->pc = 0x338258u;
label_338258:
    // 0x338258: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x338258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33825c: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x33825cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x338260: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x338260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x338264: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x338264u;
    {
        const bool branch_taken_0x338264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x338264) {
            ctx->pc = 0x3383B8u;
            goto label_3383b8;
        }
    }
    ctx->pc = 0x33826Cu;
    // 0x33826c: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x33826cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x338270: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x338270u;
    {
        const bool branch_taken_0x338270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x338270) {
            ctx->pc = 0x3383B8u;
            goto label_3383b8;
        }
    }
    ctx->pc = 0x338278u;
    // 0x338278: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x338278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33827c: 0xc0ce888  jal         func_33A220
    ctx->pc = 0x33827Cu;
    SET_GPR_U32(ctx, 31, 0x338284u);
    ctx->pc = 0x338280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33827Cu;
    // 0x338280: 0xa040e810  sb          $zero, -0x17F0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A220u, 0x33827Cu, 0x338284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338284u;
label_338284:
    // 0x338284: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x338284u;
    {
        const bool branch_taken_0x338284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338284) {
            ctx->pc = 0x3383B8u;
            goto label_3383b8;
        }
    }
    ctx->pc = 0x33828Cu;
    // 0x33828c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x33828Cu;
    {
        const bool branch_taken_0x33828c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33828c) {
            ctx->pc = 0x3383B8u;
            goto label_3383b8;
        }
    }
    ctx->pc = 0x338294u;
label_338294:
    // 0x338294: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x338294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x338298: 0x9063e810  lbu         $v1, -0x17F0($v1)
    ctx->pc = 0x338298u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33829c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x33829cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3382a0: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x3382A0u;
    {
        const bool branch_taken_0x3382a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3382a0) {
            ctx->pc = 0x3383B8u;
            goto label_3383b8;
        }
    }
    ctx->pc = 0x3382A8u;
    // 0x3382a8: 0xc0ce944  jal         func_33A510
    ctx->pc = 0x3382A8u;
    SET_GPR_U32(ctx, 31, 0x3382B0u);
    ctx->pc = 0x33A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A510u, 0x3382A8u, 0x3382B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3382B0u;
label_3382b0:
    // 0x3382b0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3382b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3382b4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3382B4u;
    {
        const bool branch_taken_0x3382b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3382B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3382B4u;
        // 0x3382b8: 0xa060e818  sb          $zero, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3382b4) {
            ctx->pc = 0x3383B8u;
            goto label_3383b8;
        }
    }
    ctx->pc = 0x3382BCu;
label_3382bc:
    // 0x3382bc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3382bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3382c0: 0x9063e810  lbu         $v1, -0x17F0($v1)
    ctx->pc = 0x3382c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x3382c4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3382c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3382c8: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x3382C8u;
    {
        const bool branch_taken_0x3382c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3382c8) {
            ctx->pc = 0x3383B8u;
            goto label_3383b8;
        }
    }
    ctx->pc = 0x3382D0u;
    // 0x3382d0: 0xc0ce8a4  jal         func_33A290
    ctx->pc = 0x3382D0u;
    SET_GPR_U32(ctx, 31, 0x3382D8u);
    ctx->pc = 0x33A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A290u, 0x3382D0u, 0x3382D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3382D8u;
label_3382d8:
    // 0x3382d8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3382d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3382dc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3382DCu;
    {
        const bool branch_taken_0x3382dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3382E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3382DCu;
        // 0x3382e0: 0xa060e818  sb          $zero, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3382dc) {
            ctx->pc = 0x3383B8u;
            goto label_3383b8;
        }
    }
    ctx->pc = 0x3382E4u;
label_3382e4:
    // 0x3382e4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3382e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3382e8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3382e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3382ec: 0x8c85e7d0  lw          $a1, -0x1830($a0)
    ctx->pc = 0x3382ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
    // 0x3382f0: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3382f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3382f4: 0x28a1001f  slti        $at, $a1, 0x1F
    ctx->pc = 0x3382f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x3382f8: 0x1420002f  bnez        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x3382F8u;
    {
        const bool branch_taken_0x3382f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3382FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3382F8u;
        // 0x3382fc: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3382f8) {
            ctx->pc = 0x3383B8u;
            goto label_3383b8;
        }
    }
    ctx->pc = 0x338300u;
    // 0x338300: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x338300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x338304: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x338304u;
    SET_GPR_U32(ctx, 31, 0x33830Cu);
    ctx->pc = 0x338308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338304u;
    // 0x338308: 0x24843300  addiu       $a0, $a0, 0x3300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x338304u, 0x33830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33830Cu;
label_33830c:
    // 0x33830c: 0xc0cc0bc  jal         func_3302F0
    ctx->pc = 0x33830Cu;
    SET_GPR_U32(ctx, 31, 0x338314u);
    ctx->pc = 0x3302F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302F0u, 0x33830Cu, 0x338314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338314u;
label_338314:
    // 0x338314: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x338314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x338318: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x338318u;
    {
        const bool branch_taken_0x338318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338318u;
        // 0x33831c: 0xa060e818  sb          $zero, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338318) {
            ctx->pc = 0x3383B8u;
            goto label_3383b8;
        }
    }
    ctx->pc = 0x338320u;
label_338320:
    // 0x338320: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x338320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x338324: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x338324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x338328: 0x8c85e7d0  lw          $a1, -0x1830($a0)
    ctx->pc = 0x338328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
    // 0x33832c: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x33832cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x338330: 0x28a1001f  slti        $at, $a1, 0x1F
    ctx->pc = 0x338330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x338334: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x338334u;
    {
        const bool branch_taken_0x338334 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x338338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338334u;
        // 0x338338: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338334) {
            ctx->pc = 0x3383B8u;
            goto label_3383b8;
        }
    }
    ctx->pc = 0x33833Cu;
    // 0x33833c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33833cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x338340: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x338340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x338344: 0x2484c9c0  addiu       $a0, $a0, -0x3640
    ctx->pc = 0x338344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953408));
    // 0x338348: 0x24a54b90  addiu       $a1, $a1, 0x4B90
    ctx->pc = 0x338348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19344));
    // 0x33834c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33834cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338350: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x338350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338354: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x338354u;
    SET_GPR_U32(ctx, 31, 0x33835Cu);
    ctx->pc = 0x338358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338354u;
    // 0x338358: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x338354u, 0x33835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33835Cu;
label_33835c:
    // 0x33835c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33835cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x338360: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x338360u;
    SET_GPR_U32(ctx, 31, 0x338368u);
    ctx->pc = 0x338364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338360u;
    // 0x338364: 0x2484c510  addiu       $a0, $a0, -0x3AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x338360u, 0x338368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338368u;
label_338368:
    // 0x338368: 0xc0cc0bc  jal         func_3302F0
    ctx->pc = 0x338368u;
    SET_GPR_U32(ctx, 31, 0x338370u);
    ctx->pc = 0x3302F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302F0u, 0x338368u, 0x338370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338370u;
label_338370:
    // 0x338370: 0xc0cee84  jal         func_33BA10
    ctx->pc = 0x338370u;
    SET_GPR_U32(ctx, 31, 0x338378u);
    ctx->pc = 0x33BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA10u, 0x338370u, 0x338378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338378u;
label_338378:
    // 0x338378: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x338378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33837c: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x33837Cu;
    SET_GPR_U32(ctx, 31, 0x338384u);
    ctx->pc = 0x338380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33837Cu;
    // 0x338380: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x33837Cu, 0x338384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338384u;
label_338384:
    // 0x338384: 0xc0cf324  jal         func_33CC90
    ctx->pc = 0x338384u;
    SET_GPR_U32(ctx, 31, 0x33838Cu);
    ctx->pc = 0x338388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338384u;
    // 0x338388: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CC90u, 0x338384u, 0x33838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33838Cu;
label_33838c:
    // 0x33838c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33838cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338390: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x338390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x338394: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x338394u;
    {
        const bool branch_taken_0x338394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338394u;
        // 0x338398: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338394) {
            ctx->pc = 0x3383B8u;
            goto label_3383b8;
        }
    }
    ctx->pc = 0x33839Cu;
label_33839c:
    // 0x33839c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33839cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3383a0: 0x9063e810  lbu         $v1, -0x17F0($v1)
    ctx->pc = 0x3383a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x3383a4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3383a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3383a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3383A8u;
    {
        const bool branch_taken_0x3383a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3383a8) {
            ctx->pc = 0x3383B8u;
            goto label_3383b8;
        }
    }
    ctx->pc = 0x3383B0u;
    // 0x3383b0: 0xc0ce888  jal         func_33A220
    ctx->pc = 0x3383B0u;
    SET_GPR_U32(ctx, 31, 0x3383B8u);
    ctx->pc = 0x33A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A220u, 0x3383B0u, 0x3383B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3383B8u;
label_3383b8:
    // 0x3383b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3383b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3383bc:
    // 0x3383bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3383bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3383c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3383C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3383C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383C0u;
        // 0x3383c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3383C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3383C8u;
    // 0x3383c8: 0x0  nop
    ctx->pc = 0x3383c8u;
    // NOP
    // 0x3383cc: 0x0  nop
    ctx->pc = 0x3383ccu;
    // NOP
    // 0x3383d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3383d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3383d4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3383d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3383d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3383d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3383dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3383dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3383e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3383e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3383e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3383e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3383e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3383e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3383ec: 0x9042b240  lbu         $v0, -0x4DC0($v0)
    ctx->pc = 0x3383ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x3383f0: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3383F0u;
    {
        const bool branch_taken_0x3383f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3383F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383F0u;
        // 0x3383f4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3383f0) {
            ctx->pc = 0x338414u;
            goto label_338414;
        }
    }
    ctx->pc = 0x3383F8u;
    // 0x3383f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3383f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3383fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3383fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338400: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x338400u;
    SET_GPR_U32(ctx, 31, 0x338408u);
    ctx->pc = 0x338404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338400u;
    // 0x338404: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x338400u, 0x338408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338408u;
label_338408:
    // 0x338408: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x338408u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33840c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33840Cu;
    {
        const bool branch_taken_0x33840c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33840Cu;
        // 0x338410: 0x64110003  daddiu      $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33840c) {
            ctx->pc = 0x33843Cu;
            goto label_33843c;
        }
    }
    ctx->pc = 0x338414u;
label_338414:
    // 0x338414: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x338414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x338418: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x338418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33841c: 0x90449748  lbu         $a0, -0x68B8($v0)
    ctx->pc = 0x33841cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940488)));
    // 0x338420: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x338420u;
    SET_GPR_U32(ctx, 31, 0x338428u);
    ctx->pc = 0x338424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338420u;
    // 0x338424: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x338420u, 0x338428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338428u;
label_338428:
    // 0x338428: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x338428u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33842c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33842cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x338430: 0x90429748  lbu         $v0, -0x68B8($v0)
    ctx->pc = 0x338430u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940488)));
    // 0x338434: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x338434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x338438: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x338438u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33843c:
    // 0x33843c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33843cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x338440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x338440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338444: 0x90449748  lbu         $a0, -0x68B8($v0)
    ctx->pc = 0x338444u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940488)));
    // 0x338448: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x338448u;
    SET_GPR_U32(ctx, 31, 0x338450u);
    ctx->pc = 0x33844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338448u;
    // 0x33844c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x338448u, 0x338450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338450u;
label_338450:
    // 0x338450: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x338450u;
    {
        const bool branch_taken_0x338450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338450) {
            ctx->pc = 0x338454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338450u;
            // 0x338454: 0x3210ffff  andi        $s0, $s0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x338470u;
            goto label_338470;
        }
    }
    ctx->pc = 0x338458u;
    // 0x338458: 0xc055728  jal         func_155CA0
    ctx->pc = 0x338458u;
    SET_GPR_U32(ctx, 31, 0x338460u);
    ctx->pc = 0x33845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338458u;
    // 0x33845c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x338458u, 0x338460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338460u;
label_338460:
    // 0x338460: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x338460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_338464:
    // 0x338464: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x338464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x338468: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x338468u;
    {
        const bool branch_taken_0x338468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338468u;
        // 0x33846c: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338468) {
            ctx->pc = 0x338B60u;
            goto label_338b60;
        }
    }
    ctx->pc = 0x338470u;
label_338470:
    // 0x338470: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x338470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x338474: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x338474u;
    {
        const bool branch_taken_0x338474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338474) {
            ctx->pc = 0x338490u;
            goto label_338490;
        }
    }
    ctx->pc = 0x33847Cu;
    // 0x33847c: 0xc0cdb84  jal         func_336E10
    ctx->pc = 0x33847Cu;
    SET_GPR_U32(ctx, 31, 0x338484u);
    ctx->pc = 0x336E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336E10u, 0x33847Cu, 0x338484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338484u;
label_338484:
    // 0x338484: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x338484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x338488: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x338488u;
    SET_GPR_U32(ctx, 31, 0x338490u);
    ctx->pc = 0x33848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338488u;
    // 0x33848c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x338488u, 0x338490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338490u;
label_338490:
    // 0x338490: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x338490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x338494: 0x8c42e8f0  lw          $v0, -0x1710($v0)
    ctx->pc = 0x338494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
    // 0x338498: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x338498u;
    {
        const bool branch_taken_0x338498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338498) {
            ctx->pc = 0x33849Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338498u;
            // 0x33849c: 0x2263c  dsll32      $a0, $v0, 24 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3384E4u;
            goto label_3384e4;
        }
    }
    ctx->pc = 0x3384A0u;
    // 0x3384a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3384a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3384a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3384a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3384a8: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x3384A8u;
    SET_GPR_U32(ctx, 31, 0x3384B0u);
    ctx->pc = 0x3384ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3384A8u;
    // 0x3384ac: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x3384A8u, 0x3384B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3384B0u;
label_3384b0:
    // 0x3384b0: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3384B0u;
    {
        const bool branch_taken_0x3384b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3384b0) {
            ctx->pc = 0x3384B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3384B0u;
            // 0x3384b4: 0x320200a0  andi        $v0, $s0, 0xA0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33850Cu;
            goto label_33850c;
        }
    }
    ctx->pc = 0x3384B8u;
    // 0x3384b8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3384b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3384bc: 0x11363c  dsll32      $a2, $s1, 24
    ctx->pc = 0x3384bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 24));
    // 0x3384c0: 0x8044e8f0  lb          $a0, -0x1710($v0)
    ctx->pc = 0x3384c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961392)));
    // 0x3384c4: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x3384c4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x3384c8: 0xc0cd978  jal         func_3365E0
    ctx->pc = 0x3384C8u;
    SET_GPR_U32(ctx, 31, 0x3384D0u);
    ctx->pc = 0x3384CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3384C8u;
    // 0x3384cc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365E0u, 0x3384C8u, 0x3384D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3384D0u;
label_3384d0:
    // 0x3384d0: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3384d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3384d4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3384d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3384d8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3384d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3384dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3384DCu;
    {
        const bool branch_taken_0x3384dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3384E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384DCu;
        // 0x3384e0: 0xac43e8f0  sw          $v1, -0x1710($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961392), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3384dc) {
            ctx->pc = 0x338508u;
            goto label_338508;
        }
    }
    ctx->pc = 0x3384E4u;
label_3384e4:
    // 0x3384e4: 0x11363c  dsll32      $a2, $s1, 24
    ctx->pc = 0x3384e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 24));
    // 0x3384e8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3384e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x3384ec: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x3384ecu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x3384f0: 0xc0cd978  jal         func_3365E0
    ctx->pc = 0x3384F0u;
    SET_GPR_U32(ctx, 31, 0x3384F8u);
    ctx->pc = 0x3384F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3384F0u;
    // 0x3384f4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365E0u, 0x3384F0u, 0x3384F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3384F8u;
label_3384f8:
    // 0x3384f8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3384f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3384fc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3384fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x338500: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x338500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x338504: 0xac43e8f0  sw          $v1, -0x1710($v0)
    ctx->pc = 0x338504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961392), GPR_U32(ctx, 3));
label_338508:
    // 0x338508: 0x320200a0  andi        $v0, $s0, 0xA0
    ctx->pc = 0x338508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
label_33850c:
    // 0x33850c: 0x104000f7  beqz        $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x33850Cu;
    {
        const bool branch_taken_0x33850c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33850c) {
            ctx->pc = 0x3388ECu;
            goto label_3388ec;
        }
    }
    ctx->pc = 0x338514u;
    // 0x338514: 0x32020050  andi        $v0, $s0, 0x50
    ctx->pc = 0x338514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)80);
    // 0x338518: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x338518u;
    {
        const bool branch_taken_0x338518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338518) {
            ctx->pc = 0x3388ECu;
            goto label_3388ec;
        }
    }
    ctx->pc = 0x338520u;
    // 0x338520: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x338520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x338524: 0x8c42e8f0  lw          $v0, -0x1710($v0)
    ctx->pc = 0x338524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
    // 0x338528: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x338528u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x33852c: 0x102000eb  beqz        $at, . + 4 + (0xEB << 2)
    ctx->pc = 0x33852Cu;
    {
        const bool branch_taken_0x33852c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33852c) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x338534u;
    // 0x338534: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x338534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x338538: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x338538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33853c: 0x24634ca0  addiu       $v1, $v1, 0x4CA0
    ctx->pc = 0x33853cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19616));
    // 0x338540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338544: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x338544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338548: 0x400008  jr          $v0
    ctx->pc = 0x338548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x338550u: goto label_338550;
            case 0x338574u: goto label_338574;
            case 0x3385B8u: goto label_3385b8;
            case 0x338658u: goto label_338658;
            case 0x3386ACu: goto label_3386ac;
            case 0x338770u: goto label_338770;
            case 0x338794u: goto label_338794;
            case 0x3387B8u: goto label_3387b8;
            case 0x3387F0u: goto label_3387f0;
            case 0x338814u: goto label_338814;
            case 0x3388DCu: goto label_3388dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338548u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x338550u;
label_338550:
    // 0x338550: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338554: 0x11363c  dsll32      $a2, $s1, 24
    ctx->pc = 0x338554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 24));
    // 0x338558: 0x8044b240  lb          $a0, -0x4DC0($v0)
    ctx->pc = 0x338558u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x33855c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33855cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x338560: 0xc0cd9b4  jal         func_3366D0
    ctx->pc = 0x338560u;
    SET_GPR_U32(ctx, 31, 0x338568u);
    ctx->pc = 0x338564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338560u;
    // 0x338564: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3366D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3366D0u, 0x338560u, 0x338568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338568u;
label_338568:
    // 0x338568: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x338568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33856c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x33856Cu;
    {
        const bool branch_taken_0x33856c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33856Cu;
        // 0x338570: 0xa062b240  sb          $v0, -0x4DC0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947392), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33856c) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x338574u;
label_338574:
    // 0x338574: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338578: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x338578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33857c: 0x9044b240  lbu         $a0, -0x4DC0($v0)
    ctx->pc = 0x33857cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x338580: 0x108300d6  beq         $a0, $v1, . + 4 + (0xD6 << 2)
    ctx->pc = 0x338580u;
    {
        const bool branch_taken_0x338580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x338580) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x338588u;
    // 0x338588: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x338588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33858c: 0x108200d3  beq         $a0, $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x33858Cu;
    {
        const bool branch_taken_0x33858c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x33858c) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x338594u;
    // 0x338594: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338598: 0x11363c  dsll32      $a2, $s1, 24
    ctx->pc = 0x338598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 24));
    // 0x33859c: 0x8044b241  lb          $a0, -0x4DBF($v0)
    ctx->pc = 0x33859cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x3385a0: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x3385a0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x3385a4: 0xc0cd9b4  jal         func_3366D0
    ctx->pc = 0x3385A4u;
    SET_GPR_U32(ctx, 31, 0x3385ACu);
    ctx->pc = 0x3385A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3385A4u;
    // 0x3385a8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3366D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3366D0u, 0x3385A4u, 0x3385ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3385ACu;
label_3385ac:
    // 0x3385ac: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x3385acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3385b0: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x3385B0u;
    {
        const bool branch_taken_0x3385b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3385B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385B0u;
        // 0x3385b4: 0xa062b241  sb          $v0, -0x4DBF($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947393), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3385b0) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x3385B8u;
label_3385b8:
    // 0x3385b8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3385b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3385bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3385bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3385c0: 0x9044b240  lbu         $a0, -0x4DC0($v0)
    ctx->pc = 0x3385c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x3385c4: 0x108300c5  beq         $a0, $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x3385C4u;
    {
        const bool branch_taken_0x3385c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3385c4) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x3385CCu;
    // 0x3385cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3385ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3385d0: 0x108200c2  beq         $a0, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x3385D0u;
    {
        const bool branch_taken_0x3385d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3385d0) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x3385D8u;
    // 0x3385d8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3385d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3385dc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3385dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3385e0: 0x9042b241  lbu         $v0, -0x4DBF($v0)
    ctx->pc = 0x3385e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x3385e4: 0x104300bd  beq         $v0, $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x3385E4u;
    {
        const bool branch_taken_0x3385e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3385e4) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x3385ECu;
    // 0x3385ec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3385ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3385f0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3385f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3385f4: 0x24422e90  addiu       $v0, $v0, 0x2E90
    ctx->pc = 0x3385f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11920));
    // 0x3385f8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3385f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3385fc: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3385fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338600: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x338600u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338604: 0x9045b242  lbu         $a1, -0x4DBE($v0)
    ctx->pc = 0x338604u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947394)));
    // 0x338608: 0xc0cdb94  jal         func_336E50
    ctx->pc = 0x338608u;
    SET_GPR_U32(ctx, 31, 0x338610u);
    ctx->pc = 0x33860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338608u;
    // 0x33860c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336E50u, 0x338608u, 0x338610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338610u;
label_338610:
    // 0x338610: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x338610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x338614: 0x11363c  dsll32      $a2, $s1, 24
    ctx->pc = 0x338614u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 24));
    // 0x338618: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x338618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33861c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33861cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x338620: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338624: 0x9043b241  lbu         $v1, -0x4DBF($v0)
    ctx->pc = 0x338624u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x338628: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x338628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x33862c: 0x24422ec0  addiu       $v0, $v0, 0x2EC0
    ctx->pc = 0x33862cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11968));
    // 0x338630: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338634: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x338634u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338638: 0xc0cd9b4  jal         func_3366D0
    ctx->pc = 0x338638u;
    SET_GPR_U32(ctx, 31, 0x338640u);
    ctx->pc = 0x33863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338638u;
    // 0x33863c: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3366D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3366D0u, 0x338638u, 0x338640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338640u;
label_338640:
    // 0x338640: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x338640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x338644: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x338644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x338648: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33864c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x33864cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338650: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x338650u;
    {
        const bool branch_taken_0x338650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338650u;
        // 0x338654: 0xa043b242  sb          $v1, -0x4DBE($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294947394), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338650) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x338658u;
label_338658:
    // 0x338658: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33865c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33865cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x338660: 0x9042b240  lbu         $v0, -0x4DC0($v0)
    ctx->pc = 0x338660u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x338664: 0x1043009d  beq         $v0, $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x338664u;
    {
        const bool branch_taken_0x338664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x338664) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x33866Cu;
    // 0x33866c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33866Cu;
    {
        const bool branch_taken_0x33866c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33866c) {
            ctx->pc = 0x338688u;
            goto label_338688;
        }
    }
    ctx->pc = 0x338674u;
    // 0x338674: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338678: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x338678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x33867c: 0x9042b241  lbu         $v0, -0x4DBF($v0)
    ctx->pc = 0x33867cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x338680: 0x10430096  beq         $v0, $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x338680u;
    {
        const bool branch_taken_0x338680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x338680) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x338688u;
label_338688:
    // 0x338688: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33868c: 0x11363c  dsll32      $a2, $s1, 24
    ctx->pc = 0x33868cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 24));
    // 0x338690: 0x8044b243  lb          $a0, -0x4DBD($v0)
    ctx->pc = 0x338690u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947395)));
    // 0x338694: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x338694u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x338698: 0xc0cd9b4  jal         func_3366D0
    ctx->pc = 0x338698u;
    SET_GPR_U32(ctx, 31, 0x3386A0u);
    ctx->pc = 0x33869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338698u;
    // 0x33869c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3366D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3366D0u, 0x338698u, 0x3386A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3386A0u;
label_3386a0:
    // 0x3386a0: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x3386a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3386a4: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x3386A4u;
    {
        const bool branch_taken_0x3386a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3386A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3386A4u;
        // 0x3386a8: 0xa062b243  sb          $v0, -0x4DBD($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947395), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3386a4) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x3386ACu;
label_3386ac:
    // 0x3386ac: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3386acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3386b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3386b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3386b4: 0x9044b240  lbu         $a0, -0x4DC0($v0)
    ctx->pc = 0x3386b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x3386b8: 0x10830088  beq         $a0, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x3386B8u;
    {
        const bool branch_taken_0x3386b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3386b8) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x3386C0u;
    // 0x3386c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3386c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3386c4: 0x10820085  beq         $a0, $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x3386C4u;
    {
        const bool branch_taken_0x3386c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3386c4) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x3386CCu;
    // 0x3386cc: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3386ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3386d0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3386d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3386d4: 0x9044b241  lbu         $a0, -0x4DBF($v0)
    ctx->pc = 0x3386d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x3386d8: 0x10830080  beq         $a0, $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x3386D8u;
    {
        const bool branch_taken_0x3386d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3386d8) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x3386E0u;
    // 0x3386e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3386e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3386e4: 0x1082007d  beq         $a0, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x3386E4u;
    {
        const bool branch_taken_0x3386e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3386e4) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x3386ECu;
    // 0x3386ec: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3386ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3386f0: 0x1082007a  beq         $a0, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x3386F0u;
    {
        const bool branch_taken_0x3386f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3386f0) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x3386F8u;
    // 0x3386f8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3386f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3386fc: 0x10820077  beq         $a0, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x3386FCu;
    {
        const bool branch_taken_0x3386fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3386fc) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x338704u;
    // 0x338704: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x338704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x338708: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x338708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33870c: 0x24422f40  addiu       $v0, $v0, 0x2F40
    ctx->pc = 0x33870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12096));
    // 0x338710: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x338710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338714: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338718: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x338718u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33871c: 0x9045b244  lbu         $a1, -0x4DBC($v0)
    ctx->pc = 0x33871cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947396)));
    // 0x338720: 0xc0cdb94  jal         func_336E50
    ctx->pc = 0x338720u;
    SET_GPR_U32(ctx, 31, 0x338728u);
    ctx->pc = 0x338724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338720u;
    // 0x338724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336E50u, 0x338720u, 0x338728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338728u;
label_338728:
    // 0x338728: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x338728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33872c: 0x11363c  dsll32      $a2, $s1, 24
    ctx->pc = 0x33872cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 24));
    // 0x338730: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x338730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x338734: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x338734u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x338738: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33873c: 0x9043b241  lbu         $v1, -0x4DBF($v0)
    ctx->pc = 0x33873cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x338740: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x338740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x338744: 0x24422f78  addiu       $v0, $v0, 0x2F78
    ctx->pc = 0x338744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12152));
    // 0x338748: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33874c: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x33874cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338750: 0xc0cd9b4  jal         func_3366D0
    ctx->pc = 0x338750u;
    SET_GPR_U32(ctx, 31, 0x338758u);
    ctx->pc = 0x338754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338750u;
    // 0x338754: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3366D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3366D0u, 0x338750u, 0x338758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338758u;
label_338758:
    // 0x338758: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x338758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33875c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33875cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x338760: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338764: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x338764u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338768: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x338768u;
    {
        const bool branch_taken_0x338768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338768u;
        // 0x33876c: 0xa043b244  sb          $v1, -0x4DBC($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294947396), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338768) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x338770u;
label_338770:
    // 0x338770: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338774: 0x11363c  dsll32      $a2, $s1, 24
    ctx->pc = 0x338774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 24));
    // 0x338778: 0x8044b245  lb          $a0, -0x4DBB($v0)
    ctx->pc = 0x338778u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947397)));
    // 0x33877c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33877cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x338780: 0xc0cd9b4  jal         func_3366D0
    ctx->pc = 0x338780u;
    SET_GPR_U32(ctx, 31, 0x338788u);
    ctx->pc = 0x338784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338780u;
    // 0x338784: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3366D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3366D0u, 0x338780u, 0x338788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338788u;
label_338788:
    // 0x338788: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x338788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33878c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x33878Cu;
    {
        const bool branch_taken_0x33878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33878Cu;
        // 0x338790: 0xa062b245  sb          $v0, -0x4DBB($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947397), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33878c) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x338794u;
label_338794:
    // 0x338794: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338798: 0x11363c  dsll32      $a2, $s1, 24
    ctx->pc = 0x338798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 24));
    // 0x33879c: 0x8044b246  lb          $a0, -0x4DBA($v0)
    ctx->pc = 0x33879cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947398)));
    // 0x3387a0: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x3387a0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x3387a4: 0xc0cd9b4  jal         func_3366D0
    ctx->pc = 0x3387A4u;
    SET_GPR_U32(ctx, 31, 0x3387ACu);
    ctx->pc = 0x3387A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3387A4u;
    // 0x3387a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3366D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3366D0u, 0x3387A4u, 0x3387ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3387ACu;
label_3387ac:
    // 0x3387ac: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x3387acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3387b0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x3387B0u;
    {
        const bool branch_taken_0x3387b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3387B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387B0u;
        // 0x3387b4: 0xa062b246  sb          $v0, -0x4DBA($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947398), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3387b0) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x3387B8u;
label_3387b8:
    // 0x3387b8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3387b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3387bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3387bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3387c0: 0x9042b245  lbu         $v0, -0x4DBB($v0)
    ctx->pc = 0x3387c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947397)));
    // 0x3387c4: 0x14430045  bne         $v0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x3387C4u;
    {
        const bool branch_taken_0x3387c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3387c4) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x3387CCu;
    // 0x3387cc: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3387ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3387d0: 0x11363c  dsll32      $a2, $s1, 24
    ctx->pc = 0x3387d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 24));
    // 0x3387d4: 0x8044b248  lb          $a0, -0x4DB8($v0)
    ctx->pc = 0x3387d4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947400)));
    // 0x3387d8: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x3387d8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x3387dc: 0xc0cd9b4  jal         func_3366D0
    ctx->pc = 0x3387DCu;
    SET_GPR_U32(ctx, 31, 0x3387E4u);
    ctx->pc = 0x3387E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3387DCu;
    // 0x3387e0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3366D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3366D0u, 0x3387DCu, 0x3387E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3387E4u;
label_3387e4:
    // 0x3387e4: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x3387e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3387e8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3387E8u;
    {
        const bool branch_taken_0x3387e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3387ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387E8u;
        // 0x3387ec: 0xa062b248  sb          $v0, -0x4DB8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947400), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3387e8) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x3387F0u;
label_3387f0:
    // 0x3387f0: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3387f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3387f4: 0x11363c  dsll32      $a2, $s1, 24
    ctx->pc = 0x3387f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 24));
    // 0x3387f8: 0x8044b249  lb          $a0, -0x4DB7($v0)
    ctx->pc = 0x3387f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947401)));
    // 0x3387fc: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x3387fcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x338800: 0xc0cd9b4  jal         func_3366D0
    ctx->pc = 0x338800u;
    SET_GPR_U32(ctx, 31, 0x338808u);
    ctx->pc = 0x338804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338800u;
    // 0x338804: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3366D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3366D0u, 0x338800u, 0x338808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338808u;
label_338808:
    // 0x338808: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x338808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33880c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x33880Cu;
    {
        const bool branch_taken_0x33880c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33880Cu;
        // 0x338810: 0xa062b249  sb          $v0, -0x4DB7($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947401), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33880c) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x338814u;
label_338814:
    // 0x338814: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338818: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x338818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33881c: 0x9042b240  lbu         $v0, -0x4DC0($v0)
    ctx->pc = 0x33881cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x338820: 0x1045002e  beq         $v0, $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x338820u;
    {
        const bool branch_taken_0x338820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x338820) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x338828u;
    // 0x338828: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33882c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x33882cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x338830: 0x9044b241  lbu         $a0, -0x4DBF($v0)
    ctx->pc = 0x338830u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x338834: 0x5483000f  bnel        $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x338834u;
    {
        const bool branch_taken_0x338834 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x338834) {
            ctx->pc = 0x338838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338834u;
            // 0x338838: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x338874u;
            goto label_338874;
        }
    }
    ctx->pc = 0x33883Cu;
    // 0x33883c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33883cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338840: 0x9042b24a  lbu         $v0, -0x4DB6($v0)
    ctx->pc = 0x338840u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947402)));
    // 0x338844: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x338844u;
    {
        const bool branch_taken_0x338844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338844) {
            ctx->pc = 0x338870u;
            goto label_338870;
        }
    }
    ctx->pc = 0x33884Cu;
    // 0x33884c: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x33884cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x338850: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x338850u;
    {
        const bool branch_taken_0x338850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338850) {
            ctx->pc = 0x338854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338850u;
            // 0x338854: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338864u;
            goto label_338864;
        }
    }
    ctx->pc = 0x338858u;
    // 0x338858: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33885c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x33885Cu;
    {
        const bool branch_taken_0x33885c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33885Cu;
        // 0x338860: 0xa045b24a  sb          $a1, -0x4DB6($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294947402), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33885c) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x338864u;
label_338864:
    // 0x338864: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338868: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x338868u;
    {
        const bool branch_taken_0x338868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338868u;
        // 0x33886c: 0xa043b24a  sb          $v1, -0x4DB6($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294947402), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338868) {
            ctx->pc = 0x3388DCu;
            goto label_3388dc;
        }
    }
    ctx->pc = 0x338870u;
label_338870:
    // 0x338870: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x338870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_338874:
    // 0x338874: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x338874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x338878: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x338878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33887c: 0x24632ef0  addiu       $v1, $v1, 0x2EF0
    ctx->pc = 0x33887cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12016));
    // 0x338880: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x338880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x338884: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338888: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x338888u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33888c: 0x9045b24a  lbu         $a1, -0x4DB6($v0)
    ctx->pc = 0x33888cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947402)));
    // 0x338890: 0xc0cdb94  jal         func_336E50
    ctx->pc = 0x338890u;
    SET_GPR_U32(ctx, 31, 0x338898u);
    ctx->pc = 0x338894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338890u;
    // 0x338894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336E50u, 0x338890u, 0x338898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338898u;
label_338898:
    // 0x338898: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x338898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33889c: 0x11363c  dsll32      $a2, $s1, 24
    ctx->pc = 0x33889cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 24));
    // 0x3388a0: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x3388a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3388a4: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x3388a4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x3388a8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3388a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3388ac: 0x9043b241  lbu         $v1, -0x4DBF($v0)
    ctx->pc = 0x3388acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x3388b0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3388b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3388b4: 0x24422f20  addiu       $v0, $v0, 0x2F20
    ctx->pc = 0x3388b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12064));
    // 0x3388b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3388b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3388bc: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x3388bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3388c0: 0xc0cd9b4  jal         func_3366D0
    ctx->pc = 0x3388C0u;
    SET_GPR_U32(ctx, 31, 0x3388C8u);
    ctx->pc = 0x3388C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3388C0u;
    // 0x3388c4: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3366D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3366D0u, 0x3388C0u, 0x3388C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3388C8u;
label_3388c8:
    // 0x3388c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3388c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3388cc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3388ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3388d0: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3388d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3388d4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3388d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3388d8: 0xa043b24a  sb          $v1, -0x4DB6($v0)
    ctx->pc = 0x3388d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294947402), (uint8_t)GPR_U32(ctx, 3));
label_3388dc:
    // 0x3388dc: 0xc0ce7fc  jal         func_339FF0
    ctx->pc = 0x3388DCu;
    SET_GPR_U32(ctx, 31, 0x3388E4u);
    ctx->pc = 0x339FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339FF0u, 0x3388DCu, 0x3388E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3388E4u;
label_3388e4:
    // 0x3388e4: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x3388E4u;
    {
        const bool branch_taken_0x3388e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3388e4) {
            ctx->pc = 0x338B58u;
            goto label_338b58;
        }
    }
    ctx->pc = 0x3388ECu;
label_3388ec:
    // 0x3388ec: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3388ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3388f0: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x3388f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3388f4: 0x90429748  lbu         $v0, -0x68B8($v0)
    ctx->pc = 0x3388f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940488)));
    // 0x3388f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3388f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3388fc: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x3388fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x338900: 0xc0cda84  jal         func_336A10
    ctx->pc = 0x338900u;
    SET_GPR_U32(ctx, 31, 0x338908u);
    ctx->pc = 0x338904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338900u;
    // 0x338904: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x338900u, 0x338908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338908u;
label_338908:
    // 0x338908: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x338908u;
    {
        const bool branch_taken_0x338908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338908) {
            ctx->pc = 0x33890Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338908u;
            // 0x33890c: 0x112e3c  dsll32      $a1, $s1, 24 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33895Cu;
            goto label_33895c;
        }
    }
    ctx->pc = 0x338910u;
    // 0x338910: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x338910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x338914: 0x8c42e8f0  lw          $v0, -0x1710($v0)
    ctx->pc = 0x338914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
    // 0x338918: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x338918u;
    {
        const bool branch_taken_0x338918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338918) {
            ctx->pc = 0x338958u;
            goto label_338958;
        }
    }
    ctx->pc = 0x338920u;
    // 0x338920: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x338920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x338924: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x338924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x338928: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x338928u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x33892c: 0x1443008a  bne         $v0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x33892Cu;
    {
        const bool branch_taken_0x33892c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33892c) {
            ctx->pc = 0x338B58u;
            goto label_338b58;
        }
    }
    ctx->pc = 0x338934u;
    // 0x338934: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x338934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x338938: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x338938u;
    SET_GPR_U32(ctx, 31, 0x338940u);
    ctx->pc = 0x33893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338938u;
    // 0x33893c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x338938u, 0x338940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338940u;
label_338940:
    // 0x338940: 0xc055728  jal         func_155CA0
    ctx->pc = 0x338940u;
    SET_GPR_U32(ctx, 31, 0x338948u);
    ctx->pc = 0x338944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338940u;
    // 0x338944: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x338940u, 0x338948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338948u;
label_338948:
    // 0x338948: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x338948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33894c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33894cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x338950: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x338950u;
    {
        const bool branch_taken_0x338950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338950u;
        // 0x338954: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338950) {
            ctx->pc = 0x338B60u;
            goto label_338b60;
        }
    }
    ctx->pc = 0x338958u;
label_338958:
    // 0x338958: 0x112e3c  dsll32      $a1, $s1, 24
    ctx->pc = 0x338958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 24));
label_33895c:
    // 0x33895c: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x33895cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x338960: 0xc0cda68  jal         func_3369A0
    ctx->pc = 0x338960u;
    SET_GPR_U32(ctx, 31, 0x338968u);
    ctx->pc = 0x338964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338960u;
    // 0x338964: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3369A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3369A0u, 0x338960u, 0x338968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338968u;
label_338968:
    // 0x338968: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x338968u;
    {
        const bool branch_taken_0x338968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338968) {
            ctx->pc = 0x338B58u;
            goto label_338b58;
        }
    }
    ctx->pc = 0x338970u;
    // 0x338970: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x338970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x338974: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x338974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x338978: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x338978u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x33897c: 0x14430076  bne         $v0, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x33897Cu;
    {
        const bool branch_taken_0x33897c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33897c) {
            ctx->pc = 0x338B58u;
            goto label_338b58;
        }
    }
    ctx->pc = 0x338984u;
    // 0x338984: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x338984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x338988: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x338988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x33898c: 0x8c44e8f0  lw          $a0, -0x1710($v0)
    ctx->pc = 0x33898cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
    // 0x338990: 0x5083002a  beql        $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x338990u;
    {
        const bool branch_taken_0x338990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x338990) {
            ctx->pc = 0x338994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338990u;
            // 0x338994: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338A3Cu;
            goto label_338a3c;
        }
    }
    ctx->pc = 0x338998u;
    // 0x338998: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x338998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x33899c: 0x5082001d  beql        $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x33899Cu;
    {
        const bool branch_taken_0x33899c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x33899c) {
            ctx->pc = 0x3389A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33899Cu;
            // 0x3389a0: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338A14u;
            goto label_338a14;
        }
    }
    ctx->pc = 0x3389A4u;
    // 0x3389a4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3389a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3389a8: 0x50820010  beql        $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3389A8u;
    {
        const bool branch_taken_0x3389a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3389a8) {
            ctx->pc = 0x3389ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3389A8u;
            // 0x3389ac: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3389ECu;
            goto label_3389ec;
        }
    }
    ctx->pc = 0x3389B0u;
    // 0x3389b0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3389b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3389b4: 0x50820003  beql        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3389B4u;
    {
        const bool branch_taken_0x3389b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3389b4) {
            ctx->pc = 0x3389B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3389B4u;
            // 0x3389b8: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3389C4u;
            goto label_3389c4;
        }
    }
    ctx->pc = 0x3389BCu;
    // 0x3389bc: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x3389BCu;
    {
        const bool branch_taken_0x3389bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3389bc) {
            ctx->pc = 0x338B58u;
            goto label_338b58;
        }
    }
    ctx->pc = 0x3389C4u;
label_3389c4:
    // 0x3389c4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3389C4u;
    SET_GPR_U32(ctx, 31, 0x3389CCu);
    ctx->pc = 0x3389C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3389C4u;
    // 0x3389c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3389C4u, 0x3389CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3389CCu;
label_3389cc:
    // 0x3389cc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3389ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3389d0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3389d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3389d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3389d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3389d8: 0xac40e8e8  sw          $zero, -0x1718($v0)
    ctx->pc = 0x3389d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 0));
    // 0x3389dc: 0xc055768  jal         func_155DA0
    ctx->pc = 0x3389DCu;
    SET_GPR_U32(ctx, 31, 0x3389E4u);
    ctx->pc = 0x3389E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3389DCu;
    // 0x3389e0: 0x24849a90  addiu       $a0, $a0, -0x6570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x3389DCu, 0x3389E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3389E4u;
label_3389e4:
    // 0x3389e4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x3389E4u;
    {
        const bool branch_taken_0x3389e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3389e4) {
            ctx->pc = 0x338B58u;
            goto label_338b58;
        }
    }
    ctx->pc = 0x3389ECu;
label_3389ec:
    // 0x3389ec: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3389ECu;
    SET_GPR_U32(ctx, 31, 0x3389F4u);
    ctx->pc = 0x3389F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3389ECu;
    // 0x3389f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3389ECu, 0x3389F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3389F4u;
label_3389f4:
    // 0x3389f4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3389f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3389f8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3389f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3389fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3389fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a00: 0xac40e8e8  sw          $zero, -0x1718($v0)
    ctx->pc = 0x338a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 0));
    // 0x338a04: 0xc055768  jal         func_155DA0
    ctx->pc = 0x338A04u;
    SET_GPR_U32(ctx, 31, 0x338A0Cu);
    ctx->pc = 0x338A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A04u;
    // 0x338a08: 0x24849be0  addiu       $a0, $a0, -0x6420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x338A04u, 0x338A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A0Cu;
label_338a0c:
    // 0x338a0c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x338A0Cu;
    {
        const bool branch_taken_0x338a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338a0c) {
            ctx->pc = 0x338B58u;
            goto label_338b58;
        }
    }
    ctx->pc = 0x338A14u;
label_338a14:
    // 0x338a14: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x338A14u;
    SET_GPR_U32(ctx, 31, 0x338A1Cu);
    ctx->pc = 0x338A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A14u;
    // 0x338a18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x338A14u, 0x338A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A1Cu;
label_338a1c:
    // 0x338a1c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x338a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x338a20: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x338a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x338a24: 0xc0cc0bc  jal         func_3302F0
    ctx->pc = 0x338A24u;
    SET_GPR_U32(ctx, 31, 0x338A2Cu);
    ctx->pc = 0x338A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A24u;
    // 0x338a28: 0xa043e818  sb          $v1, -0x17E8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302F0u, 0x338A24u, 0x338A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A2Cu;
label_338a2c:
    // 0x338a2c: 0xc055728  jal         func_155CA0
    ctx->pc = 0x338A2Cu;
    SET_GPR_U32(ctx, 31, 0x338A34u);
    ctx->pc = 0x338A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A2Cu;
    // 0x338a30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x338A2Cu, 0x338A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A34u;
label_338a34:
    // 0x338a34: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x338A34u;
    {
        const bool branch_taken_0x338a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338a34) {
            ctx->pc = 0x338B58u;
            goto label_338b58;
        }
    }
    ctx->pc = 0x338A3Cu;
label_338a3c:
    // 0x338a3c: 0xc062810  jal         func_18A040
    ctx->pc = 0x338A3Cu;
    SET_GPR_U32(ctx, 31, 0x338A44u);
    ctx->pc = 0x18A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A040u, 0x338A3Cu, 0x338A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A44u;
label_338a44:
    // 0x338a44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x338a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a48: 0xc062810  jal         func_18A040
    ctx->pc = 0x338A48u;
    SET_GPR_U32(ctx, 31, 0x338A50u);
    ctx->pc = 0x338A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A48u;
    // 0x338a4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A040u, 0x338A48u, 0x338A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A50u;
label_338a50:
    // 0x338a50: 0x8e03048c  lw          $v1, 0x48C($s0)
    ctx->pc = 0x338a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1164)));
    // 0x338a54: 0x30636000  andi        $v1, $v1, 0x6000
    ctx->pc = 0x338a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24576);
    // 0x338a58: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x338A58u;
    {
        const bool branch_taken_0x338a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x338a58) {
            ctx->pc = 0x338B58u;
            goto label_338b58;
        }
    }
    ctx->pc = 0x338A60u;
    // 0x338a60: 0x8c43048c  lw          $v1, 0x48C($v0)
    ctx->pc = 0x338a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1164)));
    // 0x338a64: 0x30636000  andi        $v1, $v1, 0x6000
    ctx->pc = 0x338a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24576);
    // 0x338a68: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x338A68u;
    {
        const bool branch_taken_0x338a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x338a68) {
            ctx->pc = 0x338B58u;
            goto label_338b58;
        }
    }
    ctx->pc = 0x338A70u;
    // 0x338a70: 0x8e030494  lw          $v1, 0x494($s0)
    ctx->pc = 0x338a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x338a74: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x338a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x338a78: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x338a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x338a7c: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x338A7Cu;
    {
        const bool branch_taken_0x338a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x338a7c) {
            ctx->pc = 0x338B58u;
            goto label_338b58;
        }
    }
    ctx->pc = 0x338A84u;
    // 0x338a84: 0x8c420494  lw          $v0, 0x494($v0)
    ctx->pc = 0x338a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1172)));
    // 0x338a88: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x338a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x338a8c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x338A8Cu;
    {
        const bool branch_taken_0x338a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338a8c) {
            ctx->pc = 0x338B58u;
            goto label_338b58;
        }
    }
    ctx->pc = 0x338A94u;
    // 0x338a94: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x338a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x338a98: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x338A98u;
    SET_GPR_U32(ctx, 31, 0x338AA0u);
    ctx->pc = 0x338A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A98u;
    // 0x338a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x338A98u, 0x338AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338AA0u;
label_338aa0:
    // 0x338aa0: 0xc0cc0bc  jal         func_3302F0
    ctx->pc = 0x338AA0u;
    SET_GPR_U32(ctx, 31, 0x338AA8u);
    ctx->pc = 0x3302F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302F0u, 0x338AA0u, 0x338AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338AA8u;
label_338aa8:
    // 0x338aa8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x338aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x338aac: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x338aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x338ab0: 0xa043e818  sb          $v1, -0x17E8($v0)
    ctx->pc = 0x338ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
    // 0x338ab4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x338ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x338ab8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x338ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x338abc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x338abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x338ac0: 0xac40e8f0  sw          $zero, -0x1710($v0)
    ctx->pc = 0x338ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961392), GPR_U32(ctx, 0));
    // 0x338ac4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x338ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338ac8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x338ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x338acc: 0xa060e880  sb          $zero, -0x1780($v1)
    ctx->pc = 0x338accu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961280), (uint8_t)GPR_U32(ctx, 0));
    // 0x338ad0: 0xa04495c0  sb          $a0, -0x6A40($v0)
    ctx->pc = 0x338ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940096), (uint8_t)GPR_U32(ctx, 4));
    // 0x338ad4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338ad8: 0x9043b240  lbu         $v1, -0x4DC0($v0)
    ctx->pc = 0x338ad8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x338adc: 0x54650010  bnel        $v1, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x338ADCu;
    {
        const bool branch_taken_0x338adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x338adc) {
            ctx->pc = 0x338AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338ADCu;
            // 0x338ae0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338B20u;
            goto label_338b20;
        }
    }
    ctx->pc = 0x338AE4u;
    // 0x338ae4: 0xc0cda68  jal         func_3369A0
    ctx->pc = 0x338AE4u;
    SET_GPR_U32(ctx, 31, 0x338AECu);
    ctx->pc = 0x338AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338AE4u;
    // 0x338ae8: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3369A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3369A0u, 0x338AE4u, 0x338AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338AECu;
label_338aec:
    // 0x338aec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x338AECu;
    {
        const bool branch_taken_0x338aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338aec) {
            ctx->pc = 0x338AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338AECu;
            // 0x338af0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338B00u;
            goto label_338b00;
        }
    }
    ctx->pc = 0x338AF4u;
    // 0x338af4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x338af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x338af8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x338AF8u;
    {
        const bool branch_taken_0x338af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338AF8u;
        // 0x338afc: 0xa0409730  sb          $zero, -0x68D0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294940464), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338af8) {
            ctx->pc = 0x338B08u;
            goto label_338b08;
        }
    }
    ctx->pc = 0x338B00u;
label_338b00:
    // 0x338b00: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x338b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x338b04: 0xa0439730  sb          $v1, -0x68D0($v0)
    ctx->pc = 0x338b04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940464), (uint8_t)GPR_U32(ctx, 3));
label_338b08:
    // 0x338b08: 0xc0ce9e4  jal         func_33A790
    ctx->pc = 0x338B08u;
    SET_GPR_U32(ctx, 31, 0x338B10u);
    ctx->pc = 0x33A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A790u, 0x338B08u, 0x338B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338B10u;
label_338b10:
    // 0x338b10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x338b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338b14: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x338b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x338b18: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x338B18u;
    {
        const bool branch_taken_0x338b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B18u;
        // 0x338b1c: 0xa043e880  sb          $v1, -0x1780($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961280), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338b18) {
            ctx->pc = 0x338B50u;
            goto label_338b50;
        }
    }
    ctx->pc = 0x338B20u;
label_338b20:
    // 0x338b20: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x338B20u;
    {
        const bool branch_taken_0x338b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x338b20) {
            ctx->pc = 0x338B40u;
            goto label_338b40;
        }
    }
    ctx->pc = 0x338B28u;
    // 0x338b28: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338b2c: 0xc0ce9e4  jal         func_33A790
    ctx->pc = 0x338B2Cu;
    SET_GPR_U32(ctx, 31, 0x338B34u);
    ctx->pc = 0x338B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338B2Cu;
    // 0x338b30: 0xa040b240  sb          $zero, -0x4DC0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294947392), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A790u, 0x338B2Cu, 0x338B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338B34u;
label_338b34:
    // 0x338b34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x338b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x338b38: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x338b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x338b3c: 0xa043e880  sb          $v1, -0x1780($v0)
    ctx->pc = 0x338b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961280), (uint8_t)GPR_U32(ctx, 3));
label_338b40:
    // 0x338b40: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x338b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x338b44: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x338b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x338b48: 0x90639748  lbu         $v1, -0x68B8($v1)
    ctx->pc = 0x338b48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940488)));
    // 0x338b4c: 0xa0439730  sb          $v1, -0x68D0($v0)
    ctx->pc = 0x338b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940464), (uint8_t)GPR_U32(ctx, 3));
label_338b50:
    // 0x338b50: 0xc055728  jal         func_155CA0
    ctx->pc = 0x338B50u;
    SET_GPR_U32(ctx, 31, 0x338B58u);
    ctx->pc = 0x338B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338B50u;
    // 0x338b54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x338B50u, 0x338B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338B58u;
label_338b58:
    // 0x338b58: 0xc0ce4b8  jal         func_3392E0
    ctx->pc = 0x338B58u;
    SET_GPR_U32(ctx, 31, 0x338B60u);
    ctx->pc = 0x3392E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3392E0u, 0x338B58u, 0x338B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338B60u;
label_338b60:
    // 0x338b60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x338b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x338b64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x338b64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338b68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x338b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338b6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338b70: 0x3e00008  jr          $ra
    ctx->pc = 0x338B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B70u;
        // 0x338b74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338B78u;
    // 0x338b78: 0x0  nop
    ctx->pc = 0x338b78u;
    // NOP
    // 0x338b7c: 0x0  nop
    ctx->pc = 0x338b7cu;
    // NOP
    // 0x338b80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x338b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x338b84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x338b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x338b88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x338b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x338b8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x338b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_338b90:
    // 0x338b90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x338b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x338b94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x338b98: 0xc0cc088  jal         func_330220
    ctx->pc = 0x338B98u;
    SET_GPR_U32(ctx, 31, 0x338BA0u);
    ctx->pc = 0x338B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338B98u;
    // 0x338b9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330220u, 0x338B98u, 0x338BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338BA0u;
label_338ba0:
    // 0x338ba0: 0x8e130010  lw          $s3, 0x10($s0)
    ctx->pc = 0x338ba0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x338ba4: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x338ba4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x338ba8: 0x86710004  lh          $s1, 0x4($s3)
    ctx->pc = 0x338ba8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x338bac: 0x2c61001a  sltiu       $at, $v1, 0x1A
    ctx->pc = 0x338bacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x338bb0: 0x102001c2  beqz        $at, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x338BB0u;
    {
        const bool branch_taken_0x338bb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x338BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338BB0u;
        // 0x338bb4: 0x86720002  lh          $s2, 0x2($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338bb0) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x338BB8u;
    // 0x338bb8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x338bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x338bbc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x338bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x338bc0: 0x24634d00  addiu       $v1, $v1, 0x4D00
    ctx->pc = 0x338bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19712));
    // 0x338bc4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x338bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x338bc8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x338bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338bcc: 0x600008  jr          $v1
    ctx->pc = 0x338BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x338BD4u: goto label_338bd4;
            case 0x338C84u: goto label_338c84;
            case 0x338CC0u: goto label_338cc0;
            case 0x338DA0u: goto label_338da0;
            case 0x338E50u: goto label_338e50;
            case 0x338E74u: goto label_338e74;
            case 0x338EECu: goto label_338eec;
            case 0x338F54u: goto label_338f54;
            case 0x338FD8u: goto label_338fd8;
            case 0x339058u: goto label_339058;
            case 0x339124u: goto label_339124;
            case 0x339158u: goto label_339158;
            case 0x33918Cu: goto label_33918c;
            case 0x3391F0u: goto label_3391f0;
            case 0x339224u: goto label_339224;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338BCCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x338BD4u;
label_338bd4:
    // 0x338bd4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x338bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x338bd8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x338bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x338bdc: 0x2484270c  addiu       $a0, $a0, 0x270C
    ctx->pc = 0x338bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9996));
    // 0x338be0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x338be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338be4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x338be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338be8: 0x2407a824  addiu       $a3, $zero, -0x57DC
    ctx->pc = 0x338be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944804));
    // 0x338bec: 0x240a00a0  addiu       $t2, $zero, 0xA0
    ctx->pc = 0x338becu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x338bf0: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x338BF0u;
    SET_GPR_U32(ctx, 31, 0x338BF8u);
    ctx->pc = 0x338BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338BF0u;
    // 0x338bf4: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302B40u, 0x338BF0u, 0x338BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338BF8u;
label_338bf8:
    // 0x338bf8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x338bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x338bfc: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x338bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x338c00: 0x24842718  addiu       $a0, $a0, 0x2718
    ctx->pc = 0x338c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10008));
    // 0x338c04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x338c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c08: 0x2407a824  addiu       $a3, $zero, -0x57DC
    ctx->pc = 0x338c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944804));
    // 0x338c0c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x338c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x338c10: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x338c10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x338c14: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x338C14u;
    SET_GPR_U32(ctx, 31, 0x338C1Cu);
    ctx->pc = 0x338C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338C14u;
    // 0x338c18: 0x240a00a0  addiu       $t2, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302B40u, 0x338C14u, 0x338C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338C1Cu;
label_338c1c:
    // 0x338c1c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x338c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x338c20: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x338c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x338c24: 0x264500a0  addiu       $a1, $s2, 0xA0
    ctx->pc = 0x338c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x338c28: 0x24842724  addiu       $a0, $a0, 0x2724
    ctx->pc = 0x338c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10020));
    // 0x338c2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x338c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c30: 0x2407a824  addiu       $a3, $zero, -0x57DC
    ctx->pc = 0x338c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944804));
    // 0x338c34: 0x240a00a0  addiu       $t2, $zero, 0xA0
    ctx->pc = 0x338c34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x338c38: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x338C38u;
    SET_GPR_U32(ctx, 31, 0x338C40u);
    ctx->pc = 0x338C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338C38u;
    // 0x338c3c: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302B40u, 0x338C38u, 0x338C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338C40u;
label_338c40:
    // 0x338c40: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x338c40u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x338c44: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x338c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x338c48: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x338c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x338c4c: 0x24632790  addiu       $v1, $v1, 0x2790
    ctx->pc = 0x338c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10128));
    // 0x338c50: 0x24422640  addiu       $v0, $v0, 0x2640
    ctx->pc = 0x338c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9792));
    // 0x338c54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x338c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c58: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x338c58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x338c5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x338c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x338c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x338c64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x338c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338c68: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x338c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x338c6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x338c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x338c70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x338c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x338c74: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x338C74u;
    SET_GPR_U32(ctx, 31, 0x338C7Cu);
    ctx->pc = 0x338C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338C74u;
    // 0x338c78: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x338C74u, 0x338C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338C7Cu;
label_338c7c:
    // 0x338c7c: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x338C7Cu;
    {
        const bool branch_taken_0x338c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338C7Cu;
        // 0x338c80: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338c7c) {
            ctx->pc = 0x3392C0u;
            goto label_3392c0;
        }
    }
    ctx->pc = 0x338C84u;
label_338c84:
    // 0x338c84: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x338c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x338c88: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x338c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x338c8c: 0x24632790  addiu       $v1, $v1, 0x2790
    ctx->pc = 0x338c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10128));
    // 0x338c90: 0x24422640  addiu       $v0, $v0, 0x2640
    ctx->pc = 0x338c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9792));
    // 0x338c94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x338c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x338c98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x338c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x338c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338ca0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x338ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338ca4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x338ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x338ca8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x338ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x338cac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x338cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x338cb0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x338CB0u;
    SET_GPR_U32(ctx, 31, 0x338CB8u);
    ctx->pc = 0x338CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338CB0u;
    // 0x338cb4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x338CB0u, 0x338CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338CB8u;
label_338cb8:
    // 0x338cb8: 0x10000180  b           . + 4 + (0x180 << 2)
    ctx->pc = 0x338CB8u;
    {
        const bool branch_taken_0x338cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338cb8) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x338CC0u;
label_338cc0:
    // 0x338cc0: 0xc062810  jal         func_18A040
    ctx->pc = 0x338CC0u;
    SET_GPR_U32(ctx, 31, 0x338CC8u);
    ctx->pc = 0x338CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338CC0u;
    // 0x338cc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A040u, 0x338CC0u, 0x338CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338CC8u;
label_338cc8:
    // 0x338cc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x338cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338ccc: 0xc062810  jal         func_18A040
    ctx->pc = 0x338CCCu;
    SET_GPR_U32(ctx, 31, 0x338CD4u);
    ctx->pc = 0x338CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338CCCu;
    // 0x338cd0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A040u, 0x338CCCu, 0x338CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338CD4u;
label_338cd4:
    // 0x338cd4: 0x8e03048c  lw          $v1, 0x48C($s0)
    ctx->pc = 0x338cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1164)));
    // 0x338cd8: 0x30636000  andi        $v1, $v1, 0x6000
    ctx->pc = 0x338cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24576);
    // 0x338cdc: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x338CDCu;
    {
        const bool branch_taken_0x338cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x338cdc) {
            ctx->pc = 0x338CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338CDCu;
            // 0x338ce0: 0x82640000  lb          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338D1Cu;
            goto label_338d1c;
        }
    }
    ctx->pc = 0x338CE4u;
    // 0x338ce4: 0x8c43048c  lw          $v1, 0x48C($v0)
    ctx->pc = 0x338ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1164)));
    // 0x338ce8: 0x30636000  andi        $v1, $v1, 0x6000
    ctx->pc = 0x338ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24576);
    // 0x338cec: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x338CECu;
    {
        const bool branch_taken_0x338cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x338cec) {
            ctx->pc = 0x338D18u;
            goto label_338d18;
        }
    }
    ctx->pc = 0x338CF4u;
    // 0x338cf4: 0x8e030494  lw          $v1, 0x494($s0)
    ctx->pc = 0x338cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x338cf8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x338cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x338cfc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x338cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x338d00: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x338D00u;
    {
        const bool branch_taken_0x338d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x338d00) {
            ctx->pc = 0x338D18u;
            goto label_338d18;
        }
    }
    ctx->pc = 0x338D08u;
    // 0x338d08: 0x8c420494  lw          $v0, 0x494($v0)
    ctx->pc = 0x338d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1172)));
    // 0x338d0c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x338d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x338d10: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x338D10u;
    {
        const bool branch_taken_0x338d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338d10) {
            ctx->pc = 0x338D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338D10u;
            // 0x338d14: 0x82640000  lb          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338D60u;
            goto label_338d60;
        }
    }
    ctx->pc = 0x338D18u;
label_338d18:
    // 0x338d18: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x338d18u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_338d1c:
    // 0x338d1c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x338d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x338d20: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x338d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x338d24: 0x24632790  addiu       $v1, $v1, 0x2790
    ctx->pc = 0x338d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10128));
    // 0x338d28: 0x24422640  addiu       $v0, $v0, 0x2640
    ctx->pc = 0x338d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9792));
    // 0x338d2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x338d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338d30: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x338d30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x338d34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x338d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338d38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x338d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x338d3c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x338d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x338d40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x338d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338d44: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x338d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x338d48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x338d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x338d4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x338d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x338d50: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x338D50u;
    SET_GPR_U32(ctx, 31, 0x338D58u);
    ctx->pc = 0x338D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338D50u;
    // 0x338d54: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302BA0u, 0x338D50u, 0x338D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338D58u;
label_338d58:
    // 0x338d58: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x338D58u;
    {
        const bool branch_taken_0x338d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338d58) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x338D60u;
label_338d60:
    // 0x338d60: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x338d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x338d64: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x338d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x338d68: 0x24632790  addiu       $v1, $v1, 0x2790
    ctx->pc = 0x338d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10128));
    // 0x338d6c: 0x24422640  addiu       $v0, $v0, 0x2640
    ctx->pc = 0x338d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9792));
    // 0x338d70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x338d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338d74: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x338d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x338d78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x338d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338d7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x338d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x338d80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x338d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338d84: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x338d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x338d88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x338d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x338d8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x338d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x338d90: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x338D90u;
    SET_GPR_U32(ctx, 31, 0x338D98u);
    ctx->pc = 0x338D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338D90u;
    // 0x338d94: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x338D90u, 0x338D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338D98u;
label_338d98:
    // 0x338d98: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x338D98u;
    {
        const bool branch_taken_0x338d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338d98) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x338DA0u;
label_338da0:
    // 0x338da0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x338da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x338da4: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x338da4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x338da8: 0x2484270c  addiu       $a0, $a0, 0x270C
    ctx->pc = 0x338da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9996));
    // 0x338dac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x338dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338db0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x338db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338db4: 0x2407a824  addiu       $a3, $zero, -0x57DC
    ctx->pc = 0x338db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944804));
    // 0x338db8: 0x240a00a0  addiu       $t2, $zero, 0xA0
    ctx->pc = 0x338db8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x338dbc: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x338DBCu;
    SET_GPR_U32(ctx, 31, 0x338DC4u);
    ctx->pc = 0x338DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338DBCu;
    // 0x338dc0: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302B40u, 0x338DBCu, 0x338DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338DC4u;
label_338dc4:
    // 0x338dc4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x338dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x338dc8: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x338dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x338dcc: 0x24842718  addiu       $a0, $a0, 0x2718
    ctx->pc = 0x338dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10008));
    // 0x338dd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x338dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338dd4: 0x2407a824  addiu       $a3, $zero, -0x57DC
    ctx->pc = 0x338dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944804));
    // 0x338dd8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x338dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x338ddc: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x338ddcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x338de0: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x338DE0u;
    SET_GPR_U32(ctx, 31, 0x338DE8u);
    ctx->pc = 0x338DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338DE0u;
    // 0x338de4: 0x240a00a0  addiu       $t2, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302B40u, 0x338DE0u, 0x338DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338DE8u;
label_338de8:
    // 0x338de8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x338de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x338dec: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x338decu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x338df0: 0x264500a0  addiu       $a1, $s2, 0xA0
    ctx->pc = 0x338df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x338df4: 0x24842724  addiu       $a0, $a0, 0x2724
    ctx->pc = 0x338df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10020));
    // 0x338df8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x338df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338dfc: 0x2407a824  addiu       $a3, $zero, -0x57DC
    ctx->pc = 0x338dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944804));
    // 0x338e00: 0x240a00a0  addiu       $t2, $zero, 0xA0
    ctx->pc = 0x338e00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x338e04: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x338E04u;
    SET_GPR_U32(ctx, 31, 0x338E0Cu);
    ctx->pc = 0x338E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338E04u;
    // 0x338e08: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302B40u, 0x338E04u, 0x338E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338E0Cu;
label_338e0c:
    // 0x338e0c: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x338e0cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x338e10: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x338e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x338e14: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x338e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x338e18: 0x24632790  addiu       $v1, $v1, 0x2790
    ctx->pc = 0x338e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10128));
    // 0x338e1c: 0x24422640  addiu       $v0, $v0, 0x2640
    ctx->pc = 0x338e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9792));
    // 0x338e20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x338e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338e24: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x338e24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x338e28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x338e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338e2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x338e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x338e30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x338e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338e34: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x338e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x338e38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x338e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x338e3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x338e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x338e40: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x338E40u;
    SET_GPR_U32(ctx, 31, 0x338E48u);
    ctx->pc = 0x338E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338E40u;
    // 0x338e44: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x338E40u, 0x338E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338E48u;
label_338e48:
    // 0x338e48: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x338E48u;
    {
        const bool branch_taken_0x338e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338e48) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x338E50u;
label_338e50:
    // 0x338e50: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x338e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x338e54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x338e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338e58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x338e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338e5c: 0x24842784  addiu       $a0, $a0, 0x2784
    ctx->pc = 0x338e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10116));
    // 0x338e60: 0x2407a833  addiu       $a3, $zero, -0x57CD
    ctx->pc = 0x338e60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x338e64: 0xc0c0afc  jal         func_302BF0
    ctx->pc = 0x338E64u;
    SET_GPR_U32(ctx, 31, 0x338E6Cu);
    ctx->pc = 0x338E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338E64u;
    // 0x338e68: 0x2408005a  addiu       $t0, $zero, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302BF0u, 0x338E64u, 0x338E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338E6Cu;
label_338e6c:
    // 0x338e6c: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x338E6Cu;
    {
        const bool branch_taken_0x338e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338e6c) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x338E74u;
label_338e74:
    // 0x338e74: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338e78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x338e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338e7c: 0x9046b240  lbu         $a2, -0x4DC0($v0)
    ctx->pc = 0x338e7cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x338e80: 0x54c30010  bnel        $a2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x338E80u;
    {
        const bool branch_taken_0x338e80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x338e80) {
            ctx->pc = 0x338E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338E80u;
            // 0x338e84: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338EC4u;
            goto label_338ec4;
        }
    }
    ctx->pc = 0x338E88u;
    // 0x338e88: 0xc068c84  jal         func_1A3210
    ctx->pc = 0x338E88u;
    SET_GPR_U32(ctx, 31, 0x338E90u);
    ctx->pc = 0x1A3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3210u, 0x338E88u, 0x338E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338E90u;
label_338e90:
    // 0x338e90: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338e94: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x338e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x338e98: 0x9046b240  lbu         $a2, -0x4DC0($v0)
    ctx->pc = 0x338e98u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x338e9c: 0x246328b0  addiu       $v1, $v1, 0x28B0
    ctx->pc = 0x338e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10416));
    // 0x338ea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x338ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338ea4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x338ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338ea8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x338ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x338eac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x338eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x338eb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x338eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338eb4: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x338EB4u;
    SET_GPR_U32(ctx, 31, 0x338EBCu);
    ctx->pc = 0x338EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338EB4u;
    // 0x338eb8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x338EB4u, 0x338EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338EBCu;
label_338ebc:
    // 0x338ebc: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x338EBCu;
    {
        const bool branch_taken_0x338ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338ebc) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x338EC4u;
label_338ec4:
    // 0x338ec4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x338ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x338ec8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x338ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x338ecc: 0x244228b0  addiu       $v0, $v0, 0x28B0
    ctx->pc = 0x338eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10416));
    // 0x338ed0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x338ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x338ed4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x338ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338ed8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x338ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338edc: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x338EDCu;
    SET_GPR_U32(ctx, 31, 0x338EE4u);
    ctx->pc = 0x338EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338EDCu;
    // 0x338ee0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x338EDCu, 0x338EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338EE4u;
label_338ee4:
    // 0x338ee4: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x338EE4u;
    {
        const bool branch_taken_0x338ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338ee4) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x338EECu;
label_338eec:
    // 0x338eec: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338ef0: 0x9042b240  lbu         $v0, -0x4DC0($v0)
    ctx->pc = 0x338ef0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x338ef4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x338ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x338ef8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x338ef8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x338efc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x338EFCu;
    {
        const bool branch_taken_0x338efc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x338efc) {
            ctx->pc = 0x338F20u;
            goto label_338f20;
        }
    }
    ctx->pc = 0x338F04u;
    // 0x338f04: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x338f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x338f08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x338f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x338f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f10: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x338F10u;
    SET_GPR_U32(ctx, 31, 0x338F18u);
    ctx->pc = 0x338F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F10u;
    // 0x338f14: 0x24c62e50  addiu       $a2, $a2, 0x2E50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x338F10u, 0x338F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F18u;
label_338f18:
    // 0x338f18: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x338F18u;
    {
        const bool branch_taken_0x338f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338f18) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x338F20u;
label_338f20:
    // 0x338f20: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338f24: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x338f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x338f28: 0x9046b241  lbu         $a2, -0x4DBF($v0)
    ctx->pc = 0x338f28u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x338f2c: 0x246328f0  addiu       $v1, $v1, 0x28F0
    ctx->pc = 0x338f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10480));
    // 0x338f30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x338f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x338f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f38: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x338f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x338f3c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x338f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x338f40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x338f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338f44: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x338F44u;
    SET_GPR_U32(ctx, 31, 0x338F4Cu);
    ctx->pc = 0x338F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F44u;
    // 0x338f48: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x338F44u, 0x338F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F4Cu;
label_338f4c:
    // 0x338f4c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x338F4Cu;
    {
        const bool branch_taken_0x338f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338f4c) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x338F54u;
label_338f54:
    // 0x338f54: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338f58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x338f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338f5c: 0x9044b240  lbu         $a0, -0x4DC0($v0)
    ctx->pc = 0x338f5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x338f60: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x338F60u;
    {
        const bool branch_taken_0x338f60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x338f60) {
            ctx->pc = 0x338F88u;
            goto label_338f88;
        }
    }
    ctx->pc = 0x338F68u;
    // 0x338f68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x338f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x338f6c: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x338F6Cu;
    {
        const bool branch_taken_0x338f6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x338f6c) {
            ctx->pc = 0x338F88u;
            goto label_338f88;
        }
    }
    ctx->pc = 0x338F74u;
    // 0x338f74: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338f78: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x338f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x338f7c: 0x9042b241  lbu         $v0, -0x4DBF($v0)
    ctx->pc = 0x338f7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x338f80: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x338F80u;
    {
        const bool branch_taken_0x338f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x338f80) {
            ctx->pc = 0x338FA4u;
            goto label_338fa4;
        }
    }
    ctx->pc = 0x338F88u;
label_338f88:
    // 0x338f88: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x338f88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x338f8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x338f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x338f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f94: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x338F94u;
    SET_GPR_U32(ctx, 31, 0x338F9Cu);
    ctx->pc = 0x338F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F94u;
    // 0x338f98: 0x24c62e50  addiu       $a2, $a2, 0x2E50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x338F94u, 0x338F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F9Cu;
label_338f9c:
    // 0x338f9c: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x338F9Cu;
    {
        const bool branch_taken_0x338f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338f9c) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x338FA4u;
label_338fa4:
    // 0x338fa4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338fa8: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x338fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x338fac: 0x9046b242  lbu         $a2, -0x4DBE($v0)
    ctx->pc = 0x338facu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947394)));
    // 0x338fb0: 0x246329e0  addiu       $v1, $v1, 0x29E0
    ctx->pc = 0x338fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10720));
    // 0x338fb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x338fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338fb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x338fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338fbc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x338fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x338fc0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x338fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x338fc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x338fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338fc8: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x338FC8u;
    SET_GPR_U32(ctx, 31, 0x338FD0u);
    ctx->pc = 0x338FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338FC8u;
    // 0x338fcc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x338FC8u, 0x338FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338FD0u;
label_338fd0:
    // 0x338fd0: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x338FD0u;
    {
        const bool branch_taken_0x338fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338fd0) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x338FD8u;
label_338fd8:
    // 0x338fd8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338fdc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x338fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x338fe0: 0x9042b240  lbu         $v0, -0x4DC0($v0)
    ctx->pc = 0x338fe0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x338fe4: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x338FE4u;
    {
        const bool branch_taken_0x338fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x338fe4) {
            ctx->pc = 0x33903Cu;
            goto label_33903c;
        }
    }
    ctx->pc = 0x338FECu;
    // 0x338fec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x338FECu;
    {
        const bool branch_taken_0x338fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338fec) {
            ctx->pc = 0x339008u;
            goto label_339008;
        }
    }
    ctx->pc = 0x338FF4u;
    // 0x338ff4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x338ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x338ff8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x338ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x338ffc: 0x9042b241  lbu         $v0, -0x4DBF($v0)
    ctx->pc = 0x338ffcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x339000: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x339000u;
    {
        const bool branch_taken_0x339000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x339000) {
            ctx->pc = 0x33903Cu;
            goto label_33903c;
        }
    }
    ctx->pc = 0x339008u;
label_339008:
    // 0x339008: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x339008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33900c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x33900cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x339010: 0x9046b243  lbu         $a2, -0x4DBD($v0)
    ctx->pc = 0x339010u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947395)));
    // 0x339014: 0x24632a80  addiu       $v1, $v1, 0x2A80
    ctx->pc = 0x339014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10880));
    // 0x339018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x339018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33901c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33901cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339020: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x339020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x339024: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x339024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x339028: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x339028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33902c: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x33902Cu;
    SET_GPR_U32(ctx, 31, 0x339034u);
    ctx->pc = 0x339030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33902Cu;
    // 0x339030: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x33902Cu, 0x339034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339034u;
label_339034:
    // 0x339034: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x339034u;
    {
        const bool branch_taken_0x339034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339034) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x33903Cu;
label_33903c:
    // 0x33903c: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x33903cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x339040: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x339040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339044: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x339044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339048: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x339048u;
    SET_GPR_U32(ctx, 31, 0x339050u);
    ctx->pc = 0x33904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339048u;
    // 0x33904c: 0x24c62e50  addiu       $a2, $a2, 0x2E50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x339048u, 0x339050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339050u;
label_339050:
    // 0x339050: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x339050u;
    {
        const bool branch_taken_0x339050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339050) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x339058u;
label_339058:
    // 0x339058: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x339058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33905c: 0x9064b240  lbu         $a0, -0x4DC0($v1)
    ctx->pc = 0x33905cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947392)));
    // 0x339060: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x339060u;
    {
        const bool branch_taken_0x339060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x339060) {
            ctx->pc = 0x3390A4u;
            goto label_3390a4;
        }
    }
    ctx->pc = 0x339068u;
    // 0x339068: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x339068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33906c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33906Cu;
    {
        const bool branch_taken_0x33906c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33906c) {
            ctx->pc = 0x339088u;
            goto label_339088;
        }
    }
    ctx->pc = 0x339074u;
    // 0x339074: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x339074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339078: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x339078u;
    {
        const bool branch_taken_0x339078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x339078) {
            ctx->pc = 0x339088u;
            goto label_339088;
        }
    }
    ctx->pc = 0x339080u;
    // 0x339080: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x339080u;
    {
        const bool branch_taken_0x339080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339080) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x339088u;
label_339088:
    // 0x339088: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x339088u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x33908c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33908cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339090: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x339090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339094: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x339094u;
    SET_GPR_U32(ctx, 31, 0x33909Cu);
    ctx->pc = 0x339098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339094u;
    // 0x339098: 0x24c62e50  addiu       $a2, $a2, 0x2E50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x339094u, 0x33909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33909Cu;
label_33909c:
    // 0x33909c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x33909Cu;
    {
        const bool branch_taken_0x33909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33909c) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x3390A4u;
label_3390a4:
    // 0x3390a4: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x3390a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3390a8: 0x9063b241  lbu         $v1, -0x4DBF($v1)
    ctx->pc = 0x3390a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947393)));
    // 0x3390ac: 0x2c61000c  sltiu       $at, $v1, 0xC
    ctx->pc = 0x3390acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3390b0: 0x10200082  beqz        $at, . + 4 + (0x82 << 2)
    ctx->pc = 0x3390B0u;
    {
        const bool branch_taken_0x3390b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3390b0) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x3390B8u;
    // 0x3390b8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3390b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3390bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3390bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3390c0: 0x24844cd0  addiu       $a0, $a0, 0x4CD0
    ctx->pc = 0x3390c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19664));
    // 0x3390c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3390c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3390c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3390c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3390cc: 0x600008  jr          $v1
    ctx->pc = 0x3390CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3390D4u: goto label_3390d4;
            case 0x3390F0u: goto label_3390f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3390CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3390D4u;
label_3390d4:
    // 0x3390d4: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3390d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x3390d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3390d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3390dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3390dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3390e0: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x3390E0u;
    SET_GPR_U32(ctx, 31, 0x3390E8u);
    ctx->pc = 0x3390E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3390E0u;
    // 0x3390e4: 0x24c62e50  addiu       $a2, $a2, 0x2E50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x3390E0u, 0x3390E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3390E8u;
label_3390e8:
    // 0x3390e8: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x3390E8u;
    {
        const bool branch_taken_0x3390e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3390e8) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x3390F0u;
label_3390f0:
    // 0x3390f0: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3390f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3390f4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3390f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3390f8: 0x9046b244  lbu         $a2, -0x4DBC($v0)
    ctx->pc = 0x3390f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947396)));
    // 0x3390fc: 0x24632ab0  addiu       $v1, $v1, 0x2AB0
    ctx->pc = 0x3390fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10928));
    // 0x339100: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x339100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339104: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x339104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339108: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x339108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x33910c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33910cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x339110: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x339110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x339114: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x339114u;
    SET_GPR_U32(ctx, 31, 0x33911Cu);
    ctx->pc = 0x339118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339114u;
    // 0x339118: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x339114u, 0x33911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33911Cu;
label_33911c:
    // 0x33911c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x33911Cu;
    {
        const bool branch_taken_0x33911c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33911c) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x339124u;
label_339124:
    // 0x339124: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x339124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x339128: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x339128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x33912c: 0x9046b245  lbu         $a2, -0x4DBB($v0)
    ctx->pc = 0x33912cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947397)));
    // 0x339130: 0x24632b50  addiu       $v1, $v1, 0x2B50
    ctx->pc = 0x339130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11088));
    // 0x339134: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x339134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339138: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x339138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33913c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x33913cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x339140: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x339140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x339144: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x339144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x339148: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x339148u;
    SET_GPR_U32(ctx, 31, 0x339150u);
    ctx->pc = 0x33914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339148u;
    // 0x33914c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x339148u, 0x339150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339150u;
label_339150:
    // 0x339150: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x339150u;
    {
        const bool branch_taken_0x339150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339150) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x339158u;
label_339158:
    // 0x339158: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x339158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33915c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x33915cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x339160: 0x9046b246  lbu         $a2, -0x4DBA($v0)
    ctx->pc = 0x339160u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947398)));
    // 0x339164: 0x24632b80  addiu       $v1, $v1, 0x2B80
    ctx->pc = 0x339164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11136));
    // 0x339168: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x339168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33916c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33916cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339170: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x339170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x339174: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x339174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x339178: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x339178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33917c: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x33917Cu;
    SET_GPR_U32(ctx, 31, 0x339184u);
    ctx->pc = 0x339180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33917Cu;
    // 0x339180: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x33917Cu, 0x339184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339184u;
label_339184:
    // 0x339184: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x339184u;
    {
        const bool branch_taken_0x339184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339184) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x33918Cu;
label_33918c:
    // 0x33918c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33918cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x339190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x339190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339194: 0x9042b245  lbu         $v0, -0x4DBB($v0)
    ctx->pc = 0x339194u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947397)));
    // 0x339198: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x339198u;
    {
        const bool branch_taken_0x339198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x339198) {
            ctx->pc = 0x3391BCu;
            goto label_3391bc;
        }
    }
    ctx->pc = 0x3391A0u;
    // 0x3391a0: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3391a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x3391a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3391a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3391a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3391a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3391ac: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x3391ACu;
    SET_GPR_U32(ctx, 31, 0x3391B4u);
    ctx->pc = 0x3391B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3391ACu;
    // 0x3391b0: 0x24c62e50  addiu       $a2, $a2, 0x2E50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x3391ACu, 0x3391B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3391B4u;
label_3391b4:
    // 0x3391b4: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3391B4u;
    {
        const bool branch_taken_0x3391b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3391b4) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x3391BCu;
label_3391bc:
    // 0x3391bc: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3391bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3391c0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3391c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3391c4: 0x9046b248  lbu         $a2, -0x4DB8($v0)
    ctx->pc = 0x3391c4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947400)));
    // 0x3391c8: 0x24632bd0  addiu       $v1, $v1, 0x2BD0
    ctx->pc = 0x3391c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11216));
    // 0x3391cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3391ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3391d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3391d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3391d4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3391d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3391d8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3391d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3391dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3391dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3391e0: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x3391E0u;
    SET_GPR_U32(ctx, 31, 0x3391E8u);
    ctx->pc = 0x3391E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3391E0u;
    // 0x3391e4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x3391E0u, 0x3391E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3391E8u;
label_3391e8:
    // 0x3391e8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3391E8u;
    {
        const bool branch_taken_0x3391e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3391e8) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x3391F0u;
label_3391f0:
    // 0x3391f0: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3391f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3391f4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3391f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3391f8: 0x9046b249  lbu         $a2, -0x4DB7($v0)
    ctx->pc = 0x3391f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947401)));
    // 0x3391fc: 0x24632c40  addiu       $v1, $v1, 0x2C40
    ctx->pc = 0x3391fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11328));
    // 0x339200: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x339200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339204: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x339204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339208: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x339208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x33920c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x339210: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x339210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x339214: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x339214u;
    SET_GPR_U32(ctx, 31, 0x33921Cu);
    ctx->pc = 0x339218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339214u;
    // 0x339218: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x339214u, 0x33921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33921Cu;
label_33921c:
    // 0x33921c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x33921Cu;
    {
        const bool branch_taken_0x33921c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33921c) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x339224u;
label_339224:
    // 0x339224: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x339224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x339228: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x339228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33922c: 0x9042b240  lbu         $v0, -0x4DC0($v0)
    ctx->pc = 0x33922cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x339230: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x339230u;
    {
        const bool branch_taken_0x339230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x339230) {
            ctx->pc = 0x339254u;
            goto label_339254;
        }
    }
    ctx->pc = 0x339238u;
    // 0x339238: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x339238u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x33923c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33923cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339240: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x339240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339244: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x339244u;
    SET_GPR_U32(ctx, 31, 0x33924Cu);
    ctx->pc = 0x339248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339244u;
    // 0x339248: 0x24c62e50  addiu       $a2, $a2, 0x2E50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x339244u, 0x33924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33924Cu;
label_33924c:
    // 0x33924c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x33924Cu;
    {
        const bool branch_taken_0x33924c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33924c) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x339254u;
label_339254:
    // 0x339254: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x339254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x339258: 0x9042b241  lbu         $v0, -0x4DBF($v0)
    ctx->pc = 0x339258u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x33925c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33925Cu;
    {
        const bool branch_taken_0x33925c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33925c) {
            ctx->pc = 0x339290u;
            goto label_339290;
        }
    }
    ctx->pc = 0x339264u;
    // 0x339264: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x339264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x339268: 0x9042b24a  lbu         $v0, -0x4DB6($v0)
    ctx->pc = 0x339268u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947402)));
    // 0x33926c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33926Cu;
    {
        const bool branch_taken_0x33926c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33926c) {
            ctx->pc = 0x339290u;
            goto label_339290;
        }
    }
    ctx->pc = 0x339274u;
    // 0x339274: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x339274u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x339278: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x339278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33927c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33927cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339280: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x339280u;
    SET_GPR_U32(ctx, 31, 0x339288u);
    ctx->pc = 0x339284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339280u;
    // 0x339284: 0x24c62e50  addiu       $a2, $a2, 0x2E50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x339280u, 0x339288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339288u;
label_339288:
    // 0x339288: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x339288u;
    {
        const bool branch_taken_0x339288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339288) {
            ctx->pc = 0x3392BCu;
            goto label_3392bc;
        }
    }
    ctx->pc = 0x339290u;
label_339290:
    // 0x339290: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x339290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x339294: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x339294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x339298: 0x9046b24a  lbu         $a2, -0x4DB6($v0)
    ctx->pc = 0x339298u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947402)));
    // 0x33929c: 0x24632dd0  addiu       $v1, $v1, 0x2DD0
    ctx->pc = 0x33929cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11728));
    // 0x3392a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3392a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3392a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3392a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3392a8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3392a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3392ac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3392acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3392b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3392b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3392b4: 0xc0ce530  jal         func_3394C0
    ctx->pc = 0x3392B4u;
    SET_GPR_U32(ctx, 31, 0x3392BCu);
    ctx->pc = 0x3392B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3392B4u;
    // 0x3392b8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394C0u, 0x3392B4u, 0x3392BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3392BCu;
label_3392bc:
    // 0x3392bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3392bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3392c0:
    // 0x3392c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3392c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3392c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3392c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3392c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3392c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3392cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3392ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3392d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3392D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3392D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392D0u;
        // 0x3392d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3392D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3392D8u;
    // 0x3392d8: 0x0  nop
    ctx->pc = 0x3392d8u;
    // NOP
    // 0x3392dc: 0x0  nop
    ctx->pc = 0x3392dcu;
    // NOP
}
