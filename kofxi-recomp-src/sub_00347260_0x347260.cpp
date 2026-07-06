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

// Function: sub_00347260
// Address: 0x347260 - 0x3476e0
void sub_00347260_0x347260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347260_0x347260");
#endif

    switch (ctx->pc) {
        case 0x347308u: goto label_347308;
        case 0x347328u: goto label_347328;
        case 0x347330u: goto label_347330;
        case 0x347344u: goto label_347344;
        case 0x34735cu: goto label_34735c;
        case 0x347374u: goto label_347374;
        case 0x347380u: goto label_347380;
        case 0x3473b0u: goto label_3473b0;
        case 0x3473bcu: goto label_3473bc;
        case 0x3473f0u: goto label_3473f0;
        case 0x3473fcu: goto label_3473fc;
        case 0x347438u: goto label_347438;
        case 0x347440u: goto label_347440;
        case 0x347458u: goto label_347458;
        case 0x347474u: goto label_347474;
        case 0x34748cu: goto label_34748c;
        case 0x3474a8u: goto label_3474a8;
        case 0x3474b8u: goto label_3474b8;
        case 0x3474c8u: goto label_3474c8;
        case 0x3474d4u: goto label_3474d4;
        case 0x34750cu: goto label_34750c;
        case 0x34751cu: goto label_34751c;
        case 0x34752cu: goto label_34752c;
        case 0x347538u: goto label_347538;
        case 0x347580u: goto label_347580;
        case 0x347588u: goto label_347588;
        case 0x3475a0u: goto label_3475a0;
        case 0x3475bcu: goto label_3475bc;
        case 0x3475d4u: goto label_3475d4;
        case 0x3475f0u: goto label_3475f0;
        case 0x347600u: goto label_347600;
        case 0x347610u: goto label_347610;
        case 0x34761cu: goto label_34761c;
        case 0x347650u: goto label_347650;
        case 0x347660u: goto label_347660;
        case 0x347670u: goto label_347670;
        case 0x34767cu: goto label_34767c;
        case 0x3476a8u: goto label_3476a8;
        case 0x3476bcu: goto label_3476bc;
        case 0x3476c8u: goto label_3476c8;
        default: break;
    }

    ctx->pc = 0x347260u;

label_347260:
    // 0x347260: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x347260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347264: 0x240304b0  addiu       $v1, $zero, 0x4B0
    ctx->pc = 0x347264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x347268: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x347268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34726c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34726cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347270: 0xa443be96  sh          $v1, -0x416A($v0)
    ctx->pc = 0x347270u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950550), (uint16_t)GPR_U32(ctx, 3));
    // 0x347274: 0x80558d4  j           func_156350
    ctx->pc = 0x347274u;
    ctx->pc = 0x347278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347274u;
    // 0x347278: 0x248470c0  addiu       $a0, $a0, 0x70C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    sub_00156350_0x156350(rdram, ctx, runtime); return;
    ctx->pc = 0x34727Cu;
    // 0x34727c: 0x0  nop
    ctx->pc = 0x34727cu;
    // NOP
    // 0x347280: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x347280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x347284: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x347284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x347288: 0x24849950  addiu       $a0, $a0, -0x66B0
    ctx->pc = 0x347288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941008));
    // 0x34728c: 0x80558d4  j           func_156350
    ctx->pc = 0x34728Cu;
    ctx->pc = 0x347290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34728Cu;
    // 0x347290: 0x24a572a0  addiu       $a1, $a1, 0x72A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    sub_00156350_0x156350(rdram, ctx, runtime); return;
    ctx->pc = 0x347294u;
    // 0x347294: 0x0  nop
    ctx->pc = 0x347294u;
    // NOP
    // 0x347298: 0x0  nop
    ctx->pc = 0x347298u;
    // NOP
    // 0x34729c: 0x0  nop
    ctx->pc = 0x34729cu;
    // NOP
    // 0x3472a0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3472a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3472a4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3472a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3472a8: 0x2484fe80  addiu       $a0, $a0, -0x180
    ctx->pc = 0x3472a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966912));
    // 0x3472ac: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3472acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3472b0: 0xac44eab8  sw          $a0, -0x1548($v0)
    ctx->pc = 0x3472b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961848), GPR_U32(ctx, 4));
    // 0x3472b4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x3472b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x3472b8: 0x24634200  addiu       $v1, $v1, 0x4200
    ctx->pc = 0x3472b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16896));
    // 0x3472bc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3472bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3472c0: 0xac43ead0  sw          $v1, -0x1530($v0)
    ctx->pc = 0x3472c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961872), GPR_U32(ctx, 3));
    // 0x3472c4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3472c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3472c8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3472c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3472cc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3472ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3472d0: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x3472d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x3472d4: 0x24846f30  addiu       $a0, $a0, 0x6F30
    ctx->pc = 0x3472d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28464));
    // 0x3472d8: 0x0  nop
    ctx->pc = 0x3472d8u;
    // NOP
    // 0x3472dc: 0x80558d4  j           func_156350
    ctx->pc = 0x3472DCu;
    ctx->pc = 0x3472E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3472DCu;
    // 0x3472e0: 0x24a572f0  addiu       $a1, $a1, 0x72F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    sub_00156350_0x156350(rdram, ctx, runtime); return;
    ctx->pc = 0x3472E4u;
    // 0x3472e4: 0x0  nop
    ctx->pc = 0x3472e4u;
    // NOP
    // 0x3472e8: 0x0  nop
    ctx->pc = 0x3472e8u;
    // NOP
    // 0x3472ec: 0x0  nop
    ctx->pc = 0x3472ecu;
    // NOP
    // 0x3472f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3472f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3472f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3472f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3472f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3472f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3472fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3472fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x347300: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x347300u;
    SET_GPR_U32(ctx, 31, 0x347308u);
    ctx->pc = 0x347304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347300u;
    // 0x347304: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x347300u, 0x347308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347308u;
