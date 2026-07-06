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

// Function: sub_00331460
// Address: 0x331460 - 0x3328a4
void sub_00331460_0x331460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331460_0x331460");
#endif

    switch (ctx->pc) {
        case 0x3314a4u: goto label_3314a4;
        case 0x3314acu: goto label_3314ac;
        case 0x3314b8u: goto label_3314b8;
        case 0x3314d8u: goto label_3314d8;
        case 0x3314e0u: goto label_3314e0;
        case 0x3314ecu: goto label_3314ec;
        case 0x3314f8u: goto label_3314f8;
        case 0x331508u: goto label_331508;
        case 0x331510u: goto label_331510;
        case 0x331518u: goto label_331518;
        case 0x331600u: goto label_331600;
        case 0x331608u: goto label_331608;
        case 0x331614u: goto label_331614;
        case 0x331630u: goto label_331630;
        case 0x33163cu: goto label_33163c;
        case 0x33164cu: goto label_33164c;
        case 0x33167cu: goto label_33167c;
        case 0x331688u: goto label_331688;
        case 0x331694u: goto label_331694;
        case 0x3316a0u: goto label_3316a0;
        case 0x3316d0u: goto label_3316d0;
        case 0x3316dcu: goto label_3316dc;
        case 0x331714u: goto label_331714;
        case 0x331724u: goto label_331724;
        case 0x33173cu: goto label_33173c;
        case 0x331744u: goto label_331744;
        case 0x331750u: goto label_331750;
        case 0x3317b8u: goto label_3317b8;
        case 0x331830u: goto label_331830;
        case 0x33187cu: goto label_33187c;
        case 0x3318ecu: goto label_3318ec;
        case 0x331910u: goto label_331910;
        case 0x331970u: goto label_331970;
        case 0x3319c0u: goto label_3319c0;
        case 0x331a08u: goto label_331a08;
        case 0x331a68u: goto label_331a68;
        case 0x331a98u: goto label_331a98;
        case 0x331ab4u: goto label_331ab4;
        case 0x331ac8u: goto label_331ac8;
        case 0x331b00u: goto label_331b00;
        case 0x331b44u: goto label_331b44;
        case 0x331b8cu: goto label_331b8c;
        case 0x331ba4u: goto label_331ba4;
        case 0x331bccu: goto label_331bcc;
        case 0x331becu: goto label_331bec;
        case 0x331c34u: goto label_331c34;
        case 0x331c50u: goto label_331c50;
        case 0x331c78u: goto label_331c78;
        case 0x331cfcu: goto label_331cfc;
        case 0x331d90u: goto label_331d90;
        case 0x331dd4u: goto label_331dd4;
        case 0x331e10u: goto label_331e10;
        case 0x331e4cu: goto label_331e4c;
        case 0x331e88u: goto label_331e88;
        case 0x331ebcu: goto label_331ebc;
        case 0x331f24u: goto label_331f24;
        case 0x331f44u: goto label_331f44;
        case 0x331f5cu: goto label_331f5c;
        case 0x331fa0u: goto label_331fa0;
        case 0x331fbcu: goto label_331fbc;
        case 0x331fd8u: goto label_331fd8;
        case 0x331ff4u: goto label_331ff4;
        case 0x332010u: goto label_332010;
        case 0x33202cu: goto label_33202c;
        case 0x332048u: goto label_332048;
        case 0x332064u: goto label_332064;
        case 0x332080u: goto label_332080;
        case 0x33209cu: goto label_33209c;
        case 0x3320b8u: goto label_3320b8;
        case 0x3320dcu: goto label_3320dc;
        case 0x3320f0u: goto label_3320f0;
        case 0x332134u: goto label_332134;
        case 0x332144u: goto label_332144;
        case 0x3321a0u: goto label_3321a0;
        case 0x33220cu: goto label_33220c;
        case 0x332254u: goto label_332254;
        case 0x33226cu: goto label_33226c;
        case 0x33227cu: goto label_33227c;
        case 0x3322b0u: goto label_3322b0;
        case 0x3322c8u: goto label_3322c8;
        case 0x3322d8u: goto label_3322d8;
        case 0x33230cu: goto label_33230c;
        case 0x332324u: goto label_332324;
        case 0x332334u: goto label_332334;
        case 0x332374u: goto label_332374;
        case 0x33238cu: goto label_33238c;
        case 0x33239cu: goto label_33239c;
        case 0x3323b4u: goto label_3323b4;
        case 0x3323ccu: goto label_3323cc;
        case 0x3323dcu: goto label_3323dc;
        case 0x3323f4u: goto label_3323f4;
        case 0x33240cu: goto label_33240c;
        case 0x332424u: goto label_332424;
        case 0x332434u: goto label_332434;
        case 0x332468u: goto label_332468;
        case 0x332480u: goto label_332480;
        case 0x332490u: goto label_332490;
        case 0x3324c4u: goto label_3324c4;
        case 0x3324dcu: goto label_3324dc;
        case 0x3324f0u: goto label_3324f0;
        case 0x332500u: goto label_332500;
        case 0x332538u: goto label_332538;
        case 0x33254cu: goto label_33254c;
        case 0x33255cu: goto label_33255c;
        case 0x332590u: goto label_332590;
        case 0x3325a8u: goto label_3325a8;
        case 0x3325bcu: goto label_3325bc;
        case 0x3325ccu: goto label_3325cc;
        case 0x332604u: goto label_332604;
        case 0x332618u: goto label_332618;
        case 0x332628u: goto label_332628;
        case 0x33265cu: goto label_33265c;
        case 0x332674u: goto label_332674;
        case 0x332688u: goto label_332688;
        case 0x332698u: goto label_332698;
        case 0x3326d0u: goto label_3326d0;
        case 0x3326e4u: goto label_3326e4;
        case 0x3326f4u: goto label_3326f4;
        case 0x332728u: goto label_332728;
        case 0x332740u: goto label_332740;
        case 0x33275cu: goto label_33275c;
        case 0x3327a4u: goto label_3327a4;
        case 0x3327c0u: goto label_3327c0;
        case 0x3327d8u: goto label_3327d8;
        case 0x332864u: goto label_332864;
        default: break;
    }

    ctx->pc = 0x331460u;

    // 0x331460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x331460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x331464: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x331468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33146c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33146cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x331470: 0x8c63e808  lw          $v1, -0x17F8($v1)
    ctx->pc = 0x331470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961160)));
    // 0x331474: 0x2c61000d  sltiu       $at, $v1, 0xD
    ctx->pc = 0x331474u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x331478: 0x102000b5  beqz        $at, . + 4 + (0xB5 << 2)
    ctx->pc = 0x331478u;
    {
        const bool branch_taken_0x331478 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331478u;
        // 0x33147c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331478) {
            ctx->pc = 0x331750u;
            goto label_331750;
        }
    }
    ctx->pc = 0x331480u;
    // 0x331480: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x331480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x331484: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x331484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x331488: 0x248446c0  addiu       $a0, $a0, 0x46C0
    ctx->pc = 0x331488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18112));
    // 0x33148c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33148cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x331490: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x331490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x331494: 0x600008  jr          $v1
    ctx->pc = 0x331494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33149Cu: goto label_33149c;
            case 0x331500u: goto label_331500;
            case 0x331654u: goto label_331654;
            case 0x3316A8u: goto label_3316a8;
            case 0x3316E4u: goto label_3316e4;
            case 0x33171Cu: goto label_33171c;
            case 0x331750u: goto label_331750;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331494u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33149Cu;
label_33149c:
    // 0x33149c: 0xc0c0624  jal         func_301890
    ctx->pc = 0x33149Cu;
    SET_GPR_U32(ctx, 31, 0x3314A4u);
    ctx->pc = 0x301890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301890u, 0x33149Cu, 0x3314A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3314A4u;
label_3314a4:
    // 0x3314a4: 0xc055200  jal         func_154800
    ctx->pc = 0x3314A4u;
    SET_GPR_U32(ctx, 31, 0x3314ACu);
    ctx->pc = 0x154800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154800u, 0x3314A4u, 0x3314ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3314ACu;
label_3314ac:
    // 0x3314ac: 0x10263c  dsll32      $a0, $s0, 24
    ctx->pc = 0x3314acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 24));
    // 0x3314b0: 0xc0555e0  jal         func_155780
    ctx->pc = 0x3314B0u;
    SET_GPR_U32(ctx, 31, 0x3314B8u);
    ctx->pc = 0x3314B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3314B0u;
    // 0x3314b4: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155780u, 0x3314B0u, 0x3314B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3314B8u;
label_3314b8:
    // 0x3314b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3314b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3314bc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3314bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3314c0: 0x9044dae0  lbu         $a0, -0x2520($v0)
    ctx->pc = 0x3314c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957792)));
    // 0x3314c4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3314c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3314c8: 0xa4409718  sh          $zero, -0x68E8($v0)
    ctx->pc = 0x3314c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294940440), (uint16_t)GPR_U32(ctx, 0));
    // 0x3314cc: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x3314ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x3314d0: 0xc054e1c  jal         func_153870
    ctx->pc = 0x3314D0u;
    SET_GPR_U32(ctx, 31, 0x3314D8u);
    ctx->pc = 0x3314D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3314D0u;
    // 0x3314d4: 0xa062dae0  sb          $v0, -0x2520($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957792), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153870u, 0x3314D0u, 0x3314D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3314D8u;
label_3314d8:
    // 0x3314d8: 0xc0bf498  jal         func_2FD260
    ctx->pc = 0x3314D8u;
    SET_GPR_U32(ctx, 31, 0x3314E0u);
    ctx->pc = 0x2FD260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD260u, 0x3314D8u, 0x3314E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3314E0u;
label_3314e0:
    // 0x3314e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3314e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3314e4: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x3314E4u;
    SET_GPR_U32(ctx, 31, 0x3314ECu);
    ctx->pc = 0x3314E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3314E4u;
    // 0x3314e8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x3314E4u, 0x3314ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3314ECu;
label_3314ec:
    // 0x3314ec: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x3314ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x3314f0: 0xc0558e0  jal         func_156380
    ctx->pc = 0x3314F0u;
    SET_GPR_U32(ctx, 31, 0x3314F8u);
    ctx->pc = 0x3314F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3314F0u;
    // 0x3314f4: 0x24840b80  addiu       $a0, $a0, 0xB80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x3314F0u, 0x3314F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3314F8u;
label_3314f8:
    // 0x3314f8: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x3314F8u;
    {
        const bool branch_taken_0x3314f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3314FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3314F8u;
        // 0x3314fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3314f8) {
            ctx->pc = 0x331754u;
            goto label_331754;
        }
    }
    ctx->pc = 0x331500u;
label_331500:
    // 0x331500: 0xc0c0624  jal         func_301890
    ctx->pc = 0x331500u;
    SET_GPR_U32(ctx, 31, 0x331508u);
    ctx->pc = 0x301890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301890u, 0x331500u, 0x331508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331508u;
label_331508:
    // 0x331508: 0xc0555e0  jal         func_155780
    ctx->pc = 0x331508u;
    SET_GPR_U32(ctx, 31, 0x331510u);
    ctx->pc = 0x33150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331508u;
    // 0x33150c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155780u, 0x331508u, 0x331510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331510u;
label_331510:
    // 0x331510: 0xc0555e0  jal         func_155780
    ctx->pc = 0x331510u;
    SET_GPR_U32(ctx, 31, 0x331518u);
    ctx->pc = 0x331514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331510u;
    // 0x331514: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155780u, 0x331510u, 0x331518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331518u;