label_347308:
    // 0x347308: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x347308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x34730c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34730cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347310: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x347310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x347314: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x347314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x347318: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x347318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x34731c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x34731cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x347320: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x347320u;
    SET_GPR_U32(ctx, 31, 0x347328u);
    ctx->pc = 0x347324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347320u;
    // 0x347324: 0x24a5a040  addiu       $a1, $a1, -0x5FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x347320u, 0x347328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347328u;
label_347328:
    // 0x347328: 0xc084430  jal         func_2110C0
    ctx->pc = 0x347328u;
    SET_GPR_U32(ctx, 31, 0x347330u);
    ctx->pc = 0x2110C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2110C0u, 0x347328u, 0x347330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347330u;
label_347330:
    // 0x347330: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x347330u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x347334: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x347334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347338: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x347338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x34733c: 0xc0878aa  jal         func_21E2A8
    ctx->pc = 0x34733Cu;
    SET_GPR_U32(ctx, 31, 0x347344u);
    ctx->pc = 0x347340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34733Cu;
    // 0x347340: 0x24c6a020  addiu       $a2, $a2, -0x5FE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E2A8u, 0x34733Cu, 0x347344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347344u;
label_347344:
    // 0x347344: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x347344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x347348: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x347348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34734c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x34734cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x347350: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x347350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x347354: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x347354u;
    SET_GPR_U32(ctx, 31, 0x34735Cu);
    ctx->pc = 0x347358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347354u;
    // 0x347358: 0x24a55200  addiu       $a1, $a1, 0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x347354u, 0x34735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34735Cu;
label_34735c:
    // 0x34735c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34735cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x347360: 0x24054010  addiu       $a1, $zero, 0x4010
    ctx->pc = 0x347360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16400));
    // 0x347364: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x347364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x347368: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x347368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34736c: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34736Cu;
    SET_GPR_U32(ctx, 31, 0x347374u);
    ctx->pc = 0x347370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34736Cu;
    // 0x347370: 0x24070030  addiu       $a3, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x34736Cu, 0x347374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347374u;
label_347374:
    // 0x347374: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x347374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347378: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x347378u;
    SET_GPR_U32(ctx, 31, 0x347380u);
    ctx->pc = 0x34737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347378u;
    // 0x34737c: 0x24847390  addiu       $a0, $a0, 0x7390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    goto label_347260;
    ctx->pc = 0x347380u;