label_331518:
    // 0x331518: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x331518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33151c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x33151cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x331520: 0x9043dae0  lbu         $v1, -0x2520($v0)
    ctx->pc = 0x331520u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957792)));
    // 0x331524: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x331524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x331528: 0x34660002  ori         $a2, $v1, 0x2
    ctx->pc = 0x331528u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x33152c: 0xa0509748  sb          $s0, -0x68B8($v0)
    ctx->pc = 0x33152cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940488), (uint8_t)GPR_U32(ctx, 16));
    // 0x331530: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x331530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x331534: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x331534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x331538: 0xa086dae0  sb          $a2, -0x2520($a0)
    ctx->pc = 0x331538u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294957792), (uint8_t)GPR_U32(ctx, 6));
    // 0x33153c: 0x9045b240  lbu         $a1, -0x4DC0($v0)
    ctx->pc = 0x33153cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x331540: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x331540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x331544: 0x9067b241  lbu         $a3, -0x4DBF($v1)
    ctx->pc = 0x331544u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947393)));
    // 0x331548: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x331548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33154c: 0xa0458ae0  sb          $a1, -0x7520($v0)
    ctx->pc = 0x33154cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294937312), (uint8_t)GPR_U32(ctx, 5));
    // 0x331550: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x331550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x331554: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x331554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x331558: 0xa0878ae1  sb          $a3, -0x751F($a0)
    ctx->pc = 0x331558u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294937313), (uint8_t)GPR_U32(ctx, 7));
    // 0x33155c: 0x9046b242  lbu         $a2, -0x4DBE($v0)
    ctx->pc = 0x33155cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947394)));
    // 0x331560: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x331560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x331564: 0x9087b244  lbu         $a3, -0x4DBC($a0)
    ctx->pc = 0x331564u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947396)));
    // 0x331568: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x331568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33156c: 0xa0668ae2  sb          $a2, -0x751E($v1)
    ctx->pc = 0x33156cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294937314), (uint8_t)GPR_U32(ctx, 6));
    // 0x331570: 0x9045b243  lbu         $a1, -0x4DBD($v0)
    ctx->pc = 0x331570u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947395)));
    // 0x331574: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x331574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x331578: 0xa0678ae4  sb          $a3, -0x751C($v1)
    ctx->pc = 0x331578u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294937316), (uint8_t)GPR_U32(ctx, 7));
    // 0x33157c: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x33157cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x331580: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x331580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x331584: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x331584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x331588: 0x9067b247  lbu         $a3, -0x4DB9($v1)
    ctx->pc = 0x331588u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947399)));
    // 0x33158c: 0xa0458ae3  sb          $a1, -0x751D($v0)
    ctx->pc = 0x33158cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294937315), (uint8_t)GPR_U32(ctx, 5));
    // 0x331590: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x331590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x331594: 0x9046b245  lbu         $a2, -0x4DBB($v0)
    ctx->pc = 0x331594u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947397)));
    // 0x331598: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x331598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33159c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33159cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3315a0: 0xa0868ae5  sb          $a2, -0x751B($a0)
    ctx->pc = 0x3315a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294937317), (uint8_t)GPR_U32(ctx, 6));
    // 0x3315a4: 0x9045b246  lbu         $a1, -0x4DBA($v0)
    ctx->pc = 0x3315a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947398)));
    // 0x3315a8: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x3315a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x3315ac: 0xa0878ae7  sb          $a3, -0x7519($a0)
    ctx->pc = 0x3315acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294937319), (uint8_t)GPR_U32(ctx, 7));
    // 0x3315b0: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x3315b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x3315b4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3315b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3315b8: 0xa0458ae6  sb          $a1, -0x751A($v0)
    ctx->pc = 0x3315b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294937318), (uint8_t)GPR_U32(ctx, 5));
    // 0x3315bc: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3315bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3315c0: 0x9046b248  lbu         $a2, -0x4DB8($v0)
    ctx->pc = 0x3315c0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947400)));
    // 0x3315c4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3315c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3315c8: 0xa0668ae8  sb          $a2, -0x7518($v1)
    ctx->pc = 0x3315c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294937320), (uint8_t)GPR_U32(ctx, 6));
    // 0x3315cc: 0x9045b249  lbu         $a1, -0x4DB7($v0)
    ctx->pc = 0x3315ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947401)));
    // 0x3315d0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x3315d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x3315d4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3315d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3315d8: 0xa0458ae9  sb          $a1, -0x7517($v0)
    ctx->pc = 0x3315d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294937321), (uint8_t)GPR_U32(ctx, 5));
    // 0x3315dc: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x3315dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x3315e0: 0xac401d40  sw          $zero, 0x1D40($v0)
    ctx->pc = 0x3315e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7488), GPR_U32(ctx, 0));
    // 0x3315e4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3315e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3315e8: 0xa0409740  sb          $zero, -0x68C0($v0)
    ctx->pc = 0x3315e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940480), (uint8_t)GPR_U32(ctx, 0));
    // 0x3315ec: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3315ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3315f0: 0xa04095c8  sb          $zero, -0x6A38($v0)
    ctx->pc = 0x3315f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940104), (uint8_t)GPR_U32(ctx, 0));
    // 0x3315f4: 0x9082b24a  lbu         $v0, -0x4DB6($a0)
    ctx->pc = 0x3315f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947402)));
    // 0x3315f8: 0xc054e1c  jal         func_153870
    ctx->pc = 0x3315F8u;
    SET_GPR_U32(ctx, 31, 0x331600u);
    ctx->pc = 0x3315FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3315F8u;
    // 0x3315fc: 0xa0628aea  sb          $v0, -0x7516($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294937322), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153870u, 0x3315F8u, 0x331600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331600u;
label_331600:
    // 0x331600: 0xc0bf498  jal         func_2FD260
    ctx->pc = 0x331600u;
    SET_GPR_U32(ctx, 31, 0x331608u);
    ctx->pc = 0x2FD260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD260u, 0x331600u, 0x331608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331608u;
label_331608:
    // 0x331608: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x331608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x33160c: 0xc0558e0  jal         func_156380
    ctx->pc = 0x33160Cu;
    SET_GPR_U32(ctx, 31, 0x331614u);
    ctx->pc = 0x331610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33160Cu;
    // 0x331610: 0x24840b80  addiu       $a0, $a0, 0xB80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x33160Cu, 0x331614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331614u;
label_331614:
    // 0x331614: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x331614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x331618: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x331618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33161c: 0x8c42e808  lw          $v0, -0x17F8($v0)
    ctx->pc = 0x33161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x331620: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x331620u;
    {
        const bool branch_taken_0x331620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x331620) {
            ctx->pc = 0x331624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331620u;
            // 0x331624: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331644u;
            goto label_331644;
        }
    }
    ctx->pc = 0x331628u;
    // 0x331628: 0xc0cf768  jal         func_33DDA0
    ctx->pc = 0x331628u;
    SET_GPR_U32(ctx, 31, 0x331630u);
    ctx->pc = 0x33DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DDA0u, 0x331628u, 0x331630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331630u;
label_331630:
    // 0x331630: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x331630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331634: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x331634u;
    SET_GPR_U32(ctx, 31, 0x33163Cu);
    ctx->pc = 0x331638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331634u;
    // 0x331638: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x331634u, 0x33163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33163Cu;
label_33163c:
    // 0x33163c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x33163Cu;
    {
        const bool branch_taken_0x33163c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33163c) {
            ctx->pc = 0x331750u;
            goto label_331750;
        }
    }
    ctx->pc = 0x331644u;
label_331644:
    // 0x331644: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x331644u;
    SET_GPR_U32(ctx, 31, 0x33164Cu);
    ctx->pc = 0x331648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331644u;
    // 0x331648: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x331644u, 0x33164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33164Cu;
label_33164c:
    // 0x33164c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x33164Cu;
    {
        const bool branch_taken_0x33164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33164c) {
            ctx->pc = 0x331750u;
            goto label_331750;
        }
    }
    ctx->pc = 0x331654u;
label_331654:
    // 0x331654: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x331654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x331658: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33165c: 0xa040e818  sb          $zero, -0x17E8($v0)
    ctx->pc = 0x33165cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x331660: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x331660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x331664: 0xac60e800  sw          $zero, -0x1800($v1)
    ctx->pc = 0x331664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961152), GPR_U32(ctx, 0));
    // 0x331668: 0xac40e7f8  sw          $zero, -0x1808($v0)
    ctx->pc = 0x331668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 0));
    // 0x33166c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x33166cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x331670: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x331670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x331674: 0xc0d4d1c  jal         func_353470
    ctx->pc = 0x331674u;
    SET_GPR_U32(ctx, 31, 0x33167Cu);
    ctx->pc = 0x331678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331674u;
    // 0x331678: 0xa043e820  sb          $v1, -0x17E0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961184), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353470u, 0x331674u, 0x33167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33167Cu;
label_33167c:
    // 0x33167c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x33167cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x331680: 0xc0bf498  jal         func_2FD260
    ctx->pc = 0x331680u;
    SET_GPR_U32(ctx, 31, 0x331688u);
    ctx->pc = 0x331684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331680u;
    // 0x331684: 0xa040bf18  sb          $zero, -0x40E8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950680), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD260u, 0x331680u, 0x331688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331688u;
label_331688:
    // 0x331688: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x331688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33168c: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x33168Cu;
    SET_GPR_U32(ctx, 31, 0x331694u);
    ctx->pc = 0x331690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33168Cu;
    // 0x331690: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x33168Cu, 0x331694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331694u;
label_331694:
    // 0x331694: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x331694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x331698: 0xc0558e0  jal         func_156380
    ctx->pc = 0x331698u;
    SET_GPR_U32(ctx, 31, 0x3316A0u);
    ctx->pc = 0x33169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331698u;
    // 0x33169c: 0x24842240  addiu       $a0, $a0, 0x2240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x331698u, 0x3316A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3316A0u;
label_3316a0:
    // 0x3316a0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3316A0u;
    {
        const bool branch_taken_0x3316a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3316a0) {
            ctx->pc = 0x331750u;
            goto label_331750;
        }
    }
    ctx->pc = 0x3316A8u;
label_3316a8:
    // 0x3316a8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3316a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3316ac: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3316acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3316b0: 0xa040e818  sb          $zero, -0x17E8($v0)
    ctx->pc = 0x3316b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x3316b4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3316b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3316b8: 0xac60e800  sw          $zero, -0x1800($v1)
    ctx->pc = 0x3316b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961152), GPR_U32(ctx, 0));
    // 0x3316bc: 0xac40e7f8  sw          $zero, -0x1808($v0)
    ctx->pc = 0x3316bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 0));
    // 0x3316c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3316c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3316c4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3316c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3316c8: 0xc0bf42c  jal         func_2FD0B0
    ctx->pc = 0x3316C8u;
    SET_GPR_U32(ctx, 31, 0x3316D0u);
    ctx->pc = 0x3316CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3316C8u;
    // 0x3316cc: 0xa043e820  sb          $v1, -0x17E0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961184), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD0B0u, 0x3316C8u, 0x3316D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3316D0u;
label_3316d0:
    // 0x3316d0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3316d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3316d4: 0xc0558e0  jal         func_156380
    ctx->pc = 0x3316D4u;
    SET_GPR_U32(ctx, 31, 0x3316DCu);
    ctx->pc = 0x3316D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3316D4u;
    // 0x3316d8: 0x24841760  addiu       $a0, $a0, 0x1760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x3316D4u, 0x3316DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3316DCu;
label_3316dc:
    // 0x3316dc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3316DCu;
    {
        const bool branch_taken_0x3316dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3316dc) {
            ctx->pc = 0x331750u;
            goto label_331750;
        }
    }
    ctx->pc = 0x3316E4u;
label_3316e4:
    // 0x3316e4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3316e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3316e8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3316e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3316ec: 0xa040e818  sb          $zero, -0x17E8($v0)
    ctx->pc = 0x3316ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x3316f0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3316f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3316f4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3316f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3316f8: 0xac60e800  sw          $zero, -0x1800($v1)
    ctx->pc = 0x3316f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961152), GPR_U32(ctx, 0));
    // 0x3316fc: 0xac40e7f8  sw          $zero, -0x1808($v0)
    ctx->pc = 0x3316fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 0));
    // 0x331700: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x331700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x331704: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x331704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x331708: 0x2484e400  addiu       $a0, $a0, -0x1C00
    ctx->pc = 0x331708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960128));
    // 0x33170c: 0xc0558e0  jal         func_156380
    ctx->pc = 0x33170Cu;
    SET_GPR_U32(ctx, 31, 0x331714u);
    ctx->pc = 0x331710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33170Cu;
    // 0x331710: 0xa043e820  sb          $v1, -0x17E0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961184), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x33170Cu, 0x331714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331714u;
label_331714:
    // 0x331714: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x331714u;
    {
        const bool branch_taken_0x331714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331714) {
            ctx->pc = 0x331750u;
            goto label_331750;
        }
    }
    ctx->pc = 0x33171Cu;
label_33171c:
    // 0x33171c: 0xc0c0624  jal         func_301890
    ctx->pc = 0x33171Cu;
    SET_GPR_U32(ctx, 31, 0x331724u);
    ctx->pc = 0x301890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301890u, 0x33171Cu, 0x331724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331724u;
label_331724:
    // 0x331724: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x331724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x331728: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x331728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33172c: 0x9063dae0  lbu         $v1, -0x2520($v1)
    ctx->pc = 0x33172cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957792)));
    // 0x331730: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x331730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x331734: 0xc054e1c  jal         func_153870
    ctx->pc = 0x331734u;
    SET_GPR_U32(ctx, 31, 0x33173Cu);
    ctx->pc = 0x331738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331734u;
    // 0x331738: 0xa043dae0  sb          $v1, -0x2520($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957792), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153870u, 0x331734u, 0x33173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33173Cu;
label_33173c:
    // 0x33173c: 0xc0bf498  jal         func_2FD260
    ctx->pc = 0x33173Cu;
    SET_GPR_U32(ctx, 31, 0x331744u);
    ctx->pc = 0x2FD260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD260u, 0x33173Cu, 0x331744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331744u;
label_331744:
    // 0x331744: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x331744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x331748: 0xc0558e0  jal         func_156380
    ctx->pc = 0x331748u;
    SET_GPR_U32(ctx, 31, 0x331750u);
    ctx->pc = 0x33174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331748u;
    // 0x33174c: 0x248441d0  addiu       $a0, $a0, 0x41D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x331748u, 0x331750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331750u;
label_331750:
    // 0x331750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x331750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_331754:
    // 0x331754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331758: 0x3e00008  jr          $ra
    ctx->pc = 0x331758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331758u;
        // 0x33175c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331760u;
    // 0x331760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331764: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33176c: 0x9064e818  lbu         $a0, -0x17E8($v1)
    ctx->pc = 0x33176cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x331770: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x331770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x331774: 0x108300b1  beq         $a0, $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x331774u;
    {
        const bool branch_taken_0x331774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x331774) {
            ctx->pc = 0x331A3Cu;
            goto label_331a3c;
        }
    }
    ctx->pc = 0x33177Cu;
    // 0x33177c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33177cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x331780: 0x10830091  beq         $a0, $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x331780u;
    {
        const bool branch_taken_0x331780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x331780) {
            ctx->pc = 0x3319C8u;
            goto label_3319c8;
        }
    }
    ctx->pc = 0x331788u;
    // 0x331788: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x331788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33178c: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x33178Cu;
    {
        const bool branch_taken_0x33178c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33178c) {
            ctx->pc = 0x3318DCu;
            goto label_3318dc;
        }
    }
    ctx->pc = 0x331794u;
    // 0x331794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x331794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331798: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x331798u;
    {
        const bool branch_taken_0x331798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x331798) {
            ctx->pc = 0x3317E0u;
            goto label_3317e0;
        }
    }
    ctx->pc = 0x3317A0u;
    // 0x3317a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3317A0u;
    {
        const bool branch_taken_0x3317a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3317a0) {
            ctx->pc = 0x3317B0u;
            goto label_3317b0;
        }
    }
    ctx->pc = 0x3317A8u;
    // 0x3317a8: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x3317A8u;
    {
        const bool branch_taken_0x3317a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3317ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3317A8u;
        // 0x3317ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3317a8) {
            ctx->pc = 0x331ACCu;
            goto label_331acc;
        }
    }
    ctx->pc = 0x3317B0u;
label_3317b0:
    // 0x3317b0: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x3317B0u;
    SET_GPR_U32(ctx, 31, 0x3317B8u);
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x3317B0u, 0x3317B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3317B8u;
label_3317b8:
    // 0x3317b8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3317b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3317bc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3317bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3317c0: 0x8c66e800  lw          $a2, -0x1800($v1)
    ctx->pc = 0x3317c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961152)));
    // 0x3317c4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3317c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3317c8: 0xac86e808  sw          $a2, -0x17F8($a0)
    ctx->pc = 0x3317c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961160), GPR_U32(ctx, 6));
    // 0x3317cc: 0x9065e818  lbu         $a1, -0x17E8($v1)
    ctx->pc = 0x3317ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x3317d0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3317d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3317d4: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3317d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3317d8: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x3317D8u;
    {
        const bool branch_taken_0x3317d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3317DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3317D8u;
        // 0x3317dc: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3317d8) {
            ctx->pc = 0x331AC8u;
            goto label_331ac8;
        }
    }
    ctx->pc = 0x3317E0u;