label_347380:
    // 0x347380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x347380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347384: 0x3e00008  jr          $ra
    ctx->pc = 0x347384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347384u;
        // 0x347388: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34738Cu;
    // 0x34738c: 0x0  nop
    ctx->pc = 0x34738cu;
    // NOP
    // 0x347390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x347394: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x347394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x347398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x347398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34739c: 0x24054210  addiu       $a1, $zero, 0x4210
    ctx->pc = 0x34739cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16912));
    // 0x3473a0: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x3473a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x3473a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3473a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3473a8: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x3473A8u;
    SET_GPR_U32(ctx, 31, 0x3473B0u);
    ctx->pc = 0x3473ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3473A8u;
    // 0x3473ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x3473A8u, 0x3473B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3473B0u;
label_3473b0:
    // 0x3473b0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3473b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3473b4: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x3473B4u;
    SET_GPR_U32(ctx, 31, 0x3473BCu);
    ctx->pc = 0x3473B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3473B4u;
    // 0x3473b8: 0x24847410  addiu       $a0, $a0, 0x7410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    goto label_347260;
    ctx->pc = 0x3473BCu;
label_3473bc:
    // 0x3473bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3473bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3473c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3473C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3473C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3473C0u;
        // 0x3473c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3473C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3473C8u;
    // 0x3473c8: 0x0  nop
    ctx->pc = 0x3473c8u;
    // NOP
    // 0x3473cc: 0x0  nop
    ctx->pc = 0x3473ccu;
    // NOP
    // 0x3473d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3473d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3473d4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3473d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3473d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3473d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3473dc: 0x24054210  addiu       $a1, $zero, 0x4210
    ctx->pc = 0x3473dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16912));
    // 0x3473e0: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x3473e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x3473e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3473e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3473e8: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x3473E8u;
    SET_GPR_U32(ctx, 31, 0x3473F0u);
    ctx->pc = 0x3473ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3473E8u;
    // 0x3473ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x3473E8u, 0x3473F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3473F0u;
label_3473f0:
    // 0x3473f0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3473f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3473f4: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x3473F4u;
    SET_GPR_U32(ctx, 31, 0x3473FCu);
    ctx->pc = 0x3473F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3473F4u;
    // 0x3473f8: 0x24847550  addiu       $a0, $a0, 0x7550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    goto label_347260;
    ctx->pc = 0x3473FCu;
label_3473fc:
    // 0x3473fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3473fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347400: 0x3e00008  jr          $ra
    ctx->pc = 0x347400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347400u;
        // 0x347404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347408u;
    // 0x347408: 0x0  nop
    ctx->pc = 0x347408u;
    // NOP
    // 0x34740c: 0x0  nop
    ctx->pc = 0x34740cu;
    // NOP
    // 0x347410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x347410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x347414: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x347414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x347418: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x347418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34741c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34741cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x347420: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x347420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x347424: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x347428: 0x3c1101df  lui         $s1, 0x1DF
    ctx->pc = 0x347428u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)479 << 16));
    // 0x34742c: 0xac404378  sw          $zero, 0x4378($v0)
    ctx->pc = 0x34742cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 0));
    // 0x347430: 0xc0d0c20  jal         func_343080
    ctx->pc = 0x347430u;
    SET_GPR_U32(ctx, 31, 0x347438u);
    ctx->pc = 0x347434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347430u;
    // 0x347434: 0x2631ddc0  addiu       $s1, $s1, -0x2240 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343080u, 0x347430u, 0x347438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347438u;
label_347438:
    // 0x347438: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x347438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34743c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34743cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347440:
    // 0x347440: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x347440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x347444: 0x26250104  addiu       $a1, $s1, 0x104
    ctx->pc = 0x347444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x347448: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x347448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x34744c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34744cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x347450: 0xc049c48  jal         func_127120
    ctx->pc = 0x347450u;
    SET_GPR_U32(ctx, 31, 0x347458u);
    ctx->pc = 0x347454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347450u;
    // 0x347454: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x347450u, 0x347458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347458u;
label_347458:
    // 0x347458: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x347458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34745c: 0x26250124  addiu       $a1, $s1, 0x124
    ctx->pc = 0x34745cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    // 0x347460: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x347460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x347464: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x347464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x347468: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x347468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34746c: 0xc049c48  jal         func_127120
    ctx->pc = 0x34746Cu;
    SET_GPR_U32(ctx, 31, 0x347474u);
    ctx->pc = 0x347470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34746Cu;
    // 0x347470: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x34746Cu, 0x347474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347474u;