label_3317e0:
    // 0x3317e0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3317e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3317e4: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x3317e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x3317e8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3317e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3317ec: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x3317ECu;
    {
        const bool branch_taken_0x3317ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3317ec) {
            ctx->pc = 0x331890u;
            goto label_331890;
        }
    }
    ctx->pc = 0x3317F4u;
    // 0x3317f4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3317f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3317f8: 0x8c63e7c8  lw          $v1, -0x1838($v1)
    ctx->pc = 0x3317f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x3317fc: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x3317fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x331800: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x331800u;
    {
        const bool branch_taken_0x331800 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x331800) {
            ctx->pc = 0x331844u;
            goto label_331844;
        }
    }
    ctx->pc = 0x331808u;
    // 0x331808: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x331808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
    // 0x33180c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x33180cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x331810: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x331810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x331814: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x331814u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x331818: 0x244800a0  addiu       $t0, $v0, 0xA0
    ctx->pc = 0x331818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x33181c: 0x24841ae0  addiu       $a0, $a0, 0x1AE0
    ctx->pc = 0x33181cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6880));
    // 0x331820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x331820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331824: 0x2407fee0  addiu       $a3, $zero, -0x120
    ctx->pc = 0x331824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
    // 0x331828: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x331828u;
    SET_GPR_U32(ctx, 31, 0x331830u);
    ctx->pc = 0x33182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331828u;
    // 0x33182c: 0x24090020  addiu       $t1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF70u, 0x331828u, 0x331830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331830u;
label_331830:
    // 0x331830: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x331830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x331834: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331838: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x331838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33183c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33183cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x331840: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x331840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
label_331844:
    // 0x331844: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331848: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x331848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33184c: 0x8c63e7c8  lw          $v1, -0x1838($v1)
    ctx->pc = 0x33184cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x331850: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x331850u;
    {
        const bool branch_taken_0x331850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x331850) {
            ctx->pc = 0x331890u;
            goto label_331890;
        }
    }
    ctx->pc = 0x331858u;
    // 0x331858: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x331858u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
    // 0x33185c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x33185cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x331860: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x331860u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x331864: 0x24841ae0  addiu       $a0, $a0, 0x1AE0
    ctx->pc = 0x331864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6880));
    // 0x331868: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x331868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33186c: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x33186cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x331870: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x331870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x331874: 0xc0cc004  jal         func_330010
    ctx->pc = 0x331874u;
    SET_GPR_U32(ctx, 31, 0x33187Cu);
    ctx->pc = 0x331878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331874u;
    // 0x331878: 0x240901e0  addiu       $t1, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330010u, 0x331874u, 0x33187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33187Cu;
label_33187c:
    // 0x33187c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33187cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x331880: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331884: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x331884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x331888: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x331888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33188c: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x33188cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
label_331890:
    // 0x331890: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331894: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x331894u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x331898: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x331898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x33189c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x33189Cu;
    {
        const bool branch_taken_0x33189c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33189c) {
            ctx->pc = 0x3318C4u;
            goto label_3318c4;
        }
    }
    ctx->pc = 0x3318A4u;
    // 0x3318a4: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x3318a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x3318a8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3318A8u;
    {
        const bool branch_taken_0x3318a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3318a8) {
            ctx->pc = 0x3318C4u;
            goto label_3318c4;
        }
    }
    ctx->pc = 0x3318B0u;
    // 0x3318b0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3318b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3318b4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3318b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3318b8: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x3318b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x3318bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3318bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3318c0: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x3318c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_3318c4:
    // 0x3318c4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3318c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3318c8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3318c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3318cc: 0x8c84e7d0  lw          $a0, -0x1830($a0)
    ctx->pc = 0x3318ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
    // 0x3318d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3318d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3318d4: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x3318D4u;
    {
        const bool branch_taken_0x3318d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3318D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3318D4u;
        // 0x3318d8: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3318d4) {
            ctx->pc = 0x331AC8u;
            goto label_331ac8;
        }
    }
    ctx->pc = 0x3318DCu;
label_3318dc:
    // 0x3318dc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3318dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3318e0: 0x8044e800  lb          $a0, -0x1800($v0)
    ctx->pc = 0x3318e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961152)));
    // 0x3318e4: 0xc0cd948  jal         func_336520
    ctx->pc = 0x3318E4u;
    SET_GPR_U32(ctx, 31, 0x3318ECu);
    ctx->pc = 0x3318E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3318E4u;
    // 0x3318e8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336520u, 0x3318E4u, 0x3318ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3318ECu;
label_3318ec:
    // 0x3318ec: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3318ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3318f0: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x3318f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3318f4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3318f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3318f8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3318f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3318fc: 0xac43e800  sw          $v1, -0x1800($v0)
    ctx->pc = 0x3318fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961152), GPR_U32(ctx, 3));
    // 0x331900: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x331900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x331904: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x331904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x331908: 0xc0cdabc  jal         func_336AF0
    ctx->pc = 0x331908u;
    SET_GPR_U32(ctx, 31, 0x331910u);
    ctx->pc = 0x33190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331908u;
    // 0x33190c: 0xac43e808  sw          $v1, -0x17F8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961160), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336AF0u, 0x331908u, 0x331910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331910u;
label_331910:
    // 0x331910: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x331910u;
    {
        const bool branch_taken_0x331910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331910) {
            ctx->pc = 0x331914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331910u;
            // 0x331914: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331968u;
            goto label_331968;
        }
    }
    ctx->pc = 0x331918u;
    // 0x331918: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x331918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33191c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x33191cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x331920: 0x9467ea22  lhu         $a3, -0x15DE($v1)
    ctx->pc = 0x331920u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961698)));
    // 0x331924: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x331924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x331928: 0xa086e818  sb          $a2, -0x17E8($a0)
    ctx->pc = 0x331928u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294961176), (uint8_t)GPR_U32(ctx, 6));
    // 0x33192c: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x33192cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x331930: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x331930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x331934: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331938: 0x30e62000  andi        $a2, $a3, 0x2000
    ctx->pc = 0x331938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8192);
    // 0x33193c: 0x8c63e808  lw          $v1, -0x17F8($v1)
    ctx->pc = 0x33193cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961160)));
    // 0x331940: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x331940u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x331944: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x331944u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x331948: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x331948u;
    {
        const bool branch_taken_0x331948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x33194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331948u;
        // 0x33194c: 0xa0a69480  sb          $a2, -0x6B80($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294939776), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331948) {
            ctx->pc = 0x33195Cu;
            goto label_33195c;
        }
    }
    ctx->pc = 0x331950u;
    // 0x331950: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x331950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x331954: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331958: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x331958u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_33195c:
    // 0x33195c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33195cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331960: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x331960u;
    {
        const bool branch_taken_0x331960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331960u;
        // 0x331964: 0xa060e810  sb          $zero, -0x17F0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331960) {
            ctx->pc = 0x33198Cu;
            goto label_33198c;
        }
    }
    ctx->pc = 0x331968u;
label_331968:
    // 0x331968: 0xc0cdabc  jal         func_336AF0
    ctx->pc = 0x331968u;
    SET_GPR_U32(ctx, 31, 0x331970u);
    ctx->pc = 0x33196Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331968u;
    // 0x33196c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336AF0u, 0x331968u, 0x331970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331970u;
label_331970:
    // 0x331970: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x331970u;
    {
        const bool branch_taken_0x331970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331970) {
            ctx->pc = 0x33198Cu;
            goto label_33198c;
        }
    }
    ctx->pc = 0x331978u;
    // 0x331978: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x331978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33197c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33197cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331980: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x331980u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
    // 0x331984: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331988: 0xa060e810  sb          $zero, -0x17F0($v1)
    ctx->pc = 0x331988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
label_33198c:
    // 0x33198c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33198cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331990: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x331990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x331994: 0x28610055  slti        $at, $v1, 0x55
    ctx->pc = 0x331994u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)85) ? 1 : 0);
    // 0x331998: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x331998u;
    {
        const bool branch_taken_0x331998 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x331998) {
            ctx->pc = 0x331AC8u;
            goto label_331ac8;
        }
    }
    ctx->pc = 0x3319A0u;
    // 0x3319a0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x3319a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3319a4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3319a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3319a8: 0xac64e7d0  sw          $a0, -0x1830($v1)
    ctx->pc = 0x3319a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
    // 0x3319ac: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x3319acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x3319b0: 0x14830045  bne         $a0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x3319B0u;
    {
        const bool branch_taken_0x3319b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3319b0) {
            ctx->pc = 0x331AC8u;
            goto label_331ac8;
        }
    }
    ctx->pc = 0x3319B8u;
    // 0x3319b8: 0xc0c35a0  jal         func_30D680
    ctx->pc = 0x3319B8u;
    SET_GPR_U32(ctx, 31, 0x3319C0u);
    ctx->pc = 0x30D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D680u, 0x3319B8u, 0x3319C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3319C0u;
label_3319c0:
    // 0x3319c0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3319C0u;
    {
        const bool branch_taken_0x3319c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3319c0) {
            ctx->pc = 0x331AC8u;
            goto label_331ac8;
        }
    }
    ctx->pc = 0x3319C8u;
label_3319c8:
    // 0x3319c8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3319c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3319cc: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x3319ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x3319d0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x3319d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3319d4: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x3319D4u;
    {
        const bool branch_taken_0x3319d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3319d4) {
            ctx->pc = 0x331AC8u;
            goto label_331ac8;
        }
    }
    ctx->pc = 0x3319DCu;
    // 0x3319dc: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x3319dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x3319e0: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3319E0u;
    {
        const bool branch_taken_0x3319e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3319e0) {
            ctx->pc = 0x331AC8u;
            goto label_331ac8;
        }
    }
    ctx->pc = 0x3319E8u;
    // 0x3319e8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3319e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3319ec: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3319ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3319f0: 0x8c42e808  lw          $v0, -0x17F8($v0)
    ctx->pc = 0x3319f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x3319f4: 0x24631850  addiu       $v1, $v1, 0x1850
    ctx->pc = 0x3319f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6224));
    // 0x3319f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3319f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3319fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3319fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x331a00: 0xc0558e0  jal         func_156380
    ctx->pc = 0x331A00u;
    SET_GPR_U32(ctx, 31, 0x331A08u);
    ctx->pc = 0x331A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331A00u;
    // 0x331a04: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x331A00u, 0x331A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A08u;
label_331a08:
    // 0x331a08: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331a0c: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x331a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x331a10: 0x8c67e808  lw          $a3, -0x17F8($v1)
    ctx->pc = 0x331a10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961160)));
    // 0x331a14: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x331a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x331a18: 0x24c61e78  addiu       $a2, $a2, 0x1E78
    ctx->pc = 0x331a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7800));
    // 0x331a1c: 0xa080e818  sb          $zero, -0x17E8($a0)
    ctx->pc = 0x331a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x331a20: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x331a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x331a24: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331a28: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x331a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x331a2c: 0xac60e800  sw          $zero, -0x1800($v1)
    ctx->pc = 0x331a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961152), GPR_U32(ctx, 0));
    // 0x331a30: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x331a30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x331a34: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x331A34u;
    {
        const bool branch_taken_0x331a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331A34u;
        // 0x331a38: 0xa0a3e820  sb          $v1, -0x17E0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294961184), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331a34) {
            ctx->pc = 0x331AC8u;
            goto label_331ac8;
        }
    }
    ctx->pc = 0x331A3Cu;
label_331a3c:
    // 0x331a3c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331a40: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x331a40u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x331a44: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x331a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x331a48: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x331A48u;
    {
        const bool branch_taken_0x331a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x331a48) {
            ctx->pc = 0x331AC8u;
            goto label_331ac8;
        }
    }
    ctx->pc = 0x331A50u;
    // 0x331a50: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x331a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x331a54: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x331A54u;
    {
        const bool branch_taken_0x331a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x331a54) {
            ctx->pc = 0x331AC8u;
            goto label_331ac8;
        }
    }
    ctx->pc = 0x331A5Cu;
    // 0x331a5c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x331a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x331a60: 0xc0558e0  jal         func_156380
    ctx->pc = 0x331A60u;
    SET_GPR_U32(ctx, 31, 0x331A68u);
    ctx->pc = 0x331A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331A60u;
    // 0x331a64: 0x248403d0  addiu       $a0, $a0, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x331A60u, 0x331A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A68u;
label_331a68:
    // 0x331a68: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x331a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x331a6c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x331a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x331a70: 0xa040e820  sb          $zero, -0x17E0($v0)
    ctx->pc = 0x331a70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961184), (uint8_t)GPR_U32(ctx, 0));
    // 0x331a74: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x331a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x331a78: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x331a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x331a7c: 0xa043e818  sb          $v1, -0x17E8($v0)
    ctx->pc = 0x331a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
    // 0x331a80: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x331a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x331a84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x331a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331a88: 0xac44e800  sw          $a0, -0x1800($v0)
    ctx->pc = 0x331a88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961152), GPR_U32(ctx, 4));
    // 0x331a8c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x331a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x331a90: 0xc0bf458  jal         func_2FD160
    ctx->pc = 0x331A90u;
    SET_GPR_U32(ctx, 31, 0x331A98u);
    ctx->pc = 0x331A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331A90u;
    // 0x331a94: 0xac43e7f8  sw          $v1, -0x1808($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD160u, 0x331A90u, 0x331A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A98u;
label_331a98:
    // 0x331a98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x331A98u;
    {
        const bool branch_taken_0x331a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331a98) {
            ctx->pc = 0x331ABCu;
            goto label_331abc;
        }
    }
    ctx->pc = 0x331AA0u;
    // 0x331aa0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x331aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x331aa4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x331aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x331aa8: 0x2484f690  addiu       $a0, $a0, -0x970
    ctx->pc = 0x331aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964880));
    // 0x331aac: 0xc0558d4  jal         func_156350
    ctx->pc = 0x331AACu;
    SET_GPR_U32(ctx, 31, 0x331AB4u);
    ctx->pc = 0x331AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331AACu;
    // 0x331ab0: 0x24a503d0  addiu       $a1, $a1, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x331AACu, 0x331AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331AB4u;
label_331ab4:
    // 0x331ab4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x331AB4u;
    {
        const bool branch_taken_0x331ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331ab4) {
            ctx->pc = 0x331AC8u;
            goto label_331ac8;
        }
    }
    ctx->pc = 0x331ABCu;
label_331abc:
    // 0x331abc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x331abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x331ac0: 0xc0558e0  jal         func_156380
    ctx->pc = 0x331AC0u;
    SET_GPR_U32(ctx, 31, 0x331AC8u);
    ctx->pc = 0x331AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331AC0u;
    // 0x331ac4: 0x248403d0  addiu       $a0, $a0, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x331AC0u, 0x331AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331AC8u;
label_331ac8:
    // 0x331ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_331acc:
    // 0x331acc: 0x3e00008  jr          $ra
    ctx->pc = 0x331ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331ACCu;
        // 0x331ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331AD4u;
    // 0x331ad4: 0x0  nop
    ctx->pc = 0x331ad4u;
    // NOP
    // 0x331ad8: 0x0  nop
    ctx->pc = 0x331ad8u;
    // NOP
    // 0x331adc: 0x0  nop
    ctx->pc = 0x331adcu;
    // NOP
    // 0x331ae0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x331ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x331ae4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x331ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x331ae8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x331ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x331aec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x331aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x331af0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x331af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x331af4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x331af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x331af8: 0xc0cc088  jal         func_330220
    ctx->pc = 0x331AF8u;
    SET_GPR_U32(ctx, 31, 0x331B00u);
    ctx->pc = 0x331AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331AF8u;
    // 0x331afc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330220u, 0x331AF8u, 0x331B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331B00u;
label_331b00:
    // 0x331b00: 0x8e130010  lw          $s3, 0x10($s0)
    ctx->pc = 0x331b00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x331b04: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x331b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x331b08: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x331b08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x331b0c: 0x86720002  lh          $s2, 0x2($s3)
    ctx->pc = 0x331b0cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x331b10: 0x86710004  lh          $s1, 0x4($s3)
    ctx->pc = 0x331b10u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x331b14: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x331B14u;
    {
        const bool branch_taken_0x331b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x331B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331B14u;
        // 0x331b18: 0x241000c0  addiu       $s0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331b14) {
            ctx->pc = 0x331B20u;
            goto label_331b20;
        }
    }
    ctx->pc = 0x331B1Cu;
    // 0x331b1c: 0x24100040  addiu       $s0, $zero, 0x40
    ctx->pc = 0x331b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_331b20:
    // 0x331b20: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x331b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x331b24: 0x8c42e800  lw          $v0, -0x1800($v0)
    ctx->pc = 0x331b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961152)));
    // 0x331b28: 0x1443002a  bne         $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x331B28u;
    {
        const bool branch_taken_0x331b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x331b28) {
            ctx->pc = 0x331BD4u;
            goto label_331bd4;
        }
    }
    ctx->pc = 0x331B30u;
    // 0x331b30: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x331b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x331b34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x331b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331b38: 0x24841ae4  addiu       $a0, $a0, 0x1AE4
    ctx->pc = 0x331b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6884));
    // 0x331b3c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x331B3Cu;
    SET_GPR_U32(ctx, 31, 0x331B44u);
    ctx->pc = 0x331B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331B3Cu;
    // 0x331b40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x331B3Cu, 0x331B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331B44u;
label_331b44:
    // 0x331b44: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x331b44u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x331b48: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x331b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x331b4c: 0x256b1af0  addiu       $t3, $t3, 0x1AF0
    ctx->pc = 0x331b4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 6896));
    // 0x331b50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x331b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331b54: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x331b54u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x331b58: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x331b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x331b5c: 0x2625fff0  addiu       $a1, $s1, -0x10
    ctx->pc = 0x331b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x331b60: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x331b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x331b64: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x331b64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331b68: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x331b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x331b6c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x331b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x331b70: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x331b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x331b74: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x331b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x331b78: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x331b78u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x331b7c: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x331b7cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x331b80: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x331b80u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x331b84: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x331B84u;
    SET_GPR_U32(ctx, 31, 0x331B8Cu);
    ctx->pc = 0x331B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331B84u;
    // 0x331b88: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x331B84u, 0x331B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331B8Cu;
label_331b8c:
    // 0x331b8c: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x331b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x331b90: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x331b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x331b94: 0x24841afc  addiu       $a0, $a0, 0x1AFC
    ctx->pc = 0x331b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6908));
    // 0x331b98: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x331b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x331b9c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x331B9Cu;
    SET_GPR_U32(ctx, 31, 0x331BA4u);
    ctx->pc = 0x331BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331B9Cu;
    // 0x331ba0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x331B9Cu, 0x331BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331BA4u;
label_331ba4:
    // 0x331ba4: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x331ba4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x331ba8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x331ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x331bac: 0x24421a60  addiu       $v0, $v0, 0x1A60
    ctx->pc = 0x331bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6752));
    // 0x331bb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x331bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331bb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x331bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331bb8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x331bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x331bbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x331bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x331bc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x331bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x331bc4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x331BC4u;
    SET_GPR_U32(ctx, 31, 0x331BCCu);
    ctx->pc = 0x331BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331BC4u;
    // 0x331bc8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x331BC4u, 0x331BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331BCCu;
label_331bcc:
    // 0x331bcc: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x331BCCu;
    {
        const bool branch_taken_0x331bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331BCCu;
        // 0x331bd0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331bcc) {
            ctx->pc = 0x331C7Cu;
            goto label_331c7c;
        }
    }
    ctx->pc = 0x331BD4u;
label_331bd4:
    // 0x331bd4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x331bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x331bd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x331bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331bdc: 0x24841ac0  addiu       $a0, $a0, 0x1AC0
    ctx->pc = 0x331bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6848));
    // 0x331be0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x331be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331be4: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x331BE4u;
    SET_GPR_U32(ctx, 31, 0x331BECu);
    ctx->pc = 0x331BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331BE4u;
    // 0x331be8: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302BA0u, 0x331BE4u, 0x331BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331BECu;
label_331bec:
    // 0x331bec: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x331becu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x331bf0: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x331bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x331bf4: 0x256b1acc  addiu       $t3, $t3, 0x1ACC
    ctx->pc = 0x331bf4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 6860));
    // 0x331bf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x331bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331bfc: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x331bfcu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x331c00: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x331c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x331c04: 0x2625fff0  addiu       $a1, $s1, -0x10
    ctx->pc = 0x331c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x331c08: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x331c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x331c0c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x331c0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331c10: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x331c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x331c14: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x331c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x331c18: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x331c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x331c1c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x331c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x331c20: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x331c20u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x331c24: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x331c24u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x331c28: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x331c28u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x331c2c: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x331C2Cu;
    SET_GPR_U32(ctx, 31, 0x331C34u);
    ctx->pc = 0x331C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331C2Cu;
    // 0x331c30: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x331C2Cu, 0x331C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331C34u;
label_331c34:
    // 0x331c34: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x331c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x331c38: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x331c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x331c3c: 0x24841ad8  addiu       $a0, $a0, 0x1AD8
    ctx->pc = 0x331c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6872));
    // 0x331c40: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x331c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x331c44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x331c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331c48: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x331C48u;
    SET_GPR_U32(ctx, 31, 0x331C50u);
    ctx->pc = 0x331C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331C48u;
    // 0x331c4c: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302BA0u, 0x331C48u, 0x331C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331C50u;
label_331c50:
    // 0x331c50: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x331c50u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x331c54: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x331c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x331c58: 0x24421a60  addiu       $v0, $v0, 0x1A60
    ctx->pc = 0x331c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6752));
    // 0x331c5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x331c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331c60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x331c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331c64: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x331c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x331c68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x331c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x331c6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x331c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x331c70: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x331C70u;
    SET_GPR_U32(ctx, 31, 0x331C78u);
    ctx->pc = 0x331C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331C70u;
    // 0x331c74: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x331C70u, 0x331C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331C78u;
label_331c78:
    // 0x331c78: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x331c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_331c7c:
    // 0x331c7c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x331c7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x331c80: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x331c80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x331c84: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x331c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331c88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x331c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x331C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331C8Cu;
        // 0x331c90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331C94u;
    // 0x331c94: 0x0  nop
    ctx->pc = 0x331c94u;
    // NOP
    // 0x331c98: 0x0  nop
    ctx->pc = 0x331c98u;
    // NOP
    // 0x331c9c: 0x0  nop
    ctx->pc = 0x331c9cu;
    // NOP
    // 0x331ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x331ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x331ca4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331ca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x331ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x331cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x331cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x331cb0: 0x9066e818  lbu         $a2, -0x17E8($v1)
    ctx->pc = 0x331cb0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x331cb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x331cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x331cb8: 0x10c30136  beq         $a2, $v1, . + 4 + (0x136 << 2)
    ctx->pc = 0x331CB8u;
    {
        const bool branch_taken_0x331cb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x331cb8) {
            ctx->pc = 0x332194u;
            goto label_332194;
        }
    }
    ctx->pc = 0x331CC0u;
    // 0x331cc0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x331cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x331cc4: 0x10c30127  beq         $a2, $v1, . + 4 + (0x127 << 2)
    ctx->pc = 0x331CC4u;
    {
        const bool branch_taken_0x331cc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x331cc4) {
            ctx->pc = 0x332164u;
            goto label_332164;
        }
    }
    ctx->pc = 0x331CCCu;
    // 0x331ccc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x331cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x331cd0: 0x50c4009a  beql        $a2, $a0, . + 4 + (0x9A << 2)
    ctx->pc = 0x331CD0u;
    {
        const bool branch_taken_0x331cd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x331cd0) {
            ctx->pc = 0x331CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331CD0u;
            // 0x331cd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331F3Cu;
            goto label_331f3c;
        }
    }
    ctx->pc = 0x331CD8u;
    // 0x331cd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x331cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331cdc: 0x10c50011  beq         $a2, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x331CDCu;
    {
        const bool branch_taken_0x331cdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x331cdc) {
            ctx->pc = 0x331D24u;
            goto label_331d24;
        }
    }
    ctx->pc = 0x331CE4u;
    // 0x331ce4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x331CE4u;
    {
        const bool branch_taken_0x331ce4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x331ce4) {
            ctx->pc = 0x331CF4u;
            goto label_331cf4;
        }
    }
    ctx->pc = 0x331CECu;
    // 0x331cec: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x331CECu;
    {
        const bool branch_taken_0x331cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331CECu;
        // 0x331cf0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331cec) {
            ctx->pc = 0x3321C8u;
            goto label_3321c8;
        }
    }
    ctx->pc = 0x331CF4u;
label_331cf4:
    // 0x331cf4: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x331CF4u;
    SET_GPR_U32(ctx, 31, 0x331CFCu);
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x331CF4u, 0x331CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331CFCu;
label_331cfc:
    // 0x331cfc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331d00: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x331d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x331d04: 0x8c66e800  lw          $a2, -0x1800($v1)
    ctx->pc = 0x331d04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961152)));
    // 0x331d08: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331d0c: 0xac86e808  sw          $a2, -0x17F8($a0)
    ctx->pc = 0x331d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961160), GPR_U32(ctx, 6));
    // 0x331d10: 0x9065e818  lbu         $a1, -0x17E8($v1)
    ctx->pc = 0x331d10u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x331d14: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331d18: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x331d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x331d1c: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x331D1Cu;
    {
        const bool branch_taken_0x331d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D1Cu;
        // 0x331d20: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d1c) {
            ctx->pc = 0x3321C4u;
            goto label_3321c4;
        }
    }
    ctx->pc = 0x331D24u;
label_331d24:
    // 0x331d24: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331d28: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x331d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x331d2c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x331d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x331d30: 0x14600067  bnez        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x331D30u;
    {
        const bool branch_taken_0x331d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x331d30) {
            ctx->pc = 0x331ED0u;
            goto label_331ed0;
        }
    }
    ctx->pc = 0x331D38u;
    // 0x331d38: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331d3c: 0x8c67e7c8  lw          $a3, -0x1838($v1)
    ctx->pc = 0x331d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x331d40: 0x28e1000b  slti        $at, $a3, 0xB
    ctx->pc = 0x331d40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x331d44: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x331D44u;
    {
        const bool branch_taken_0x331d44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x331d44) {
            ctx->pc = 0x331ED0u;
            goto label_331ed0;
        }
    }
    ctx->pc = 0x331D4Cu;
    // 0x331d4c: 0x2ce1000b  sltiu       $at, $a3, 0xB
    ctx->pc = 0x331d4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x331d50: 0x1020005f  beqz        $at, . + 4 + (0x5F << 2)
    ctx->pc = 0x331D50u;
    {
        const bool branch_taken_0x331d50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x331d50) {
            ctx->pc = 0x331ED0u;
            goto label_331ed0;
        }
    }
    ctx->pc = 0x331D58u;
    // 0x331d58: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x331d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x331d5c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x331d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x331d60: 0x24844730  addiu       $a0, $a0, 0x4730
    ctx->pc = 0x331d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18224));
    // 0x331d64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x331d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x331d68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x331d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x331d6c: 0x600008  jr          $v1
    ctx->pc = 0x331D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x331D74u: goto label_331d74;
            case 0x331DA8u: goto label_331da8;
            case 0x331DECu: goto label_331dec;
            case 0x331E28u: goto label_331e28;
            case 0x331E64u: goto label_331e64;
            case 0x331EA0u: goto label_331ea0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331D6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x331D74u;
label_331d74:
    // 0x331d74: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x331d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x331d78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x331d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331d7c: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x331d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
    // 0x331d80: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x331d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x331d84: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x331d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x331d88: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x331D88u;
    SET_GPR_U32(ctx, 31, 0x331D90u);
    ctx->pc = 0x331D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331D88u;
    // 0x331d8c: 0x24090160  addiu       $t1, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF70u, 0x331D88u, 0x331D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331D90u;