label_347474:
    // 0x347474: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x347474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x347478: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x347478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x34747c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34747cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x347480: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x347480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x347484: 0xc0835b0  jal         func_20D6C0
    ctx->pc = 0x347484u;
    SET_GPR_U32(ctx, 31, 0x34748Cu);
    ctx->pc = 0x347488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347484u;
    // 0x347488: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6C0u, 0x347484u, 0x34748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34748Cu;
label_34748c:
    // 0x34748c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x34748cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x347490: 0x263100a4  addiu       $s1, $s1, 0xA4
    ctx->pc = 0x347490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
    // 0x347494: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x347494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x347498: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x347498u;
    {
        const bool branch_taken_0x347498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347498u;
        // 0x34749c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347498) {
            ctx->pc = 0x347440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_347440;
        }
    }
    ctx->pc = 0x3474A0u;
    // 0x3474a0: 0xc0c03cc  jal         func_300F30
    ctx->pc = 0x3474A0u;
    SET_GPR_U32(ctx, 31, 0x3474A8u);
    ctx->pc = 0x300F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300F30u, 0x3474A0u, 0x3474A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3474A8u;
label_3474a8:
    // 0x3474a8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3474a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3474ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3474acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3474b0: 0xc082678  jal         func_2099E0
    ctx->pc = 0x3474B0u;
    SET_GPR_U32(ctx, 31, 0x3474B8u);
    ctx->pc = 0x3474B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3474B0u;
    // 0x3474b4: 0x248433f0  addiu       $a0, $a0, 0x33F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x3474B0u, 0x3474B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3474B8u;
label_3474b8:
    // 0x3474b8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3474b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3474bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3474bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3474c0: 0xc082678  jal         func_2099E0
    ctx->pc = 0x3474C0u;
    SET_GPR_U32(ctx, 31, 0x3474C8u);
    ctx->pc = 0x3474C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3474C0u;
    // 0x3474c4: 0x248483b0  addiu       $a0, $a0, -0x7C50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x3474C0u, 0x3474C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3474C8u;
label_3474c8:
    // 0x3474c8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3474c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3474cc: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x3474CCu;
    SET_GPR_U32(ctx, 31, 0x3474D4u);
    ctx->pc = 0x3474D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3474CCu;
    // 0x3474d0: 0x248480e0  addiu       $a0, $a0, -0x7F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x3474CCu, 0x3474D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3474D4u;
label_3474d4:
    // 0x3474d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3474d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3474d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3474d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3474dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3474dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3474e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3474e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3474e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3474E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3474E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474E4u;
        // 0x3474e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3474E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3474ECu;
    // 0x3474ec: 0x0  nop
    ctx->pc = 0x3474ecu;
    // NOP
    // 0x3474f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3474f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3474f4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3474f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3474f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3474f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3474fc: 0x8c43be80  lw          $v1, -0x4180($v0)
    ctx->pc = 0x3474fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    // 0x347500: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x347500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x347504: 0xc0c03cc  jal         func_300F30
    ctx->pc = 0x347504u;
    SET_GPR_U32(ctx, 31, 0x34750Cu);
    ctx->pc = 0x347508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347504u;
    // 0x347508: 0xac434378  sw          $v1, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300F30u, 0x347504u, 0x34750Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34750Cu;
label_34750c:
    // 0x34750c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34750cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x347510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347514: 0xc082678  jal         func_2099E0
    ctx->pc = 0x347514u;
    SET_GPR_U32(ctx, 31, 0x34751Cu);
    ctx->pc = 0x347518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347514u;
    // 0x347518: 0x248433f0  addiu       $a0, $a0, 0x33F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x347514u, 0x34751Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34751Cu;
label_34751c:
    // 0x34751c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34751cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x347520: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x347520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347524: 0xc082678  jal         func_2099E0
    ctx->pc = 0x347524u;
    SET_GPR_U32(ctx, 31, 0x34752Cu);
    ctx->pc = 0x347528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347524u;
    // 0x347528: 0x248483b0  addiu       $a0, $a0, -0x7C50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x347524u, 0x34752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34752Cu;
label_34752c:
    // 0x34752c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34752cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x347530: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x347530u;
    SET_GPR_U32(ctx, 31, 0x347538u);
    ctx->pc = 0x347534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347530u;
    // 0x347534: 0x248480e0  addiu       $a0, $a0, -0x7F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x347530u, 0x347538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347538u;