label_331d90:
    // 0x331d90: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x331d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x331d94: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331d98: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x331d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x331d9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x331d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x331da0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x331DA0u;
    {
        const bool branch_taken_0x331da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331DA0u;
        // 0x331da4: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331da0) {
            ctx->pc = 0x331ED0u;
            goto label_331ed0;
        }
    }
    ctx->pc = 0x331DA8u;
label_331da8:
    // 0x331da8: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x331da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x331dac: 0x7363c  dsll32      $a2, $a3, 24
    ctx->pc = 0x331dacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 24));
    // 0x331db0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x331db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x331db4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x331db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x331db8: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x331db8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x331dbc: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x331dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
    // 0x331dc0: 0x24480050  addiu       $t0, $v0, 0x50
    ctx->pc = 0x331dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x331dc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x331dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331dc8: 0x2407fe00  addiu       $a3, $zero, -0x200
    ctx->pc = 0x331dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x331dcc: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x331DCCu;
    SET_GPR_U32(ctx, 31, 0x331DD4u);
    ctx->pc = 0x331DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331DCCu;
    // 0x331dd0: 0x24090160  addiu       $t1, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF70u, 0x331DCCu, 0x331DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331DD4u;
label_331dd4:
    // 0x331dd4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x331dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x331dd8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331ddc: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x331ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x331de0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x331de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x331de4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x331DE4u;
    {
        const bool branch_taken_0x331de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331DE4u;
        // 0x331de8: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331de4) {
            ctx->pc = 0x331ED0u;
            goto label_331ed0;
        }
    }
    ctx->pc = 0x331DECu;
label_331dec:
    // 0x331dec: 0x7363c  dsll32      $a2, $a3, 24
    ctx->pc = 0x331decu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 24));
    // 0x331df0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x331df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x331df4: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x331df4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x331df8: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x331df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
    // 0x331dfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x331dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331e00: 0x2407fe00  addiu       $a3, $zero, -0x200
    ctx->pc = 0x331e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x331e04: 0x24080120  addiu       $t0, $zero, 0x120
    ctx->pc = 0x331e04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x331e08: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x331E08u;
    SET_GPR_U32(ctx, 31, 0x331E10u);
    ctx->pc = 0x331E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331E08u;
    // 0x331e0c: 0x24090160  addiu       $t1, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF70u, 0x331E08u, 0x331E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331E10u;
label_331e10:
    // 0x331e10: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x331e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x331e14: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331e18: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x331e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x331e1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x331e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x331e20: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x331E20u;
    {
        const bool branch_taken_0x331e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E20u;
        // 0x331e24: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331e20) {
            ctx->pc = 0x331ED0u;
            goto label_331ed0;
        }
    }
    ctx->pc = 0x331E28u;
label_331e28:
    // 0x331e28: 0x7363c  dsll32      $a2, $a3, 24
    ctx->pc = 0x331e28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 24));
    // 0x331e2c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x331e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x331e30: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x331e30u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x331e34: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x331e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
    // 0x331e38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x331e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331e3c: 0x2407fe00  addiu       $a3, $zero, -0x200
    ctx->pc = 0x331e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x331e40: 0x24080150  addiu       $t0, $zero, 0x150
    ctx->pc = 0x331e40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x331e44: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x331E44u;
    SET_GPR_U32(ctx, 31, 0x331E4Cu);
    ctx->pc = 0x331E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331E44u;
    // 0x331e48: 0x24090160  addiu       $t1, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF70u, 0x331E44u, 0x331E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331E4Cu;
label_331e4c:
    // 0x331e4c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x331e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x331e50: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331e54: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x331e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x331e58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x331e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x331e5c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x331E5Cu;
    {
        const bool branch_taken_0x331e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E5Cu;
        // 0x331e60: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331e5c) {
            ctx->pc = 0x331ED0u;
            goto label_331ed0;
        }
    }
    ctx->pc = 0x331E64u;
label_331e64:
    // 0x331e64: 0x7363c  dsll32      $a2, $a3, 24
    ctx->pc = 0x331e64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 24));
    // 0x331e68: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x331e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x331e6c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x331e6cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x331e70: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x331e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
    // 0x331e74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x331e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331e78: 0x2407fe00  addiu       $a3, $zero, -0x200
    ctx->pc = 0x331e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x331e7c: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x331e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x331e80: 0xc0cc004  jal         func_330010
    ctx->pc = 0x331E80u;
    SET_GPR_U32(ctx, 31, 0x331E88u);
    ctx->pc = 0x331E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331E80u;
    // 0x331e84: 0x240900c0  addiu       $t1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330010u, 0x331E80u, 0x331E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331E88u;
label_331e88:
    // 0x331e88: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x331e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x331e8c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331e90: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x331e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x331e94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x331e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x331e98: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x331E98u;
    {
        const bool branch_taken_0x331e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E98u;
        // 0x331e9c: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331e98) {
            ctx->pc = 0x331ED0u;
            goto label_331ed0;
        }
    }
    ctx->pc = 0x331EA0u;
label_331ea0:
    // 0x331ea0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x331ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x331ea4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x331ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x331ea8: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x331ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
    // 0x331eac: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x331eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x331eb0: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x331eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x331eb4: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x331EB4u;
    SET_GPR_U32(ctx, 31, 0x331EBCu);
    ctx->pc = 0x331EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331EB4u;
    // 0x331eb8: 0x240901e0  addiu       $t1, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF70u, 0x331EB4u, 0x331EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331EBCu;
label_331ebc:
    // 0x331ebc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x331ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x331ec0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331ec4: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x331ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x331ec8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x331ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x331ecc: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x331eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
label_331ed0:
    // 0x331ed0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331ed4: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x331ed4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x331ed8: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x331ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x331edc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x331EDCu;
    {
        const bool branch_taken_0x331edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x331edc) {
            ctx->pc = 0x331F24u;
            goto label_331f24;
        }
    }
    ctx->pc = 0x331EE4u;
    // 0x331ee4: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x331ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x331ee8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x331EE8u;
    {
        const bool branch_taken_0x331ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x331ee8) {
            ctx->pc = 0x331F24u;
            goto label_331f24;
        }
    }
    ctx->pc = 0x331EF0u;
    // 0x331ef0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331ef4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x331ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x331ef8: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x331ef8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x331efc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x331efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x331f00: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x331f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x331f04: 0x24842800  addiu       $a0, $a0, 0x2800
    ctx->pc = 0x331f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10240));
    // 0x331f08: 0x24a54648  addiu       $a1, $a1, 0x4648
    ctx->pc = 0x331f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17992));
    // 0x331f0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x331f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x331f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x331f14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x331f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x331f18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f1c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x331F1Cu;
    SET_GPR_U32(ctx, 31, 0x331F24u);
    ctx->pc = 0x331F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331F1Cu;
    // 0x331f20: 0xa043e818  sb          $v1, -0x17E8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x331F1Cu, 0x331F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331F24u;
label_331f24:
    // 0x331f24: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x331f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x331f28: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331f2c: 0x8c84e7d0  lw          $a0, -0x1830($a0)
    ctx->pc = 0x331f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
    // 0x331f30: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x331f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x331f34: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x331F34u;
    {
        const bool branch_taken_0x331f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331F34u;
        // 0x331f38: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331f34) {
            ctx->pc = 0x3321C4u;
            goto label_3321c4;
        }
    }
    ctx->pc = 0x331F3Cu;
label_331f3c:
    // 0x331f3c: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x331F3Cu;
    SET_GPR_U32(ctx, 31, 0x331F44u);
    ctx->pc = 0x331F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331F3Cu;
    // 0x331f40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x331F3Cu, 0x331F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331F44u;
label_331f44:
    // 0x331f44: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x331f44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x331f48: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x331f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x331f4c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x331f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x331f50: 0x8044e808  lb          $a0, -0x17F8($v0)
    ctx->pc = 0x331f50u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x331f54: 0xc0cd948  jal         func_336520
    ctx->pc = 0x331F54u;
    SET_GPR_U32(ctx, 31, 0x331F5Cu);
    ctx->pc = 0x331F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331F54u;
    // 0x331f58: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336520u, 0x331F54u, 0x331F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331F5Cu;
label_331f5c:
    // 0x331f5c: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x331f5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x331f60: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331f64: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x331f64u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x331f68: 0x2c81000b  sltiu       $at, $a0, 0xB
    ctx->pc = 0x331f68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x331f6c: 0x10200054  beqz        $at, . + 4 + (0x54 << 2)
    ctx->pc = 0x331F6Cu;
    {
        const bool branch_taken_0x331f6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x331F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331F6Cu;
        // 0x331f70: 0xac64e808  sw          $a0, -0x17F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331f6c) {
            ctx->pc = 0x3320C0u;
            goto label_3320c0;
        }
    }
    ctx->pc = 0x331F74u;
    // 0x331f74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x331f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x331f78: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x331f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x331f7c: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x331f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x331f80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x331f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x331f84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x331f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x331f88: 0x600008  jr          $v1
    ctx->pc = 0x331F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x331F90u: goto label_331f90;
            case 0x331FACu: goto label_331fac;
            case 0x331FC8u: goto label_331fc8;
            case 0x331FE4u: goto label_331fe4;
            case 0x332000u: goto label_332000;
            case 0x33201Cu: goto label_33201c;
            case 0x332038u: goto label_332038;
            case 0x332054u: goto label_332054;
            case 0x332070u: goto label_332070;
            case 0x33208Cu: goto label_33208c;
            case 0x3320A8u: goto label_3320a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331F88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x331F90u;
label_331f90:
    // 0x331f90: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x331f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x331f94: 0x8044b270  lb          $a0, -0x4D90($v0)
    ctx->pc = 0x331f94u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947440)));
    // 0x331f98: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x331F98u;
    SET_GPR_U32(ctx, 31, 0x331FA0u);
    ctx->pc = 0x331F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331F98u;
    // 0x331f9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3367C0u, 0x331F98u, 0x331FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331FA0u;
label_331fa0:
    // 0x331fa0: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x331fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x331fa4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x331FA4u;
    {
        const bool branch_taken_0x331fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331FA4u;
        // 0x331fa8: 0xa062b270  sb          $v0, -0x4D90($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947440), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331fa4) {
            ctx->pc = 0x3320C0u;
            goto label_3320c0;
        }
    }
    ctx->pc = 0x331FACu;
label_331fac:
    // 0x331fac: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x331facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x331fb0: 0x8044b271  lb          $a0, -0x4D8F($v0)
    ctx->pc = 0x331fb0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947441)));
    // 0x331fb4: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x331FB4u;
    SET_GPR_U32(ctx, 31, 0x331FBCu);
    ctx->pc = 0x331FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331FB4u;
    // 0x331fb8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3367C0u, 0x331FB4u, 0x331FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331FBCu;
label_331fbc:
    // 0x331fbc: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x331fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x331fc0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x331FC0u;
    {
        const bool branch_taken_0x331fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331FC0u;
        // 0x331fc4: 0xa062b271  sb          $v0, -0x4D8F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947441), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331fc0) {
            ctx->pc = 0x3320C0u;
            goto label_3320c0;
        }
    }
    ctx->pc = 0x331FC8u;
label_331fc8:
    // 0x331fc8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x331fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x331fcc: 0x8044b272  lb          $a0, -0x4D8E($v0)
    ctx->pc = 0x331fccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947442)));
    // 0x331fd0: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x331FD0u;
    SET_GPR_U32(ctx, 31, 0x331FD8u);
    ctx->pc = 0x331FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331FD0u;
    // 0x331fd4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3367C0u, 0x331FD0u, 0x331FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331FD8u;
label_331fd8:
    // 0x331fd8: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x331fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x331fdc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x331FDCu;
    {
        const bool branch_taken_0x331fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331FDCu;
        // 0x331fe0: 0xa062b272  sb          $v0, -0x4D8E($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947442), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331fdc) {
            ctx->pc = 0x3320C0u;
            goto label_3320c0;
        }
    }
    ctx->pc = 0x331FE4u;
label_331fe4:
    // 0x331fe4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x331fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x331fe8: 0x8044b274  lb          $a0, -0x4D8C($v0)
    ctx->pc = 0x331fe8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947444)));
    // 0x331fec: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x331FECu;
    SET_GPR_U32(ctx, 31, 0x331FF4u);
    ctx->pc = 0x331FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331FECu;
    // 0x331ff0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3367C0u, 0x331FECu, 0x331FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331FF4u;
label_331ff4:
    // 0x331ff4: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x331ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x331ff8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x331FF8u;
    {
        const bool branch_taken_0x331ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331FF8u;
        // 0x331ffc: 0xa062b274  sb          $v0, -0x4D8C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947444), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331ff8) {
            ctx->pc = 0x3320C0u;
            goto label_3320c0;
        }
    }
    ctx->pc = 0x332000u;
label_332000:
    // 0x332000: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x332000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x332004: 0x8044b273  lb          $a0, -0x4D8D($v0)
    ctx->pc = 0x332004u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947443)));
    // 0x332008: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x332008u;
    SET_GPR_U32(ctx, 31, 0x332010u);
    ctx->pc = 0x33200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332008u;
    // 0x33200c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3367C0u, 0x332008u, 0x332010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332010u;
label_332010:
    // 0x332010: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x332010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x332014: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x332014u;
    {
        const bool branch_taken_0x332014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332014u;
        // 0x332018: 0xa062b273  sb          $v0, -0x4D8D($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947443), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332014) {
            ctx->pc = 0x3320C0u;
            goto label_3320c0;
        }
    }
    ctx->pc = 0x33201Cu;
label_33201c:
    // 0x33201c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33201cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x332020: 0x8044b275  lb          $a0, -0x4D8B($v0)
    ctx->pc = 0x332020u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947445)));
    // 0x332024: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x332024u;
    SET_GPR_U32(ctx, 31, 0x33202Cu);
    ctx->pc = 0x332028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332024u;
    // 0x332028: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3367C0u, 0x332024u, 0x33202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33202Cu;
label_33202c:
    // 0x33202c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33202cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x332030: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x332030u;
    {
        const bool branch_taken_0x332030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332030u;
        // 0x332034: 0xa062b275  sb          $v0, -0x4D8B($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947445), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332030) {
            ctx->pc = 0x3320C0u;
            goto label_3320c0;
        }
    }
    ctx->pc = 0x332038u;
label_332038:
    // 0x332038: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x332038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33203c: 0x8044b276  lb          $a0, -0x4D8A($v0)
    ctx->pc = 0x33203cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947446)));
    // 0x332040: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x332040u;
    SET_GPR_U32(ctx, 31, 0x332048u);
    ctx->pc = 0x332044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332040u;
    // 0x332044: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3367C0u, 0x332040u, 0x332048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332048u;
label_332048:
    // 0x332048: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x332048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33204c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x33204Cu;
    {
        const bool branch_taken_0x33204c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33204Cu;
        // 0x332050: 0xa062b276  sb          $v0, -0x4D8A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947446), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33204c) {
            ctx->pc = 0x3320C0u;
            goto label_3320c0;
        }
    }
    ctx->pc = 0x332054u;
label_332054:
    // 0x332054: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x332054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x332058: 0x8044b277  lb          $a0, -0x4D89($v0)
    ctx->pc = 0x332058u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947447)));
    // 0x33205c: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x33205Cu;
    SET_GPR_U32(ctx, 31, 0x332064u);
    ctx->pc = 0x332060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33205Cu;
    // 0x332060: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3367C0u, 0x33205Cu, 0x332064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332064u;
label_332064:
    // 0x332064: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x332064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x332068: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x332068u;
    {
        const bool branch_taken_0x332068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332068u;
        // 0x33206c: 0xa062b277  sb          $v0, -0x4D89($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947447), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332068) {
            ctx->pc = 0x3320C0u;
            goto label_3320c0;
        }
    }
    ctx->pc = 0x332070u;
label_332070:
    // 0x332070: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x332070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x332074: 0x8044b278  lb          $a0, -0x4D88($v0)
    ctx->pc = 0x332074u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947448)));
    // 0x332078: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x332078u;
    SET_GPR_U32(ctx, 31, 0x332080u);
    ctx->pc = 0x33207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332078u;
    // 0x33207c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3367C0u, 0x332078u, 0x332080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332080u;
label_332080:
    // 0x332080: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x332080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x332084: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x332084u;
    {
        const bool branch_taken_0x332084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332084u;
        // 0x332088: 0xa062b278  sb          $v0, -0x4D88($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947448), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332084) {
            ctx->pc = 0x3320C0u;
            goto label_3320c0;
        }
    }
    ctx->pc = 0x33208Cu;
label_33208c:
    // 0x33208c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33208cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x332090: 0x8044b279  lb          $a0, -0x4D87($v0)
    ctx->pc = 0x332090u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947449)));
    // 0x332094: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x332094u;
    SET_GPR_U32(ctx, 31, 0x33209Cu);
    ctx->pc = 0x332098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332094u;
    // 0x332098: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3367C0u, 0x332094u, 0x33209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33209Cu;
label_33209c:
    // 0x33209c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33209cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3320a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3320A0u;
    {
        const bool branch_taken_0x3320a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3320A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3320A0u;
        // 0x3320a4: 0xa062b279  sb          $v0, -0x4D87($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947449), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3320a0) {
            ctx->pc = 0x3320C0u;
            goto label_3320c0;
        }
    }
    ctx->pc = 0x3320A8u;
label_3320a8:
    // 0x3320a8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3320a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3320ac: 0x8044b27a  lb          $a0, -0x4D86($v0)
    ctx->pc = 0x3320acu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947450)));
    // 0x3320b0: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x3320B0u;
    SET_GPR_U32(ctx, 31, 0x3320B8u);
    ctx->pc = 0x3320B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3320B0u;
    // 0x3320b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3367C0u, 0x3320B0u, 0x3320B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3320B8u;
label_3320b8:
    // 0x3320b8: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x3320b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3320bc: 0xa062b27a  sb          $v0, -0x4D86($v1)
    ctx->pc = 0x3320bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947450), (uint8_t)GPR_U32(ctx, 2));
label_3320c0:
    // 0x3320c0: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x3320c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3320c4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3320c4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3320c8: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x3320c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3320cc: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3320CCu;
    {
        const bool branch_taken_0x3320cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3320cc) {
            ctx->pc = 0x3320D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3320CCu;
            // 0x3320d0: 0x30c52000  andi        $a1, $a2, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3320F8u;
            goto label_3320f8;
        }
    }
    ctx->pc = 0x3320D4u;
    // 0x3320d4: 0xc0cdb04  jal         func_336C10
    ctx->pc = 0x3320D4u;
    SET_GPR_U32(ctx, 31, 0x3320DCu);
    ctx->pc = 0x336C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336C10u, 0x3320D4u, 0x3320DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3320DCu;
label_3320dc:
    // 0x3320dc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3320dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3320e0: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x3320e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x3320e4: 0xac40e7f8  sw          $zero, -0x1808($v0)
    ctx->pc = 0x3320e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 0));
    // 0x3320e8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3320E8u;
    SET_GPR_U32(ctx, 31, 0x3320F0u);
    ctx->pc = 0x3320ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3320E8u;
    // 0x3320ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3320E8u, 0x3320F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3320F0u;
label_3320f0:
    // 0x3320f0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3320F0u;
    {
        const bool branch_taken_0x3320f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3320f0) {
            ctx->pc = 0x3321C4u;
            goto label_3321c4;
        }
    }
    ctx->pc = 0x3320F8u;
label_3320f8:
    // 0x3320f8: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3320F8u;
    {
        const bool branch_taken_0x3320f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3320f8) {
            ctx->pc = 0x3320FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3320F8u;
            // 0x3320fc: 0x30c34000  andi        $v1, $a2, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x332118u;
            goto label_332118;
        }
    }
    ctx->pc = 0x332100u;
    // 0x332100: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332104: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x332104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x332108: 0x8c63e808  lw          $v1, -0x17F8($v1)
    ctx->pc = 0x332108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961160)));
    // 0x33210c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33210Cu;
    {
        const bool branch_taken_0x33210c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33210c) {
            ctx->pc = 0x332120u;
            goto label_332120;
        }
    }
    ctx->pc = 0x332114u;
    // 0x332114: 0x30c34000  andi        $v1, $a2, 0x4000
    ctx->pc = 0x332114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
label_332118:
    // 0x332118: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x332118u;
    {
        const bool branch_taken_0x332118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x332118) {
            ctx->pc = 0x3321C4u;
            goto label_3321c4;
        }
    }
    ctx->pc = 0x332120u;
label_332120:
    // 0x332120: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x332120u;
    {
        const bool branch_taken_0x332120 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x332120) {
            ctx->pc = 0x332124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332120u;
            // 0x332124: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33213Cu;
            goto label_33213c;
        }
    }
    ctx->pc = 0x332128u;
    // 0x332128: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x332128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x33212c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33212Cu;
    SET_GPR_U32(ctx, 31, 0x332134u);
    ctx->pc = 0x332130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33212Cu;
    // 0x332130: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33212Cu, 0x332134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332134u;
label_332134:
    // 0x332134: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x332134u;
    {
        const bool branch_taken_0x332134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332134) {
            ctx->pc = 0x332144u;
            goto label_332144;
        }
    }
    ctx->pc = 0x33213Cu;
label_33213c:
    // 0x33213c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33213Cu;
    SET_GPR_U32(ctx, 31, 0x332144u);
    ctx->pc = 0x332140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33213Cu;
    // 0x332140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33213Cu, 0x332144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332144u;
label_332144:
    // 0x332144: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332148: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x332148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33214c: 0x9065e818  lbu         $a1, -0x17E8($v1)
    ctx->pc = 0x33214cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x332150: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332154: 0xa060e810  sb          $zero, -0x17F0($v1)
    ctx->pc = 0x332154u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
    // 0x332158: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x332158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x33215c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x33215Cu;
    {
        const bool branch_taken_0x33215c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33215Cu;
        // 0x332160: 0xa083e818  sb          $v1, -0x17E8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294961176), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33215c) {
            ctx->pc = 0x3321C4u;
            goto label_3321c4;
        }
    }
    ctx->pc = 0x332164u;
label_332164:
    // 0x332164: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332168: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x332168u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33216c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x33216cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x332170: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x332170u;
    {
        const bool branch_taken_0x332170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x332170) {
            ctx->pc = 0x3321C4u;
            goto label_3321c4;
        }
    }
    ctx->pc = 0x332178u;
    // 0x332178: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x332178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x33217c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x33217Cu;
    {
        const bool branch_taken_0x33217c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33217c) {
            ctx->pc = 0x3321C4u;
            goto label_3321c4;
        }
    }
    ctx->pc = 0x332184u;
    // 0x332184: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x332184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x332188: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33218c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33218Cu;
    {
        const bool branch_taken_0x33218c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33218Cu;
        // 0x332190: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33218c) {
            ctx->pc = 0x3321C4u;
            goto label_3321c4;
        }
    }
    ctx->pc = 0x332194u;
label_332194:
    // 0x332194: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x332194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x332198: 0xc0558e0  jal         func_156380
    ctx->pc = 0x332198u;
    SET_GPR_U32(ctx, 31, 0x3321A0u);
    ctx->pc = 0x33219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332198u;
    // 0x33219c: 0x24841760  addiu       $a0, $a0, 0x1760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x332198u, 0x3321A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3321A0u;
label_3321a0:
    // 0x3321a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3321a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3321a4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3321a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3321a8: 0xa064e820  sb          $a0, -0x17E0($v1)
    ctx->pc = 0x3321a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961184), (uint8_t)GPR_U32(ctx, 4));
    // 0x3321ac: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3321acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3321b0: 0xa060e818  sb          $zero, -0x17E8($v1)
    ctx->pc = 0x3321b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x3321b4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3321b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3321b8: 0xac60e800  sw          $zero, -0x1800($v1)
    ctx->pc = 0x3321b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961152), GPR_U32(ctx, 0));
    // 0x3321bc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3321bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3321c0: 0xac60e7f8  sw          $zero, -0x1808($v1)
    ctx->pc = 0x3321c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961144), GPR_U32(ctx, 0));
label_3321c4:
    // 0x3321c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3321c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3321c8:
    // 0x3321c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3321c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3321cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3321CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3321D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3321CCu;
        // 0x3321d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3321CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3321D4u;
    // 0x3321d4: 0x0  nop
    ctx->pc = 0x3321d4u;
    // NOP
    // 0x3321d8: 0x0  nop
    ctx->pc = 0x3321d8u;
    // NOP
    // 0x3321dc: 0x0  nop
    ctx->pc = 0x3321dcu;
    // NOP
    // 0x3321e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3321e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3321e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3321e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3321e8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3321e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3321ec: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3321ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3321f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3321f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3321f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3321f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3321f8: 0x3c12003d  lui         $s2, 0x3D
    ctx->pc = 0x3321f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)61 << 16));
    // 0x3321fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3321fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x332200: 0x26521b10  addiu       $s2, $s2, 0x1B10
    ctx->pc = 0x332200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6928));
    // 0x332204: 0xc0cc088  jal         func_330220
    ctx->pc = 0x332204u;
    SET_GPR_U32(ctx, 31, 0x33220Cu);
    ctx->pc = 0x332208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332204u;
    // 0x332208: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330220u, 0x332204u, 0x33220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33220Cu;
label_33220c:
    // 0x33220c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x33220cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x332210: 0x84710002  lh          $s1, 0x2($v1)
    ctx->pc = 0x332210u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x332214: 0x84700004  lh          $s0, 0x4($v1)
    ctx->pc = 0x332214u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x332218: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x332218u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33221c: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x33221cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x332220: 0x5020016e  beql        $at, $zero, . + 4 + (0x16E << 2)
    ctx->pc = 0x332220u;
    {
        const bool branch_taken_0x332220 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x332220) {
            ctx->pc = 0x332224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332220u;
            // 0x332224: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3327DCu;
            goto label_3327dc;
        }
    }
    ctx->pc = 0x332228u;
    // 0x332228: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x332228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x33222c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33222cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332230: 0x24844780  addiu       $a0, $a0, 0x4780
    ctx->pc = 0x332230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18304));
    // 0x332234: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x332234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x332238: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x332238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33223c: 0x600008  jr          $v1
    ctx->pc = 0x33223Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x332244u: goto label_332244;
            case 0x33225Cu: goto label_33225c;
            case 0x3322B8u: goto label_3322b8;
            case 0x332314u: goto label_332314;
            case 0x332414u: goto label_332414;
            case 0x332470u: goto label_332470;
            case 0x3324CCu: goto label_3324cc;
            case 0x332598u: goto label_332598;
            case 0x332664u: goto label_332664;
            case 0x332730u: goto label_332730;
            case 0x3327C8u: goto label_3327c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33223Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x332244u;
label_332244:
    // 0x332244: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x332244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332248: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x332248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33224c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33224Cu;
    SET_GPR_U32(ctx, 31, 0x332254u);
    ctx->pc = 0x332250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33224Cu;
    // 0x332250: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33224Cu, 0x332254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332254u;
label_332254:
    // 0x332254: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x332254u;
    {
        const bool branch_taken_0x332254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332254) {
            ctx->pc = 0x3327D8u;
            goto label_3327d8;
        }
    }
    ctx->pc = 0x33225Cu;
label_33225c:
    // 0x33225c: 0x2625ff78  addiu       $a1, $s1, -0x88
    ctx->pc = 0x33225cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967160));
    // 0x332260: 0x26440318  addiu       $a0, $s2, 0x318
    ctx->pc = 0x332260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 792));
    // 0x332264: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332264u;
    SET_GPR_U32(ctx, 31, 0x33226Cu);
    ctx->pc = 0x332268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332264u;
    // 0x332268: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332264u, 0x33226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33226Cu;
label_33226c:
    // 0x33226c: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x33226cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x332270: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x332270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332274: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332274u;
    SET_GPR_U32(ctx, 31, 0x33227Cu);
    ctx->pc = 0x332278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332274u;
    // 0x332278: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332274u, 0x33227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33227Cu;
label_33227c:
    // 0x33227c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33227cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x332280: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x332280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x332284: 0x9042b270  lbu         $v0, -0x4D90($v0)
    ctx->pc = 0x332284u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947440)));
    // 0x332288: 0x24631e88  addiu       $v1, $v1, 0x1E88
    ctx->pc = 0x332288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7816));
    // 0x33228c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x33228cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x332290: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x332290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332294: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x332294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x332298: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x332298u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33229c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33229cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3322a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3322a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3322a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3322a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3322a8: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3322A8u;
    SET_GPR_U32(ctx, 31, 0x3322B0u);
    ctx->pc = 0x3322ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3322A8u;
    // 0x3322ac: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3322A8u, 0x3322B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3322B0u;