label_347538:
    // 0x347538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x347538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34753c: 0x3e00008  jr          $ra
    ctx->pc = 0x34753Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34753Cu;
        // 0x347540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34753Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347544u;
    // 0x347544: 0x0  nop
    ctx->pc = 0x347544u;
    // NOP
    // 0x347548: 0x0  nop
    ctx->pc = 0x347548u;
    // NOP
    // 0x34754c: 0x0  nop
    ctx->pc = 0x34754cu;
    // NOP
    // 0x347550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x347550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x347554: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x347554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x347558: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x347558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34755c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34755cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x347560: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x347560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x347564: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x347568: 0x3c1101df  lui         $s1, 0x1DF
    ctx->pc = 0x347568u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)479 << 16));
    // 0x34756c: 0x8c43be80  lw          $v1, -0x4180($v0)
    ctx->pc = 0x34756cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    // 0x347570: 0x2631ddc0  addiu       $s1, $s1, -0x2240
    ctx->pc = 0x347570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958528));
    // 0x347574: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x347574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x347578: 0xc0d0c20  jal         func_343080
    ctx->pc = 0x347578u;
    SET_GPR_U32(ctx, 31, 0x347580u);
    ctx->pc = 0x34757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347578u;
    // 0x34757c: 0xac434378  sw          $v1, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343080u, 0x347578u, 0x347580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347580u;
label_347580:
    // 0x347580: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x347580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347584: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x347584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347588:
    // 0x347588: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x347588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34758c: 0x26250104  addiu       $a1, $s1, 0x104
    ctx->pc = 0x34758cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x347590: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x347590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x347594: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x347594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x347598: 0xc049c48  jal         func_127120
    ctx->pc = 0x347598u;
    SET_GPR_U32(ctx, 31, 0x3475A0u);
    ctx->pc = 0x34759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347598u;
    // 0x34759c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x347598u, 0x3475A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3475A0u;
label_3475a0:
    // 0x3475a0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3475a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3475a4: 0x26250124  addiu       $a1, $s1, 0x124
    ctx->pc = 0x3475a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    // 0x3475a8: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x3475a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x3475ac: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3475acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3475b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3475b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3475b4: 0xc049c48  jal         func_127120
    ctx->pc = 0x3475B4u;
    SET_GPR_U32(ctx, 31, 0x3475BCu);
    ctx->pc = 0x3475B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3475B4u;
    // 0x3475b8: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x3475B4u, 0x3475BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3475BCu;
label_3475bc:
    // 0x3475bc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3475bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3475c0: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x3475c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x3475c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3475c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3475c8: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x3475c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3475cc: 0xc0835b0  jal         func_20D6C0
    ctx->pc = 0x3475CCu;
    SET_GPR_U32(ctx, 31, 0x3475D4u);
    ctx->pc = 0x3475D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3475CCu;
    // 0x3475d0: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6C0u, 0x3475CCu, 0x3475D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3475D4u;
label_3475d4:
    // 0x3475d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3475d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3475d8: 0x263100a4  addiu       $s1, $s1, 0xA4
    ctx->pc = 0x3475d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
    // 0x3475dc: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x3475dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3475e0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3475E0u;
    {
        const bool branch_taken_0x3475e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3475E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3475E0u;
        // 0x3475e4: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3475e0) {
            ctx->pc = 0x347588u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_347588;
        }
    }
    ctx->pc = 0x3475E8u;
    // 0x3475e8: 0xc0c03cc  jal         func_300F30
    ctx->pc = 0x3475E8u;
    SET_GPR_U32(ctx, 31, 0x3475F0u);
    ctx->pc = 0x300F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300F30u, 0x3475E8u, 0x3475F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3475F0u;
label_3475f0:
    // 0x3475f0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3475f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3475f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3475f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3475f8: 0xc082678  jal         func_2099E0
    ctx->pc = 0x3475F8u;
    SET_GPR_U32(ctx, 31, 0x347600u);
    ctx->pc = 0x3475FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3475F8u;
    // 0x3475fc: 0x248433f0  addiu       $a0, $a0, 0x33F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x3475F8u, 0x347600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347600u;
label_347600:
    // 0x347600: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x347600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x347604: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x347604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347608: 0xc082678  jal         func_2099E0
    ctx->pc = 0x347608u;
    SET_GPR_U32(ctx, 31, 0x347610u);
    ctx->pc = 0x34760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347608u;
    // 0x34760c: 0x248483b0  addiu       $a0, $a0, -0x7C50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x347608u, 0x347610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347610u;
label_347610:
    // 0x347610: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x347610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x347614: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x347614u;
    SET_GPR_U32(ctx, 31, 0x34761Cu);
    ctx->pc = 0x347618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347614u;
    // 0x347618: 0x248480e0  addiu       $a0, $a0, -0x7F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x347614u, 0x34761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34761Cu;
label_34761c:
    // 0x34761c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34761cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x347620: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x347620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347624: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34762c: 0x3e00008  jr          $ra
    ctx->pc = 0x34762Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34762Cu;
        // 0x347630: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34762Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347634u;
    // 0x347634: 0x0  nop
    ctx->pc = 0x347634u;
    // NOP
    // 0x347638: 0x0  nop
    ctx->pc = 0x347638u;
    // NOP
    // 0x34763c: 0x0  nop
    ctx->pc = 0x34763cu;
    // NOP
    // 0x347640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x347644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x347644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x347648: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x347648u;
    SET_GPR_U32(ctx, 31, 0x347650u);
    ctx->pc = 0x34764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347648u;
    // 0x34764c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x347648u, 0x347650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347650u;
label_347650:
    // 0x347650: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x347650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x347654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347658: 0xc082678  jal         func_2099E0
    ctx->pc = 0x347658u;
    SET_GPR_U32(ctx, 31, 0x347660u);
    ctx->pc = 0x34765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347658u;
    // 0x34765c: 0x248433f0  addiu       $a0, $a0, 0x33F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x347658u, 0x347660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347660u;
label_347660:
    // 0x347660: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x347660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347664: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x347664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347668: 0xc082678  jal         func_2099E0
    ctx->pc = 0x347668u;
    SET_GPR_U32(ctx, 31, 0x347670u);
    ctx->pc = 0x34766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347668u;
    // 0x34766c: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x347668u, 0x347670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347670u;
label_347670:
    // 0x347670: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x347670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347674: 0xc082674  jal         func_2099D0
    ctx->pc = 0x347674u;
    SET_GPR_U32(ctx, 31, 0x34767Cu);
    ctx->pc = 0x347678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347674u;
    // 0x347678: 0x24847690  addiu       $a0, $a0, 0x7690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x347674u, 0x34767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34767Cu;
label_34767c:
    // 0x34767c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34767cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347680: 0x3e00008  jr          $ra
    ctx->pc = 0x347680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347680u;
        // 0x347684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347688u;
    // 0x347688: 0x0  nop
    ctx->pc = 0x347688u;
    // NOP
    // 0x34768c: 0x0  nop
    ctx->pc = 0x34768cu;
    // NOP
    // 0x347690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x347694: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x347694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x347698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x347698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34769c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34769cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3476a0: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x3476A0u;
    SET_GPR_U32(ctx, 31, 0x3476A8u);
    ctx->pc = 0x3476A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3476A0u;
    // 0x3476a4: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x3476A0u, 0x3476A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3476A8u;
label_3476a8:
    // 0x3476a8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3476A8u;
    {
        const bool branch_taken_0x3476a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3476a8) {
            ctx->pc = 0x3476ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3476A8u;
            // 0x3476ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3476CCu;
            goto label_3476cc;
        }
    }
    ctx->pc = 0x3476B0u;
    // 0x3476b0: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x3476b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x3476b4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3476B4u;
    SET_GPR_U32(ctx, 31, 0x3476BCu);
    ctx->pc = 0x3476B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3476B4u;
    // 0x3476b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3476B4u, 0x3476BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3476BCu;
label_3476bc:
    // 0x3476bc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3476bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3476c0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3476C0u;
    SET_GPR_U32(ctx, 31, 0x3476C8u);
    ctx->pc = 0x3476C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3476C0u;
    // 0x3476c4: 0x24847390  addiu       $a0, $a0, 0x7390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3476C0u, 0x3476C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3476C8u;
label_3476c8:
    // 0x3476c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3476c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3476cc:
    // 0x3476cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3476CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3476D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3476CCu;
        // 0x3476d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3476CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3476D4u;
    // 0x3476d4: 0x0  nop
    ctx->pc = 0x3476d4u;
    // NOP
    // 0x3476d8: 0x0  nop
    ctx->pc = 0x3476d8u;
    // NOP
    // 0x3476dc: 0x0  nop
    ctx->pc = 0x3476dcu;
    // NOP
}