label_3322b0:
    // 0x3322b0: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x3322B0u;
    {
        const bool branch_taken_0x3322b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3322b0) {
            ctx->pc = 0x3327D8u;
            goto label_3327d8;
        }
    }
    ctx->pc = 0x3322B8u;
label_3322b8:
    // 0x3322b8: 0x2625ff78  addiu       $a1, $s1, -0x88
    ctx->pc = 0x3322b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967160));
    // 0x3322bc: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x3322bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x3322c0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3322C0u;
    SET_GPR_U32(ctx, 31, 0x3322C8u);
    ctx->pc = 0x3322C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3322C0u;
    // 0x3322c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3322C0u, 0x3322C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3322C8u;
label_3322c8:
    // 0x3322c8: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x3322c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x3322cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3322ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3322d0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3322D0u;
    SET_GPR_U32(ctx, 31, 0x3322D8u);
    ctx->pc = 0x3322D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3322D0u;
    // 0x3322d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3322D0u, 0x3322D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3322D8u;
label_3322d8:
    // 0x3322d8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3322d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3322dc: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3322dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3322e0: 0x9042b271  lbu         $v0, -0x4D8F($v0)
    ctx->pc = 0x3322e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947441)));
    // 0x3322e4: 0x24631e48  addiu       $v1, $v1, 0x1E48
    ctx->pc = 0x3322e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7752));
    // 0x3322e8: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3322e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3322ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3322ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3322f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3322f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3322f4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3322f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3322f8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3322f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3322fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3322fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x332300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x332304: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332304u;
    SET_GPR_U32(ctx, 31, 0x33230Cu);
    ctx->pc = 0x332308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332304u;
    // 0x332308: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332304u, 0x33230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33230Cu;
label_33230c:
    // 0x33230c: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x33230Cu;
    {
        const bool branch_taken_0x33230c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33230c) {
            ctx->pc = 0x3327D8u;
            goto label_3327d8;
        }
    }
    ctx->pc = 0x332314u;
label_332314:
    // 0x332314: 0x2625ff78  addiu       $a1, $s1, -0x88
    ctx->pc = 0x332314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967160));
    // 0x332318: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x332318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x33231c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33231Cu;
    SET_GPR_U32(ctx, 31, 0x332324u);
    ctx->pc = 0x332320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33231Cu;
    // 0x332320: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33231Cu, 0x332324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332324u;
label_332324:
    // 0x332324: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x332324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x332328: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x332328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33232c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33232Cu;
    SET_GPR_U32(ctx, 31, 0x332334u);
    ctx->pc = 0x332330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33232Cu;
    // 0x332330: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33232Cu, 0x332334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332334u;
label_332334:
    // 0x332334: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x332334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x332338: 0x9063b272  lbu         $v1, -0x4D8E($v1)
    ctx->pc = 0x332338u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947442)));
    // 0x33233c: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x33233cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x332340: 0x10200125  beqz        $at, . + 4 + (0x125 << 2)
    ctx->pc = 0x332340u;
    {
        const bool branch_taken_0x332340 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x332340) {
            ctx->pc = 0x3327D8u;
            goto label_3327d8;
        }
    }
    ctx->pc = 0x332348u;
    // 0x332348: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x332348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x33234c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33234cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332350: 0x24844760  addiu       $a0, $a0, 0x4760
    ctx->pc = 0x332350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18272));
    // 0x332354: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x332354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x332358: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x332358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33235c: 0x600008  jr          $v1
    ctx->pc = 0x33235Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x332364u: goto label_332364;
            case 0x33237Cu: goto label_33237c;
            case 0x3323A4u: goto label_3323a4;
            case 0x3323BCu: goto label_3323bc;
            case 0x3323E4u: goto label_3323e4;
            case 0x3323FCu: goto label_3323fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33235Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x332364u;
label_332364:
    // 0x332364: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x332364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x332368: 0x26440180  addiu       $a0, $s2, 0x180
    ctx->pc = 0x332368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    // 0x33236c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33236Cu;
    SET_GPR_U32(ctx, 31, 0x332374u);
    ctx->pc = 0x332370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33236Cu;
    // 0x332370: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33236Cu, 0x332374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332374u;
label_332374:
    // 0x332374: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x332374u;
    {
        const bool branch_taken_0x332374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332374) {
            ctx->pc = 0x3327D8u;
            goto label_3327d8;
        }
    }
    ctx->pc = 0x33237Cu;
label_33237c:
    // 0x33237c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x33237cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x332380: 0x26440174  addiu       $a0, $s2, 0x174
    ctx->pc = 0x332380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 372));
    // 0x332384: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332384u;
    SET_GPR_U32(ctx, 31, 0x33238Cu);
    ctx->pc = 0x332388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332384u;
    // 0x332388: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332384u, 0x33238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33238Cu;
label_33238c:
    // 0x33238c: 0x26250070  addiu       $a1, $s1, 0x70
    ctx->pc = 0x33238cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x332390: 0x26440180  addiu       $a0, $s2, 0x180
    ctx->pc = 0x332390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    // 0x332394: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332394u;
    SET_GPR_U32(ctx, 31, 0x33239Cu);
    ctx->pc = 0x332398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332394u;
    // 0x332398: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332394u, 0x33239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33239Cu;
label_33239c:
    // 0x33239c: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x33239Cu;
    {
        const bool branch_taken_0x33239c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33239c) {
            ctx->pc = 0x3327D8u;
            goto label_3327d8;
        }
    }
    ctx->pc = 0x3323A4u;
label_3323a4:
    // 0x3323a4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3323a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3323a8: 0x26440198  addiu       $a0, $s2, 0x198
    ctx->pc = 0x3323a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 408));
    // 0x3323ac: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3323ACu;
    SET_GPR_U32(ctx, 31, 0x3323B4u);
    ctx->pc = 0x3323B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3323ACu;
    // 0x3323b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3323ACu, 0x3323B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3323B4u;
label_3323b4:
    // 0x3323b4: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x3323B4u;
    {
        const bool branch_taken_0x3323b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3323b4) {
            ctx->pc = 0x3327D8u;
            goto label_3327d8;
        }
    }
    ctx->pc = 0x3323BCu;
label_3323bc:
    // 0x3323bc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3323bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3323c0: 0x26440174  addiu       $a0, $s2, 0x174
    ctx->pc = 0x3323c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 372));
    // 0x3323c4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3323C4u;
    SET_GPR_U32(ctx, 31, 0x3323CCu);
    ctx->pc = 0x3323C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3323C4u;
    // 0x3323c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3323C4u, 0x3323CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3323CCu;
label_3323cc:
    // 0x3323cc: 0x26250070  addiu       $a1, $s1, 0x70
    ctx->pc = 0x3323ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x3323d0: 0x2644018c  addiu       $a0, $s2, 0x18C
    ctx->pc = 0x3323d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 396));
    // 0x3323d4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3323D4u;
    SET_GPR_U32(ctx, 31, 0x3323DCu);
    ctx->pc = 0x3323D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3323D4u;
    // 0x3323d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3323D4u, 0x3323DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3323DCu;
label_3323dc:
    // 0x3323dc: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x3323DCu;
    {
        const bool branch_taken_0x3323dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3323dc) {
            ctx->pc = 0x3327D8u;
            goto label_3327d8;
        }
    }
    ctx->pc = 0x3323E4u;
label_3323e4:
    // 0x3323e4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3323e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3323e8: 0x2644018c  addiu       $a0, $s2, 0x18C
    ctx->pc = 0x3323e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 396));
    // 0x3323ec: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3323ECu;
    SET_GPR_U32(ctx, 31, 0x3323F4u);
    ctx->pc = 0x3323F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3323ECu;
    // 0x3323f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3323ECu, 0x3323F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3323F4u;
label_3323f4:
    // 0x3323f4: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x3323F4u;
    {
        const bool branch_taken_0x3323f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3323f4) {
            ctx->pc = 0x3327D8u;
            goto label_3327d8;
        }
    }
    ctx->pc = 0x3323FCu;
label_3323fc:
    // 0x3323fc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3323fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x332400: 0x264402d0  addiu       $a0, $s2, 0x2D0
    ctx->pc = 0x332400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
    // 0x332404: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332404u;
    SET_GPR_U32(ctx, 31, 0x33240Cu);
    ctx->pc = 0x332408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332404u;
    // 0x332408: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332404u, 0x33240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33240Cu;
label_33240c:
    // 0x33240c: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x33240Cu;
    {
        const bool branch_taken_0x33240c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33240c) {
            ctx->pc = 0x3327D8u;
            goto label_3327d8;
        }
    }
    ctx->pc = 0x332414u;
label_332414:
    // 0x332414: 0x2625ff40  addiu       $a1, $s1, -0xC0
    ctx->pc = 0x332414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967104));
    // 0x332418: 0x264402dc  addiu       $a0, $s2, 0x2DC
    ctx->pc = 0x332418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 732));
    // 0x33241c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33241Cu;
    SET_GPR_U32(ctx, 31, 0x332424u);
    ctx->pc = 0x332420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33241Cu;
    // 0x332420: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33241Cu, 0x332424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332424u;
label_332424:
    // 0x332424: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x332424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x332428: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x332428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33242c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33242Cu;
    SET_GPR_U32(ctx, 31, 0x332434u);
    ctx->pc = 0x332430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33242Cu;
    // 0x332430: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33242Cu, 0x332434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332434u;
label_332434:
    // 0x332434: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x332434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x332438: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x332438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x33243c: 0x9042b274  lbu         $v0, -0x4D8C($v0)
    ctx->pc = 0x33243cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947444)));
    // 0x332440: 0x24631e48  addiu       $v1, $v1, 0x1E48
    ctx->pc = 0x332440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7752));
    // 0x332444: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x332444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x332448: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x332448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33244c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x332450: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x332450u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x332454: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x332454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x332458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33245c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33245cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x332460: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332460u;
    SET_GPR_U32(ctx, 31, 0x332468u);
    ctx->pc = 0x332464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332460u;
    // 0x332464: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332460u, 0x332468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332468u;
label_332468:
    // 0x332468: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x332468u;
    {
        const bool branch_taken_0x332468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332468) {
            ctx->pc = 0x3327D8u;
            goto label_3327d8;
        }
    }
    ctx->pc = 0x332470u;
label_332470:
    // 0x332470: 0x2625ff00  addiu       $a1, $s1, -0x100
    ctx->pc = 0x332470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967040));
    // 0x332474: 0x26440324  addiu       $a0, $s2, 0x324
    ctx->pc = 0x332474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 804));
    // 0x332478: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332478u;
    SET_GPR_U32(ctx, 31, 0x332480u);
    ctx->pc = 0x33247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332478u;
    // 0x33247c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332478u, 0x332480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332480u;
label_332480:
    // 0x332480: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x332480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x332484: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x332484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332488: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332488u;
    SET_GPR_U32(ctx, 31, 0x332490u);
    ctx->pc = 0x33248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332488u;
    // 0x33248c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332488u, 0x332490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332490u;
label_332490:
    // 0x332490: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x332490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x332494: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x332494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x332498: 0x9042b273  lbu         $v0, -0x4D8D($v0)
    ctx->pc = 0x332498u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947443)));
    // 0x33249c: 0x24631e80  addiu       $v1, $v1, 0x1E80
    ctx->pc = 0x33249cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7808));
    // 0x3324a0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3324a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3324a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3324a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3324a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3324a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3324ac: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3324acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3324b0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3324b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3324b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3324b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3324b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3324b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3324bc: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3324BCu;
    SET_GPR_U32(ctx, 31, 0x3324C4u);
    ctx->pc = 0x3324C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3324BCu;
    // 0x3324c0: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3324BCu, 0x3324C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3324C4u;
label_3324c4:
    // 0x3324c4: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x3324C4u;
    {
        const bool branch_taken_0x3324c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3324c4) {
            ctx->pc = 0x3327D8u;
            goto label_3327d8;
        }
    }
    ctx->pc = 0x3324CCu;
label_3324cc:
    // 0x3324cc: 0x2625ff20  addiu       $a1, $s1, -0xE0
    ctx->pc = 0x3324ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967072));
    // 0x3324d0: 0x26440024  addiu       $a0, $s2, 0x24
    ctx->pc = 0x3324d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x3324d4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3324D4u;
    SET_GPR_U32(ctx, 31, 0x3324DCu);
    ctx->pc = 0x3324D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3324D4u;
    // 0x3324d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3324D4u, 0x3324DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3324DCu;
label_3324dc:
    // 0x3324dc: 0x2634ffe0  addiu       $s4, $s1, -0x20
    ctx->pc = 0x3324dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x3324e0: 0x26440048  addiu       $a0, $s2, 0x48
    ctx->pc = 0x3324e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x3324e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3324e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3324e8: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3324E8u;
    SET_GPR_U32(ctx, 31, 0x3324F0u);
    ctx->pc = 0x3324ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3324E8u;
    // 0x3324ec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3324E8u, 0x3324F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3324F0u;
label_3324f0:
    // 0x3324f0: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x3324f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x3324f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3324f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3324f8: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3324F8u;
    SET_GPR_U32(ctx, 31, 0x332500u);
    ctx->pc = 0x3324FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3324F8u;
    // 0x3324fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3324F8u, 0x332500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332500u;
label_332500:
    // 0x332500: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x332500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x332504: 0x26330020  addiu       $s3, $s1, 0x20
    ctx->pc = 0x332504u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x332508: 0x9043b275  lbu         $v1, -0x4D8B($v0)
    ctx->pc = 0x332508u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947445)));
    // 0x33250c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33250cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332510: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x332510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332514: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x332514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x332518: 0x24421e48  addiu       $v0, $v0, 0x1E48
    ctx->pc = 0x332518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7752));
    // 0x33251c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33251cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332520: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x332520u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x332524: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x332524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x332528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33252c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33252cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x332530: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332530u;
    SET_GPR_U32(ctx, 31, 0x332538u);
    ctx->pc = 0x332534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332530u;
    // 0x332534: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332530u, 0x332538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332538u;
label_332538:
    // 0x332538: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x332538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x33253c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x33253cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332540: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x332540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    // 0x332544: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332544u;
    SET_GPR_U32(ctx, 31, 0x33254Cu);
    ctx->pc = 0x332548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332544u;
    // 0x332548: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332544u, 0x33254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33254Cu;
label_33254c:
    // 0x33254c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33254cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332550: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x332550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x332554: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332554u;
    SET_GPR_U32(ctx, 31, 0x33255Cu);
    ctx->pc = 0x332558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332554u;
    // 0x332558: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332554u, 0x33255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33255Cu;
label_33255c:
    // 0x33255c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33255cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x332560: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x332560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x332564: 0x9042b276  lbu         $v0, -0x4D8A($v0)
    ctx->pc = 0x332564u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947446)));
    // 0x332568: 0x24631e48  addiu       $v1, $v1, 0x1E48
    ctx->pc = 0x332568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7752));
    // 0x33256c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33256cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332570: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x332570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332574: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x332574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x332578: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x332578u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33257c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33257cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x332580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332584: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x332584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x332588: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332588u;
    SET_GPR_U32(ctx, 31, 0x332590u);
    ctx->pc = 0x33258Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332588u;
    // 0x33258c: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332588u, 0x332590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332590u;
label_332590:
    // 0x332590: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x332590u;
    {
        const bool branch_taken_0x332590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332590) {
            ctx->pc = 0x3327D8u;
            goto label_3327d8;
        }
    }
    ctx->pc = 0x332598u;
label_332598:
    // 0x332598: 0x2625ff20  addiu       $a1, $s1, -0xE0
    ctx->pc = 0x332598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967072));
    // 0x33259c: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x33259cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3325a0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3325A0u;
    SET_GPR_U32(ctx, 31, 0x3325A8u);
    ctx->pc = 0x3325A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3325A0u;
    // 0x3325a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3325A0u, 0x3325A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3325A8u;
label_3325a8:
    // 0x3325a8: 0x2634ffe0  addiu       $s4, $s1, -0x20
    ctx->pc = 0x3325a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x3325ac: 0x26440048  addiu       $a0, $s2, 0x48
    ctx->pc = 0x3325acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x3325b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3325b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3325b4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3325B4u;
    SET_GPR_U32(ctx, 31, 0x3325BCu);
    ctx->pc = 0x3325B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3325B4u;
    // 0x3325b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3325B4u, 0x3325BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3325BCu;
label_3325bc:
    // 0x3325bc: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x3325bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x3325c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3325c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3325c4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3325C4u;
    SET_GPR_U32(ctx, 31, 0x3325CCu);
    ctx->pc = 0x3325C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3325C4u;
    // 0x3325c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3325C4u, 0x3325CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3325CCu;
label_3325cc:
    // 0x3325cc: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3325ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3325d0: 0x26330020  addiu       $s3, $s1, 0x20
    ctx->pc = 0x3325d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3325d4: 0x9043b277  lbu         $v1, -0x4D89($v0)
    ctx->pc = 0x3325d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947447)));
    // 0x3325d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3325d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3325dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3325dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3325e0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3325e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3325e4: 0x24421e40  addiu       $v0, $v0, 0x1E40
    ctx->pc = 0x3325e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7744));
    // 0x3325e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3325e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3325ec: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3325ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3325f0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3325f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3325f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3325f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3325f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3325f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3325fc: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3325FCu;
    SET_GPR_U32(ctx, 31, 0x332604u);
    ctx->pc = 0x332600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3325FCu;
    // 0x332600: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3325FCu, 0x332604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332604u;
label_332604:
    // 0x332604: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x332604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x332608: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x332608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33260c: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x33260cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    // 0x332610: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332610u;
    SET_GPR_U32(ctx, 31, 0x332618u);
    ctx->pc = 0x332614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332610u;
    // 0x332614: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332610u, 0x332618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332618u;
label_332618:
    // 0x332618: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x332618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33261c: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x33261cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x332620: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332620u;
    SET_GPR_U32(ctx, 31, 0x332628u);
    ctx->pc = 0x332624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332620u;
    // 0x332624: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332620u, 0x332628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332628u;
label_332628:
    // 0x332628: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x332628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33262c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x33262cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x332630: 0x9042b278  lbu         $v0, -0x4D88($v0)
    ctx->pc = 0x332630u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947448)));
    // 0x332634: 0x24631e40  addiu       $v1, $v1, 0x1E40
    ctx->pc = 0x332634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7744));
    // 0x332638: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x332638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33263c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33263cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332640: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x332640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x332644: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x332644u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x332648: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x332648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33264c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33264cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332650: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x332650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x332654: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332654u;
    SET_GPR_U32(ctx, 31, 0x33265Cu);
    ctx->pc = 0x332658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332654u;
    // 0x332658: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332654u, 0x33265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33265Cu;
label_33265c:
    // 0x33265c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x33265Cu;
    {
        const bool branch_taken_0x33265c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33265c) {
            ctx->pc = 0x3327D8u;
            goto label_3327d8;
        }
    }
    ctx->pc = 0x332664u;
label_332664:
    // 0x332664: 0x2625ff40  addiu       $a1, $s1, -0xC0
    ctx->pc = 0x332664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967104));
    // 0x332668: 0x2644003c  addiu       $a0, $s2, 0x3C
    ctx->pc = 0x332668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x33266c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33266Cu;
    SET_GPR_U32(ctx, 31, 0x332674u);
    ctx->pc = 0x332670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33266Cu;
    // 0x332670: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33266Cu, 0x332674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332674u;
label_332674:
    // 0x332674: 0x2634ffe0  addiu       $s4, $s1, -0x20
    ctx->pc = 0x332674u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x332678: 0x26440048  addiu       $a0, $s2, 0x48
    ctx->pc = 0x332678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x33267c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x33267cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332680: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332680u;
    SET_GPR_U32(ctx, 31, 0x332688u);
    ctx->pc = 0x332684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332680u;
    // 0x332684: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332680u, 0x332688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332688u;
label_332688:
    // 0x332688: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x332688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x33268c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33268cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332690: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332690u;
    SET_GPR_U32(ctx, 31, 0x332698u);
    ctx->pc = 0x332694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332690u;
    // 0x332694: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332690u, 0x332698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332698u;
label_332698:
    // 0x332698: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x332698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33269c: 0x26330020  addiu       $s3, $s1, 0x20
    ctx->pc = 0x33269cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3326a0: 0x9043b279  lbu         $v1, -0x4D87($v0)
    ctx->pc = 0x3326a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947449)));
    // 0x3326a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3326a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3326a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3326a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3326ac: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3326acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3326b0: 0x24421e40  addiu       $v0, $v0, 0x1E40
    ctx->pc = 0x3326b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7744));
    // 0x3326b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3326b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3326b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3326b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3326bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3326bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3326c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3326c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3326c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3326c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3326c8: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3326C8u;
    SET_GPR_U32(ctx, 31, 0x3326D0u);
    ctx->pc = 0x3326CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3326C8u;
    // 0x3326cc: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3326C8u, 0x3326D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3326D0u;
label_3326d0:
    // 0x3326d0: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x3326d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3326d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3326d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3326d8: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x3326d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    // 0x3326dc: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3326DCu;
    SET_GPR_U32(ctx, 31, 0x3326E4u);
    ctx->pc = 0x3326E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3326DCu;
    // 0x3326e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3326DCu, 0x3326E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3326E4u;
label_3326e4:
    // 0x3326e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3326e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3326e8: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x3326e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x3326ec: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3326ECu;
    SET_GPR_U32(ctx, 31, 0x3326F4u);
    ctx->pc = 0x3326F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3326ECu;
    // 0x3326f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3326ECu, 0x3326F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3326F4u;
label_3326f4:
    // 0x3326f4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3326f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3326f8: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3326f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3326fc: 0x9042b27a  lbu         $v0, -0x4D86($v0)
    ctx->pc = 0x3326fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947450)));
    // 0x332700: 0x24631e40  addiu       $v1, $v1, 0x1E40
    ctx->pc = 0x332700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7744));
    // 0x332704: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x332704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332708: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x332708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33270c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33270cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x332710: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x332710u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x332714: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x332714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x332718: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33271c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33271cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x332720: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332720u;
    SET_GPR_U32(ctx, 31, 0x332728u);
    ctx->pc = 0x332724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332720u;
    // 0x332724: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332720u, 0x332728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332728u;
label_332728:
    // 0x332728: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x332728u;
    {
        const bool branch_taken_0x332728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332728) {
            ctx->pc = 0x3327D8u;
            goto label_3327d8;
        }
    }
    ctx->pc = 0x332730u;
label_332730:
    // 0x332730: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x332730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x332734: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x332734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332738: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332738u;
    SET_GPR_U32(ctx, 31, 0x332740u);
    ctx->pc = 0x33273Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332738u;
    // 0x33273c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x332738u, 0x332740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332740u;
label_332740:
    // 0x332740: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x332740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x332744: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x332744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332748: 0x24841ce4  addiu       $a0, $a0, 0x1CE4
    ctx->pc = 0x332748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7396));
    // 0x33274c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33274cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332750: 0x2407a828  addiu       $a3, $zero, -0x57D8
    ctx->pc = 0x332750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944808));
    // 0x332754: 0xc0c0b2c  jal         func_302CB0
    ctx->pc = 0x332754u;
    SET_GPR_U32(ctx, 31, 0x33275Cu);
    ctx->pc = 0x332758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332754u;
    // 0x332758: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302CB0u, 0x332754u, 0x33275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33275Cu;
label_33275c:
    // 0x33275c: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x33275cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x332760: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x332760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x332764: 0x256b1cf0  addiu       $t3, $t3, 0x1CF0
    ctx->pc = 0x332764u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 7408));
    // 0x332768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x332768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33276c: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x33276cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x332770: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x332770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x332774: 0x2605fff0  addiu       $a1, $s0, -0x10
    ctx->pc = 0x332774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x332778: 0x2406a828  addiu       $a2, $zero, -0x57D8
    ctx->pc = 0x332778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944808));
    // 0x33277c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x33277cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x332780: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x332780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x332784: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x332784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x332788: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x332788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x33278c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x33278cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x332790: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x332790u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x332794: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x332794u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x332798: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x332798u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x33279c: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x33279Cu;
    SET_GPR_U32(ctx, 31, 0x3327A4u);
    ctx->pc = 0x3327A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33279Cu;
    // 0x3327a0: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x33279Cu, 0x3327A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3327A4u;
label_3327a4:
    // 0x3327a4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3327a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3327a8: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x3327a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x3327ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3327acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3327b0: 0x24841cfc  addiu       $a0, $a0, 0x1CFC
    ctx->pc = 0x3327b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7420));
    // 0x3327b4: 0x2407a828  addiu       $a3, $zero, -0x57D8
    ctx->pc = 0x3327b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944808));
    // 0x3327b8: 0xc0c0b2c  jal         func_302CB0
    ctx->pc = 0x3327B8u;
    SET_GPR_U32(ctx, 31, 0x3327C0u);
    ctx->pc = 0x3327BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3327B8u;
    // 0x3327bc: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302CB0u, 0x3327B8u, 0x3327C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3327C0u;
label_3327c0:
    // 0x3327c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3327C0u;
    {
        const bool branch_taken_0x3327c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3327c0) {
            ctx->pc = 0x3327D8u;
            goto label_3327d8;
        }
    }
    ctx->pc = 0x3327C8u;
label_3327c8:
    // 0x3327c8: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x3327c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x3327cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3327ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3327d0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3327D0u;
    SET_GPR_U32(ctx, 31, 0x3327D8u);
    ctx->pc = 0x3327D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3327D0u;
    // 0x3327d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3327D0u, 0x3327D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3327D8u;
label_3327d8:
    // 0x3327d8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3327d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3327dc:
    // 0x3327dc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3327dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3327e0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3327e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3327e4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3327e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3327e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3327e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3327ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3327ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3327f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3327F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3327F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3327F0u;
        // 0x3327f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3327F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3327F8u;
    // 0x3327f8: 0x0  nop
    ctx->pc = 0x3327f8u;
    // NOP
    // 0x3327fc: 0x0  nop
    ctx->pc = 0x3327fcu;
    // NOP
    // 0x332800: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x332800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x332804: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x332804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x332808: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x332808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x33280c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33280cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x332810: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x332810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x332814: 0x24631e94  addiu       $v1, $v1, 0x1E94
    ctx->pc = 0x332814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7828));
    // 0x332818: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x332818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x33281c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33281cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332820: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x332820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x332824: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x332824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x332828: 0x8c46e808  lw          $a2, -0x17F8($v0)
    ctx->pc = 0x332828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x33282c: 0x24841e90  addiu       $a0, $a0, 0x1E90
    ctx->pc = 0x33282cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7824));
    // 0x332830: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x332830u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x332834: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x332834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x332838: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x332838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33283c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33283cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x332840: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x332840u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x332844: 0x14c20021  bne         $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x332844u;
    {
        const bool branch_taken_0x332844 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x332848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332844u;
        // 0x332848: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332844) {
            ctx->pc = 0x3328CCu;
            return;
        }
    }
    ctx->pc = 0x33284Cu;
    // 0x33284c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33284cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x332850: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x332850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332854: 0x24841cc0  addiu       $a0, $a0, 0x1CC0
    ctx->pc = 0x332854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7360));
    // 0x332858: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x332858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33285c: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x33285Cu;
    SET_GPR_U32(ctx, 31, 0x332864u);
    ctx->pc = 0x332860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33285Cu;
    // 0x332860: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x33285Cu, 0x332864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332864u;
label_332864:
    // 0x332864: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x332864u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x332868: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x332868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33286c: 0x256b1ccc  addiu       $t3, $t3, 0x1CCC
    ctx->pc = 0x33286cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 7372));
    // 0x332870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x332870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332874: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x332874u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x332878: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x332878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33287c: 0x2625fff0  addiu       $a1, $s1, -0x10
    ctx->pc = 0x33287cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x332880: 0x2406a829  addiu       $a2, $zero, -0x57D7
    ctx->pc = 0x332880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x332884: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x332884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x332888: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x332888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x33288c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x33288cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x332890: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x332890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x332894: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x332894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x332898: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x332898u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x33289c: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x33289cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3328a0: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x3328a0u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    if (ctx->pc == 0x3328a0u) { ctx->pc = 0x3328a4u; }
}
