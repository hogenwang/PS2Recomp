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

// Function: sub_0021F2C8
// Address: 0x21f2c8 - 0x21fb60
void sub_0021F2C8_0x21f2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F2C8_0x21f2c8");
#endif

    switch (ctx->pc) {
        case 0x21f2f0u: goto label_21f2f0;
        case 0x21f300u: goto label_21f300;
        case 0x21f314u: goto label_21f314;
        case 0x21f320u: goto label_21f320;
        case 0x21f354u: goto label_21f354;
        case 0x21f36cu: goto label_21f36c;
        case 0x21f380u: goto label_21f380;
        case 0x21f394u: goto label_21f394;
        case 0x21f3b0u: goto label_21f3b0;
        case 0x21f3e4u: goto label_21f3e4;
        case 0x21f3ecu: goto label_21f3ec;
        case 0x21f420u: goto label_21f420;
        case 0x21f43cu: goto label_21f43c;
        case 0x21f458u: goto label_21f458;
        case 0x21f474u: goto label_21f474;
        case 0x21f47cu: goto label_21f47c;
        case 0x21f4b8u: goto label_21f4b8;
        case 0x21f4ccu: goto label_21f4cc;
        case 0x21f4e0u: goto label_21f4e0;
        case 0x21f508u: goto label_21f508;
        case 0x21f524u: goto label_21f524;
        case 0x21f578u: goto label_21f578;
        case 0x21f580u: goto label_21f580;
        case 0x21f5b0u: goto label_21f5b0;
        case 0x21f5e0u: goto label_21f5e0;
        case 0x21f5fcu: goto label_21f5fc;
        case 0x21f61cu: goto label_21f61c;
        case 0x21f630u: goto label_21f630;
        case 0x21f654u: goto label_21f654;
        case 0x21f668u: goto label_21f668;
        case 0x21f690u: goto label_21f690;
        case 0x21f6acu: goto label_21f6ac;
        case 0x21f6c4u: goto label_21f6c4;
        case 0x21f6e0u: goto label_21f6e0;
        case 0x21f6f8u: goto label_21f6f8;
        case 0x21f700u: goto label_21f700;
        case 0x21f708u: goto label_21f708;
        case 0x21f70cu: goto label_21f70c;
        case 0x21f738u: goto label_21f738;
        case 0x21f74cu: goto label_21f74c;
        case 0x21f774u: goto label_21f774;
        case 0x21f78cu: goto label_21f78c;
        case 0x21f7d4u: goto label_21f7d4;
        case 0x21f7e8u: goto label_21f7e8;
        case 0x21f7fcu: goto label_21f7fc;
        case 0x21f81cu: goto label_21f81c;
        case 0x21f838u: goto label_21f838;
        case 0x21f87cu: goto label_21f87c;
        case 0x21f884u: goto label_21f884;
        case 0x21f8c0u: goto label_21f8c0;
        case 0x21f8d4u: goto label_21f8d4;
        case 0x21f8e8u: goto label_21f8e8;
        case 0x21f908u: goto label_21f908;
        case 0x21f924u: goto label_21f924;
        case 0x21f95cu: goto label_21f95c;
        case 0x21f964u: goto label_21f964;
        case 0x21f97cu: goto label_21f97c;
        case 0x21f9a4u: goto label_21f9a4;
        case 0x21f9b8u: goto label_21f9b8;
        case 0x21f9ccu: goto label_21f9cc;
        case 0x21f9e0u: goto label_21f9e0;
        case 0x21fa14u: goto label_21fa14;
        case 0x21fa38u: goto label_21fa38;
        case 0x21fa4cu: goto label_21fa4c;
        case 0x21fa60u: goto label_21fa60;
        case 0x21fa7cu: goto label_21fa7c;
        case 0x21fab0u: goto label_21fab0;
        case 0x21fab8u: goto label_21fab8;
        case 0x21fad0u: goto label_21fad0;
        case 0x21fafcu: goto label_21fafc;
        case 0x21fb10u: goto label_21fb10;
        case 0x21fb1cu: goto label_21fb1c;
        case 0x21fb28u: goto label_21fb28;
        default: break;
    }

    ctx->pc = 0x21f2c8u;

    // 0x21f2c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21f2cc: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x21f2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21f2d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f2d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21f2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21f2d8: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x21f2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x21f2dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21f2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21f2e0: 0x2610b7f4  addiu       $s0, $s0, -0x480C
    ctx->pc = 0x21f2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948852));
    // 0x21f2e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21f2e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f2e8: 0xc0898da  jal         func_226368
    ctx->pc = 0x21F2E8u;
    SET_GPR_U32(ctx, 31, 0x21F2F0u);
    ctx->pc = 0x21F2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F2E8u;
    // 0x21f2ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226368u, 0x21F2E8u, 0x21F2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F2F0u;
label_21f2f0:
    // 0x21f2f0: 0x2624000f  addiu       $a0, $s1, 0xF
    ctx->pc = 0x21f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x21f2f4: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x21f2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x21f2f8: 0xc0898da  jal         func_226368
    ctx->pc = 0x21F2F8u;
    SET_GPR_U32(ctx, 31, 0x21F300u);
    ctx->pc = 0x21F2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F2F8u;
    // 0x21f2fc: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226368u, 0x21F2F8u, 0x21F300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F300u;
label_21f300:
    // 0x21f300: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x21f300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x21f304: 0x260508b9  addiu       $a1, $s0, 0x8B9
    ctx->pc = 0x21f304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2233));
    // 0x21f308: 0x240600a1  addiu       $a2, $zero, 0xA1
    ctx->pc = 0x21f308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x21f30c: 0xc0898da  jal         func_226368
    ctx->pc = 0x21F30Cu;
    SET_GPR_U32(ctx, 31, 0x21F314u);
    ctx->pc = 0x21F310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F30Cu;
    // 0x21f310: 0x263100bc  addiu       $s1, $s1, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226368u, 0x21F30Cu, 0x21F314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F314u;
label_21f314:
    // 0x21f314: 0x8e05095c  lw          $a1, 0x95C($s0)
    ctx->pc = 0x21f314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2396)));
    // 0x21f318: 0xc0898d6  jal         func_226358
    ctx->pc = 0x21F318u;
    SET_GPR_U32(ctx, 31, 0x21F320u);
    ctx->pc = 0x21F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F318u;
    // 0x21f31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226358u, 0x21F318u, 0x21F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F320u;
label_21f320:
    // 0x21f320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f328: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f32c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f330: 0x3e00008  jr          $ra
    ctx->pc = 0x21F330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F330u;
        // 0x21f334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F338u;
    // 0x21f338: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x21f338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x21f33c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x21f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x21f340: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x21f340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x21f344: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x21f344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
    // 0x21f348: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x21f348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
    // 0x21f34c: 0xc087bee  jal         func_21EFB8
    ctx->pc = 0x21F34Cu;
    SET_GPR_U32(ctx, 31, 0x21F354u);
    ctx->pc = 0x21F350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F34Cu;
    // 0x21f350: 0x27b00160  addiu       $s0, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EFB8u, 0x21F34Cu, 0x21F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F354u;
label_21f354:
    // 0x21f354: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x21f354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21f358: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x21f358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x21f35c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21f35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f360: 0x240600a1  addiu       $a2, $zero, 0xA1
    ctx->pc = 0x21f360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x21f364: 0xc0898da  jal         func_226368
    ctx->pc = 0x21F364u;
    SET_GPR_U32(ctx, 31, 0x21F36Cu);
    ctx->pc = 0x21F368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F364u;
    // 0x21f368: 0x24a5bc46  addiu       $a1, $a1, -0x43BA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949958));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226368u, 0x21F364u, 0x21F36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F36Cu;
label_21f36c:
    // 0x21f36c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21f36cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21f370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f374: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x21f374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21f378: 0xc0898da  jal         func_226368
    ctx->pc = 0x21F378u;
    SET_GPR_U32(ctx, 31, 0x21F380u);
    ctx->pc = 0x21F37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F378u;
    // 0x21f37c: 0x24a520a0  addiu       $a1, $a1, 0x20A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226368u, 0x21F378u, 0x21F380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F380u;
label_21f380:
    // 0x21f380: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21f380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21f384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f388: 0x240600a1  addiu       $a2, $zero, 0xA1
    ctx->pc = 0x21f388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x21f38c: 0xc0898da  jal         func_226368
    ctx->pc = 0x21F38Cu;
    SET_GPR_U32(ctx, 31, 0x21F394u);
    ctx->pc = 0x21F390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F38Cu;
    // 0x21f390: 0x24a51cf0  addiu       $a1, $a1, 0x1CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226368u, 0x21F38Cu, 0x21F394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F394u;
label_21f394:
    // 0x21f394: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21f394u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21f398: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21f398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f39c: 0x8de8c258  lw          $t0, -0x3DA8($t7)
    ctx->pc = 0x21f39cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294951512)));
    // 0x21f3a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21f3a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f3a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21f3a8: 0xc087c24  jal         func_21F090
    ctx->pc = 0x21F3A8u;
    SET_GPR_U32(ctx, 31, 0x21F3B0u);
    ctx->pc = 0x21F3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F3A8u;
    // 0x21f3ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F090u, 0x21F3A8u, 0x21F3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3B0u;
label_21f3b0:
    // 0x21f3b0: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x21f3b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x21f3b4: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x21f3b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x21f3b8: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x21f3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x21f3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x21F3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3BCu;
        // 0x21f3c0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F3C4u;
    // 0x21f3c4: 0x0  nop
    ctx->pc = 0x21f3c4u;
    // NOP
    // 0x21f3c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21f3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21f3cc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21f3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21f3d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21f3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f3d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21f3d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21f3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21f3dc: 0xc089dda  jal         func_227768
    ctx->pc = 0x21F3DCu;
    SET_GPR_U32(ctx, 31, 0x21F3E4u);
    ctx->pc = 0x21F3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F3DCu;
    // 0x21f3e0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227768u, 0x21F3DCu, 0x21F3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3E4u;
label_21f3e4:
    // 0x21f3e4: 0xc0879fe  jal         func_21E7F8
    ctx->pc = 0x21F3E4u;
    SET_GPR_U32(ctx, 31, 0x21F3ECu);
    ctx->pc = 0x21F3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F3E4u;
    // 0x21f3e8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E7F8u, 0x21F3E4u, 0x21F3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3ECu;
label_21f3ec:
    // 0x21f3ec: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21f3ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21f3f0: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x21f3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x21f3f4: 0x25f1bce7  addiu       $s1, $t7, -0x4319
    ctx->pc = 0x21f3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950119));
    // 0x21f3f8: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21f3f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21f3fc: 0x24c620a8  addiu       $a2, $a2, 0x20A8
    ctx->pc = 0x21f3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8360));
    // 0x21f400: 0x24e720b0  addiu       $a3, $a3, 0x20B0
    ctx->pc = 0x21f400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8368));
    // 0x21f404: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21f404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f408: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x21F408u;
    {
        const bool branch_taken_0x21f408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F408u;
        // 0x21f40c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f408) {
            ctx->pc = 0x21F47Cu;
            goto label_21f47c;
        }
    }
    ctx->pc = 0x21F410u;
    // 0x21f410: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x21f410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f414: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x21f414u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x21f418: 0xc087916  jal         func_21E458
    ctx->pc = 0x21F418u;
    SET_GPR_U32(ctx, 31, 0x21F420u);
    ctx->pc = 0x21F41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F418u;
    // 0x21f41c: 0x261020b8  addiu       $s0, $s0, 0x20B8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E458u, 0x21F418u, 0x21F420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F420u;
label_21f420:
    // 0x21f420: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x21f420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f424: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x21f424u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x21f428: 0x26250325  addiu       $a1, $s1, 0x325
    ctx->pc = 0x21f428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 805));
    // 0x21f42c: 0x24c620c0  addiu       $a2, $a2, 0x20C0
    ctx->pc = 0x21f42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8384));
    // 0x21f430: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21f430u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f434: 0xc087916  jal         func_21E458
    ctx->pc = 0x21F434u;
    SET_GPR_U32(ctx, 31, 0x21F43Cu);
    ctx->pc = 0x21F438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F434u;
    // 0x21f438: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E458u, 0x21F434u, 0x21F43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F43Cu;
label_21f43c:
    // 0x21f43c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x21f43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f440: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x21f440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x21f444: 0x2625fb52  addiu       $a1, $s1, -0x4AE
    ctx->pc = 0x21f444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966098));
    // 0x21f448: 0x24c620d0  addiu       $a2, $a2, 0x20D0
    ctx->pc = 0x21f448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8400));
    // 0x21f44c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21f44cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f450: 0xc087916  jal         func_21E458
    ctx->pc = 0x21F450u;
    SET_GPR_U32(ctx, 31, 0x21F458u);
    ctx->pc = 0x21F454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F450u;
    // 0x21f454: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E458u, 0x21F450u, 0x21F458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F458u;
label_21f458:
    // 0x21f458: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x21f458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f45c: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x21f45cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x21f460: 0x2625fb4b  addiu       $a1, $s1, -0x4B5
    ctx->pc = 0x21f460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966091));
    // 0x21f464: 0x24c620e0  addiu       $a2, $a2, 0x20E0
    ctx->pc = 0x21f464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8416));
    // 0x21f468: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21f468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f46c: 0xc087916  jal         func_21E458
    ctx->pc = 0x21F46Cu;
    SET_GPR_U32(ctx, 31, 0x21F474u);
    ctx->pc = 0x21F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F46Cu;
    // 0x21f470: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E458u, 0x21F46Cu, 0x21F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F474u;
label_21f474:
    // 0x21f474: 0xc087a78  jal         func_21E9E0
    ctx->pc = 0x21F474u;
    SET_GPR_U32(ctx, 31, 0x21F47Cu);
    ctx->pc = 0x21F478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F474u;
    // 0x21f478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E9E0u, 0x21F474u, 0x21F47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F47Cu;
label_21f47c:
    // 0x21f47c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21f47cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f480: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21f480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f484: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21f484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f488: 0x3e00008  jr          $ra
    ctx->pc = 0x21F488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F488u;
        // 0x21f48c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F490u;
    // 0x21f490: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x21f490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x21f494: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x21f494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x21f498: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x21f498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
    // 0x21f49c: 0xffbf0188  sd          $ra, 0x188($sp)
    ctx->pc = 0x21f49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 31));
    // 0x21f4a0: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x21f4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
    // 0x21f4a4: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x21f4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x21f4a8: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x21f4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x21f4ac: 0x2610bce7  addiu       $s0, $s0, -0x4319
    ctx->pc = 0x21f4acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950119));
    // 0x21f4b0: 0xc087bee  jal         func_21EFB8
    ctx->pc = 0x21F4B0u;
    SET_GPR_U32(ctx, 31, 0x21F4B8u);
    ctx->pc = 0x21F4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F4B0u;
    // 0x21f4b4: 0x27b10160  addiu       $s1, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EFB8u, 0x21F4B0u, 0x21F4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F4B8u;
label_21f4b8:
    // 0x21f4b8: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x21f4b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21f4bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21f4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21f4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4c4: 0xc0898da  jal         func_226368
    ctx->pc = 0x21F4C4u;
    SET_GPR_U32(ctx, 31, 0x21F4CCu);
    ctx->pc = 0x21F4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F4C4u;
    // 0x21f4c8: 0x240600a1  addiu       $a2, $zero, 0xA1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226368u, 0x21F4C4u, 0x21F4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F4CCu;
label_21f4cc:
    // 0x21f4cc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21f4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21f4d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4d4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x21f4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21f4d8: 0xc0898da  jal         func_226368
    ctx->pc = 0x21F4D8u;
    SET_GPR_U32(ctx, 31, 0x21F4E0u);
    ctx->pc = 0x21F4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F4D8u;
    // 0x21f4dc: 0x24a520e8  addiu       $a1, $a1, 0x20E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226368u, 0x21F4D8u, 0x21F4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F4E0u;
label_21f4e0:
    // 0x21f4e0: 0x260a0325  addiu       $t2, $s0, 0x325
    ctx->pc = 0x21f4e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 805));
    // 0x21f4e4: 0x2606fb52  addiu       $a2, $s0, -0x4AE
    ctx->pc = 0x21f4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966098));
    // 0x21f4e8: 0x2607fb0d  addiu       $a3, $s0, -0x4F3
    ctx->pc = 0x21f4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966029));
    // 0x21f4ec: 0x2608fb1c  addiu       $t0, $s0, -0x4E4
    ctx->pc = 0x21f4ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966044));
    // 0x21f4f0: 0x2610fb4b  addiu       $s0, $s0, -0x4B5
    ctx->pc = 0x21f4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966091));
    // 0x21f4f4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21f4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21f4f8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x21f4f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f500: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x21F500u;
    SET_GPR_U32(ctx, 31, 0x21F508u);
    ctx->pc = 0x21F504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F500u;
    // 0x21f504: 0x24a520f0  addiu       $a1, $a1, 0x20F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x21F500u, 0x21F508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F508u;
label_21f508:
    // 0x21f508: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21f508u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21f50c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21f50cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f510: 0x8de8c258  lw          $t0, -0x3DA8($t7)
    ctx->pc = 0x21f510u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294951512)));
    // 0x21f514: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21f514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f518: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21f518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21f51c: 0xc087c24  jal         func_21F090
    ctx->pc = 0x21F51Cu;
    SET_GPR_U32(ctx, 31, 0x21F524u);
    ctx->pc = 0x21F520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F51Cu;
    // 0x21f520: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F090u, 0x21F51Cu, 0x21F524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F524u;
label_21f524:
    // 0x21f524: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x21f524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x21f528: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x21f528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x21f52c: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x21f52cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x21f530: 0xdfbf0188  ld          $ra, 0x188($sp)
    ctx->pc = 0x21f530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x21f534: 0x3e00008  jr          $ra
    ctx->pc = 0x21F534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F534u;
        // 0x21f538: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F53Cu;
    // 0x21f53c: 0x0  nop
    ctx->pc = 0x21f53cu;
    // NOP
    // 0x21f540: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x21f540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x21f544: 0xffb001a0  sd          $s0, 0x1A0($sp)
    ctx->pc = 0x21f544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 16));
    // 0x21f548: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x21f548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x21f54c: 0xffb101a8  sd          $s1, 0x1A8($sp)
    ctx->pc = 0x21f54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 17));
    // 0x21f550: 0xffb201b0  sd          $s2, 0x1B0($sp)
    ctx->pc = 0x21f550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 18));
    // 0x21f554: 0xffb301b8  sd          $s3, 0x1B8($sp)
    ctx->pc = 0x21f554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 19));
    // 0x21f558: 0xffb401c0  sd          $s4, 0x1C0($sp)
    ctx->pc = 0x21f558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 20));
    // 0x21f55c: 0xffb501c8  sd          $s5, 0x1C8($sp)
    ctx->pc = 0x21f55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 21));
    // 0x21f560: 0xffb601d0  sd          $s6, 0x1D0($sp)
    ctx->pc = 0x21f560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 22));
    // 0x21f564: 0xffb701d8  sd          $s7, 0x1D8($sp)
    ctx->pc = 0x21f564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 23));
    // 0x21f568: 0xffbe01e0  sd          $fp, 0x1E0($sp)
    ctx->pc = 0x21f568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 30));
    // 0x21f56c: 0xffbf01e8  sd          $ra, 0x1E8($sp)
    ctx->pc = 0x21f56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 31));
    // 0x21f570: 0xc089dda  jal         func_227768
    ctx->pc = 0x21F570u;
    SET_GPR_U32(ctx, 31, 0x21F578u);
    ctx->pc = 0x21F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F570u;
    // 0x21f574: 0xafa00190  sw          $zero, 0x190($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227768u, 0x21F570u, 0x21F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F578u;
label_21f578:
    // 0x21f578: 0xc0879fe  jal         func_21E7F8
    ctx->pc = 0x21F578u;
    SET_GPR_U32(ctx, 31, 0x21F580u);
    ctx->pc = 0x21F57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F578u;
    // 0x21f57c: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E7F8u, 0x21F578u, 0x21F580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F580u;
label_21f580:
    // 0x21f580: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x21F580u;
    {
        const bool branch_taken_0x21f580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F580u;
        // 0x21f584: 0x3c0f003f  lui         $t7, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f580) {
            ctx->pc = 0x21F708u;
            goto label_21f708;
        }
    }
    ctx->pc = 0x21F588u;
    // 0x21f588: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x21f588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x21f58c: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x21f58cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x21f590: 0x25f520b0  addiu       $s5, $t7, 0x20B0
    ctx->pc = 0x21f590u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 15), 8368));
    // 0x21f594: 0x2612be29  addiu       $s2, $s0, -0x41D7
    ctx->pc = 0x21f594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950441));
    // 0x21f598: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x21f598u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x21f59c: 0x24c62130  addiu       $a2, $a2, 0x2130
    ctx->pc = 0x21f59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8496));
    // 0x21f5a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21f5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f5a4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x21f5a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f5a8: 0xc087916  jal         func_21E458
    ctx->pc = 0x21F5A8u;
    SET_GPR_U32(ctx, 31, 0x21F5B0u);
    ctx->pc = 0x21F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F5A8u;
    // 0x21f5ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E458u, 0x21F5A8u, 0x21F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F5B0u;
label_21f5b0:
    // 0x21f5b0: 0x2657f9f0  addiu       $s7, $s2, -0x610
    ctx->pc = 0x21f5b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965744));
    // 0x21f5b4: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x21f5b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x21f5b8: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x21f5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x21f5bc: 0x3c0e003f  lui         $t6, 0x3F
    ctx->pc = 0x21f5bcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
    // 0x21f5c0: 0x25f62140  addiu       $s6, $t7, 0x2140
    ctx->pc = 0x21f5c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 8512));
    // 0x21f5c4: 0x25d320b8  addiu       $s3, $t6, 0x20B8
    ctx->pc = 0x21f5c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 14), 8376));
    // 0x21f5c8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x21f5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f5cc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x21f5ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f5d0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21f5d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f5d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21f5d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f5d8: 0xc087916  jal         func_21E458
    ctx->pc = 0x21F5D8u;
    SET_GPR_U32(ctx, 31, 0x21F5E0u);
    ctx->pc = 0x21F5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F5D8u;
    // 0x21f5dc: 0x265e01e3  addiu       $fp, $s2, 0x1E3 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 483));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E458u, 0x21F5D8u, 0x21F5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F5E0u;
label_21f5e0:
    // 0x21f5e0: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x21f5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x21f5e4: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x21f5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x21f5e8: 0x2645fa17  addiu       $a1, $s2, -0x5E9
    ctx->pc = 0x21f5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965783));
    // 0x21f5ec: 0x24c62148  addiu       $a2, $a2, 0x2148
    ctx->pc = 0x21f5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8520));
    // 0x21f5f0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21f5f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f5f4: 0xc087916  jal         func_21E458
    ctx->pc = 0x21F5F4u;
    SET_GPR_U32(ctx, 31, 0x21F5FCu);
    ctx->pc = 0x21F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F5F4u;
    // 0x21f5f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E458u, 0x21F5F4u, 0x21F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F5FCu;
label_21f5fc:
    // 0x21f5fc: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x21f5fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x21f600: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x21f600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x21f604: 0x25f420c0  addiu       $s4, $t7, 0x20C0
    ctx->pc = 0x21f604u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 15), 8384));
    // 0x21f608: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x21f608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f60c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21f60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f610: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21f610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f614: 0xc087916  jal         func_21E458
    ctx->pc = 0x21F614u;
    SET_GPR_U32(ctx, 31, 0x21F61Cu);
    ctx->pc = 0x21F618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F614u;
    // 0x21f618: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E458u, 0x21F614u, 0x21F61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F61Cu;
label_21f61c:
    // 0x21f61c: 0x820fbe29  lb          $t7, -0x41D7($s0)
    ctx->pc = 0x21f61cu;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294950441)));
    // 0x21f620: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x21F620u;
    {
        const bool branch_taken_0x21f620 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F620u;
        // 0x21f624: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f620) {
            ctx->pc = 0x21F63Cu;
            goto label_21f63c;
        }
    }
    ctx->pc = 0x21F628u;
    // 0x21f628: 0xc087a78  jal         func_21E9E0
    ctx->pc = 0x21F628u;
    SET_GPR_U32(ctx, 31, 0x21F630u);
    ctx->pc = 0x21F62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F628u;
    // 0x21f62c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E9E0u, 0x21F628u, 0x21F630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F630u;
label_21f630:
    // 0x21f630: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x21F630u;
    {
        const bool branch_taken_0x21f630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F630u;
        // 0x21f634: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f630) {
            ctx->pc = 0x21F794u;
            goto label_21f794;
        }
    }
    ctx->pc = 0x21F638u;
    // 0x21f638: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21f638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_21f63c:
    // 0x21f63c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21f63cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21f640: 0x24842158  addiu       $a0, $a0, 0x2158
    ctx->pc = 0x21f640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8536));
    // 0x21f644: 0x24e72170  addiu       $a3, $a3, 0x2170
    ctx->pc = 0x21f644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8560));
    // 0x21f648: 0x24050449  addiu       $a1, $zero, 0x449
    ctx->pc = 0x21f648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1097));
    // 0x21f64c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21F64Cu;
    SET_GPR_U32(ctx, 31, 0x21F654u);
    ctx->pc = 0x21F650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F64Cu;
    // 0x21f650: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x21F64Cu, 0x21F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F654u;
label_21f654:
    // 0x21f654: 0xae40f9c7  sw          $zero, -0x639($s2)
    ctx->pc = 0x21f654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294965703), GPR_U32(ctx, 0));
    // 0x21f658: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21f658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21f65c: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x21f65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x21f660: 0xc04a9f0  jal         func_12A7C0
    ctx->pc = 0x21F660u;
    SET_GPR_U32(ctx, 31, 0x21F668u);
    ctx->pc = 0x21F664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F660u;
    // 0x21f664: 0x24a52188  addiu       $a1, $a1, 0x2188 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A7C0u, 0x21F660u, 0x21F668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F668u;
label_21f668:
    // 0x21f668: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x21F668u;
    {
        const bool branch_taken_0x21f668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F668u;
        // 0x21f66c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f668) {
            ctx->pc = 0x21F708u;
            goto label_21f708;
        }
    }
    ctx->pc = 0x21F670u;
    // 0x21f670: 0x2650ff5f  addiu       $s0, $s2, -0xA1
    ctx->pc = 0x21f670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967135));
    // 0x21f674: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x21f674u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x21f678: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x21f678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f67c: 0x24c621b0  addiu       $a2, $a2, 0x21B0
    ctx->pc = 0x21f67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8624));
    // 0x21f680: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21f680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f684: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21f684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f688: 0xc087916  jal         func_21E458
    ctx->pc = 0x21F688u;
    SET_GPR_U32(ctx, 31, 0x21F690u);
    ctx->pc = 0x21F68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F688u;
    // 0x21f68c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E458u, 0x21F688u, 0x21F690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F690u;
label_21f690:
    // 0x21f690: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x21f690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x21f694: 0x2645fa09  addiu       $a1, $s2, -0x5F7
    ctx->pc = 0x21f694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965769));
    // 0x21f698: 0x24c620e0  addiu       $a2, $a2, 0x20E0
    ctx->pc = 0x21f698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8416));
    // 0x21f69c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21f69cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6a4: 0xc087916  jal         func_21E458
    ctx->pc = 0x21F6A4u;
    SET_GPR_U32(ctx, 31, 0x21F6ACu);
    ctx->pc = 0x21F6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F6A4u;
    // 0x21f6a8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E458u, 0x21F6A4u, 0x21F6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F6ACu;
label_21f6ac:
    // 0x21f6ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6b0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x21f6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6b4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x21f6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6b8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21f6b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6bc: 0xc087916  jal         func_21E458
    ctx->pc = 0x21F6BCu;
    SET_GPR_U32(ctx, 31, 0x21F6C4u);
    ctx->pc = 0x21F6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F6BCu;
    // 0x21f6c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E458u, 0x21F6BCu, 0x21F6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F6C4u;
label_21f6c4:
    // 0x21f6c4: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x21f6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x21f6c8: 0x2645fa1e  addiu       $a1, $s2, -0x5E2
    ctx->pc = 0x21f6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965790));
    // 0x21f6cc: 0x24c621b8  addiu       $a2, $a2, 0x21B8
    ctx->pc = 0x21f6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8632));
    // 0x21f6d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21f6d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6d8: 0xc087916  jal         func_21E458
    ctx->pc = 0x21F6D8u;
    SET_GPR_U32(ctx, 31, 0x21F6E0u);
    ctx->pc = 0x21F6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F6D8u;
    // 0x21f6dc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E458u, 0x21F6D8u, 0x21F6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F6E0u;
label_21f6e0:
    // 0x21f6e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6e4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x21f6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6e8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21f6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6ec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21f6ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6f0: 0xc087916  jal         func_21E458
    ctx->pc = 0x21F6F0u;
    SET_GPR_U32(ctx, 31, 0x21F6F8u);
    ctx->pc = 0x21F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F6F0u;
    // 0x21f6f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E458u, 0x21F6F0u, 0x21F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F6F8u;
label_21f6f8:
    // 0x21f6f8: 0xc087a78  jal         func_21E9E0
    ctx->pc = 0x21F6F8u;
    SET_GPR_U32(ctx, 31, 0x21F700u);
    ctx->pc = 0x21F6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F6F8u;
    // 0x21f6fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E9E0u, 0x21F6F8u, 0x21F700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F700u;
label_21f700:
    // 0x21f700: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x21F700u;
    {
        const bool branch_taken_0x21f700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f700) {
            ctx->pc = 0x21F704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F700u;
            // 0x21f704: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F73Cu;
            goto label_21f73c;
        }
    }
    ctx->pc = 0x21F708u;
label_21f708:
    // 0x21f708: 0xdfb001a0  ld          $s0, 0x1A0($sp)
    ctx->pc = 0x21f708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_21f70c:
    // 0x21f70c: 0xdfb101a8  ld          $s1, 0x1A8($sp)
    ctx->pc = 0x21f70cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x21f710: 0xdfb201b0  ld          $s2, 0x1B0($sp)
    ctx->pc = 0x21f710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x21f714: 0xdfb301b8  ld          $s3, 0x1B8($sp)
    ctx->pc = 0x21f714u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x21f718: 0xdfb401c0  ld          $s4, 0x1C0($sp)
    ctx->pc = 0x21f718u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x21f71c: 0xdfb501c8  ld          $s5, 0x1C8($sp)
    ctx->pc = 0x21f71cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x21f720: 0xdfb601d0  ld          $s6, 0x1D0($sp)
    ctx->pc = 0x21f720u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x21f724: 0xdfb701d8  ld          $s7, 0x1D8($sp)
    ctx->pc = 0x21f724u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x21f728: 0xdfbe01e0  ld          $fp, 0x1E0($sp)
    ctx->pc = 0x21f728u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x21f72c: 0xdfbf01e8  ld          $ra, 0x1E8($sp)
    ctx->pc = 0x21f72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x21f730: 0x3e00008  jr          $ra
    ctx->pc = 0x21F730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F730u;
        // 0x21f734: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F738u;
label_21f738:
    // 0x21f738: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x21f738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_21f73c:
    // 0x21f73c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21f73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f740: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21f740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f744: 0xc08796e  jal         func_21E5B8
    ctx->pc = 0x21F744u;
    SET_GPR_U32(ctx, 31, 0x21F74Cu);
    ctx->pc = 0x21F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F744u;
    // 0x21f748: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E5B8u, 0x21F744u, 0x21F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F74Cu;
label_21f74c:
    // 0x21f74c: 0x440ffee  bltz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x21F74Cu;
    {
        const bool branch_taken_0x21f74c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F74Cu;
        // 0x21f750: 0x3c10003a  lui         $s0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f74c) {
            ctx->pc = 0x21F708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21f708;
        }
    }
    ctx->pc = 0x21F754u;
    // 0x21f754: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x21f754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21f758: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x21f758u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x21f75c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x21f75cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f760: 0x2610b7f4  addiu       $s0, $s0, -0x480C
    ctx->pc = 0x21f760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948852));
    // 0x21f764: 0x26311c08  addiu       $s1, $s1, 0x1C08
    ctx->pc = 0x21f764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7176));
    // 0x21f768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f76c: 0xc0898b0  jal         func_2262C0
    ctx->pc = 0x21F76Cu;
    SET_GPR_U32(ctx, 31, 0x21F774u);
    ctx->pc = 0x21F770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F76Cu;
    // 0x21f770: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262C0u, 0x21F76Cu, 0x21F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F774u;
label_21f774:
    // 0x21f774: 0x2610000f  addiu       $s0, $s0, 0xF
    ctx->pc = 0x21f774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x21f778: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x21f778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x21f77c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f780: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x21f780u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f784: 0xc0898b0  jal         func_2262C0
    ctx->pc = 0x21F784u;
    SET_GPR_U32(ctx, 31, 0x21F78Cu);
    ctx->pc = 0x21F788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F784u;
    // 0x21f788: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262C0u, 0x21F784u, 0x21F78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F78Cu;
label_21f78c:
    // 0x21f78c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x21F78Cu;
    {
        const bool branch_taken_0x21f78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F78Cu;
        // 0x21f790: 0xdfb001a0  ld          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f78c) {
            ctx->pc = 0x21F70Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21f70c;
        }
    }
    ctx->pc = 0x21F794u;
label_21f794:
    // 0x21f794: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x21F794u;
    {
        const bool branch_taken_0x21f794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F794u;
        // 0x21f798: 0xae4ff9c7  sw          $t7, -0x639($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294965703), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f794) {
            ctx->pc = 0x21F738u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21f738;
        }
    }
    ctx->pc = 0x21F79Cu;
    // 0x21f79c: 0x0  nop
    ctx->pc = 0x21f79cu;
    // NOP
    // 0x21f7a0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x21f7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x21f7a4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21f7a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21f7a8: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x21f7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x21f7ac: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x21f7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
    // 0x21f7b0: 0x25f2b7e8  addiu       $s2, $t7, -0x4818
    ctx->pc = 0x21f7b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948840));
    // 0x21f7b4: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x21f7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
    // 0x21f7b8: 0xffbf0188  sd          $ra, 0x188($sp)
    ctx->pc = 0x21f7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 31));
    // 0x21f7bc: 0x8e4e0008  lw          $t6, 0x8($s2)
    ctx->pc = 0x21f7bcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x21f7c0: 0x15c0001e  bnez        $t6, . + 4 + (0x1E << 2)
    ctx->pc = 0x21F7C0u;
    {
        const bool branch_taken_0x21f7c0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7C0u;
        // 0x21f7c4: 0xdfb00170  ld          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f7c0) {
            ctx->pc = 0x21F83Cu;
            goto label_21f83c;
        }
    }
    ctx->pc = 0x21F7C8u;
    // 0x21f7c8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x21f7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x21f7cc: 0xc087bee  jal         func_21EFB8
    ctx->pc = 0x21F7CCu;
    SET_GPR_U32(ctx, 31, 0x21F7D4u);
    ctx->pc = 0x21F7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F7CCu;
    // 0x21f7d0: 0x27b00160  addiu       $s0, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EFB8u, 0x21F7CCu, 0x21F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F7D4u;
label_21f7d4:
    // 0x21f7d4: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x21f7d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21f7d8: 0x264505a0  addiu       $a1, $s2, 0x5A0
    ctx->pc = 0x21f7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1440));
    // 0x21f7dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21f7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f7e0: 0xc0898da  jal         func_226368
    ctx->pc = 0x21F7E0u;
    SET_GPR_U32(ctx, 31, 0x21F7E8u);
    ctx->pc = 0x21F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F7E0u;
    // 0x21f7e4: 0x240600a1  addiu       $a2, $zero, 0xA1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226368u, 0x21F7E0u, 0x21F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F7E8u;
label_21f7e8:
    // 0x21f7e8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21f7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21f7ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f7f0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x21f7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21f7f4: 0xc0898da  jal         func_226368
    ctx->pc = 0x21F7F4u;
    SET_GPR_U32(ctx, 31, 0x21F7FCu);
    ctx->pc = 0x21F7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F7F4u;
    // 0x21f7f8: 0x24a520e8  addiu       $a1, $a1, 0x20E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226368u, 0x21F7F4u, 0x21F7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F7FCu;
label_21f7fc:
    // 0x21f7fc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21f7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21f800: 0x2646004a  addiu       $a2, $s2, 0x4A
    ctx->pc = 0x21f800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 74));
    // 0x21f804: 0x26470031  addiu       $a3, $s2, 0x31
    ctx->pc = 0x21f804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 49));
    // 0x21f808: 0x2648005f  addiu       $t0, $s2, 0x5F
    ctx->pc = 0x21f808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 95));
    // 0x21f80c: 0x24a521c0  addiu       $a1, $a1, 0x21C0
    ctx->pc = 0x21f80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8640));
    // 0x21f810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f814: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x21F814u;
    SET_GPR_U32(ctx, 31, 0x21F81Cu);
    ctx->pc = 0x21F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F814u;
    // 0x21f818: 0x26490824  addiu       $t1, $s2, 0x824 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 2084));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x21F814u, 0x21F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F81Cu;
label_21f81c:
    // 0x21f81c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21f81cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21f820: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21f820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f824: 0x8de8c258  lw          $t0, -0x3DA8($t7)
    ctx->pc = 0x21f824u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294951512)));
    // 0x21f828: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21f828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f82c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21f830: 0xc087c24  jal         func_21F090
    ctx->pc = 0x21F830u;
    SET_GPR_U32(ctx, 31, 0x21F838u);
    ctx->pc = 0x21F834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F830u;
    // 0x21f834: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F090u, 0x21F830u, 0x21F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F838u;
label_21f838:
    // 0x21f838: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x21f838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_21f83c:
    // 0x21f83c: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x21f83cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x21f840: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x21f840u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x21f844: 0xdfbf0188  ld          $ra, 0x188($sp)
    ctx->pc = 0x21f844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x21f848: 0x3e00008  jr          $ra
    ctx->pc = 0x21F848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F848u;
        // 0x21f84c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F850u;
    // 0x21f850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21f854: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21f854u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21f858: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21f858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21f85c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21f85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21f860: 0x25f0b7e8  addiu       $s0, $t7, -0x4818
    ctx->pc = 0x21f860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948840));
    // 0x21f864: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x21f864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x21f868: 0x8e0e0008  lw          $t6, 0x8($s0)
    ctx->pc = 0x21f868u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21f86c: 0x55c00006  bnel        $t6, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x21F86Cu;
    {
        const bool branch_taken_0x21f86c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f86c) {
            ctx->pc = 0x21F870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F86Cu;
            // 0x21f870: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F888u;
            goto label_21f888;
        }
    }
    ctx->pc = 0x21F874u;
    // 0x21f874: 0xc089dda  jal         func_227768
    ctx->pc = 0x21F874u;
    SET_GPR_U32(ctx, 31, 0x21F87Cu);
    ctx->pc = 0x21F878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F874u;
    // 0x21f878: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227768u, 0x21F874u, 0x21F87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F87Cu;
label_21f87c:
    // 0x21f87c: 0xc087a78  jal         func_21E9E0
    ctx->pc = 0x21F87Cu;
    SET_GPR_U32(ctx, 31, 0x21F884u);
    ctx->pc = 0x21F880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F87Cu;
    // 0x21f880: 0x26040641  addiu       $a0, $s0, 0x641 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1601));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E9E0u, 0x21F87Cu, 0x21F884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F884u;
label_21f884:
    // 0x21f884: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21f884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21f888:
    // 0x21f888: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21f888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f88c: 0x3e00008  jr          $ra
    ctx->pc = 0x21F88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F88Cu;
        // 0x21f890: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F894u;
    // 0x21f894: 0x0  nop
    ctx->pc = 0x21f894u;
    // NOP
    // 0x21f898: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x21f898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x21f89c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x21f89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21f8a0: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x21f8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
    // 0x21f8a4: 0xffbf0188  sd          $ra, 0x188($sp)
    ctx->pc = 0x21f8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 31));
    // 0x21f8a8: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x21f8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
    // 0x21f8ac: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x21f8acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x21f8b0: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x21f8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x21f8b4: 0x2610be29  addiu       $s0, $s0, -0x41D7
    ctx->pc = 0x21f8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950441));
    // 0x21f8b8: 0xc087bee  jal         func_21EFB8
    ctx->pc = 0x21F8B8u;
    SET_GPR_U32(ctx, 31, 0x21F8C0u);
    ctx->pc = 0x21F8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F8B8u;
    // 0x21f8bc: 0x27b10160  addiu       $s1, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EFB8u, 0x21F8B8u, 0x21F8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F8C0u;
label_21f8c0:
    // 0x21f8c0: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x21f8c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21f8c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21f8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f8c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21f8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f8cc: 0xc0898da  jal         func_226368
    ctx->pc = 0x21F8CCu;
    SET_GPR_U32(ctx, 31, 0x21F8D4u);
    ctx->pc = 0x21F8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F8CCu;
    // 0x21f8d0: 0x240600a1  addiu       $a2, $zero, 0xA1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226368u, 0x21F8CCu, 0x21F8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F8D4u;
label_21f8d4:
    // 0x21f8d4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21f8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21f8d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f8dc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x21f8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21f8e0: 0xc0898da  jal         func_226368
    ctx->pc = 0x21F8E0u;
    SET_GPR_U32(ctx, 31, 0x21F8E8u);
    ctx->pc = 0x21F8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F8E0u;
    // 0x21f8e4: 0x24a521e8  addiu       $a1, $a1, 0x21E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226368u, 0x21F8E0u, 0x21F8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F8E8u;
label_21f8e8:
    // 0x21f8e8: 0x260801e3  addiu       $t0, $s0, 0x1E3
    ctx->pc = 0x21f8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 483));
    // 0x21f8ec: 0x2606f9f0  addiu       $a2, $s0, -0x610
    ctx->pc = 0x21f8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965744));
    // 0x21f8f0: 0x2610fa17  addiu       $s0, $s0, -0x5E9
    ctx->pc = 0x21f8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965783));
    // 0x21f8f4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21f8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21f8f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21f8f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f8fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f900: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x21F900u;
    SET_GPR_U32(ctx, 31, 0x21F908u);
    ctx->pc = 0x21F904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F900u;
    // 0x21f904: 0x24a521f0  addiu       $a1, $a1, 0x21F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x21F900u, 0x21F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F908u;
label_21f908:
    // 0x21f908: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21f908u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21f90c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21f90cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f910: 0x8de8c258  lw          $t0, -0x3DA8($t7)
    ctx->pc = 0x21f910u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294951512)));
    // 0x21f914: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21f914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f918: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21f918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21f91c: 0xc087c24  jal         func_21F090
    ctx->pc = 0x21F91Cu;
    SET_GPR_U32(ctx, 31, 0x21F924u);
    ctx->pc = 0x21F920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F91Cu;
    // 0x21f920: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F090u, 0x21F91Cu, 0x21F924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F924u;
label_21f924:
    // 0x21f924: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x21f924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x21f928: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x21f928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x21f92c: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x21f92cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x21f930: 0xdfbf0188  ld          $ra, 0x188($sp)
    ctx->pc = 0x21f930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x21f934: 0x3e00008  jr          $ra
    ctx->pc = 0x21F934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F934u;
        // 0x21f938: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F93Cu;
    // 0x21f93c: 0x0  nop
    ctx->pc = 0x21f93cu;
    // NOP
    // 0x21f940: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x21f940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x21f944: 0xffbf01b0  sd          $ra, 0x1B0($sp)
    ctx->pc = 0x21f944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
    // 0x21f948: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x21f948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x21f94c: 0xffb001a0  sd          $s0, 0x1A0($sp)
    ctx->pc = 0x21f94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 16));
    // 0x21f950: 0xffb101a8  sd          $s1, 0x1A8($sp)
    ctx->pc = 0x21f950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 17));
    // 0x21f954: 0xc089dda  jal         func_227768
    ctx->pc = 0x21F954u;
    SET_GPR_U32(ctx, 31, 0x21F95Cu);
    ctx->pc = 0x21F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F954u;
    // 0x21f958: 0xafa00190  sw          $zero, 0x190($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227768u, 0x21F954u, 0x21F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F95Cu;
label_21f95c:
    // 0x21f95c: 0xc0879fe  jal         func_21E7F8
    ctx->pc = 0x21F95Cu;
    SET_GPR_U32(ctx, 31, 0x21F964u);
    ctx->pc = 0x21F960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F95Cu;
    // 0x21f960: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E7F8u, 0x21F95Cu, 0x21F964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F964u;
label_21f964:
    // 0x21f964: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21f964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21f968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f96c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x21F96Cu;
    {
        const bool branch_taken_0x21f96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F96Cu;
        // 0x21f970: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f96c) {
            ctx->pc = 0x21F9E0u;
            goto label_21f9e0;
        }
    }
    ctx->pc = 0x21F974u;
    // 0x21f974: 0xc08796e  jal         func_21E5B8
    ctx->pc = 0x21F974u;
    SET_GPR_U32(ctx, 31, 0x21F97Cu);
    ctx->pc = 0x21F978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F974u;
    // 0x21f978: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E5B8u, 0x21F974u, 0x21F97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F97Cu;
label_21f97c:
    // 0x21f97c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21f97cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21f980: 0x3c0e003f  lui         $t6, 0x3F
    ctx->pc = 0x21f980u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
    // 0x21f984: 0x25f0b8e8  addiu       $s0, $t7, -0x4718
    ctx->pc = 0x21f984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949096));
    // 0x21f988: 0x25d11c08  addiu       $s1, $t6, 0x1C08
    ctx->pc = 0x21f988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), 7176));
    // 0x21f98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f990: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21F990u;
    {
        const bool branch_taken_0x21f990 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F990u;
        // 0x21f994: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f990) {
            ctx->pc = 0x21F9E0u;
            goto label_21f9e0;
        }
    }
    ctx->pc = 0x21F998u;
    // 0x21f998: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x21f998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21f99c: 0xc0898b0  jal         func_2262C0
    ctx->pc = 0x21F99Cu;
    SET_GPR_U32(ctx, 31, 0x21F9A4u);
    ctx->pc = 0x21F9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F99Cu;
    // 0x21f9a0: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262C0u, 0x21F99Cu, 0x21F9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F9A4u;
label_21f9a4:
    // 0x21f9a4: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x21f9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x21f9a8: 0x2604ff28  addiu       $a0, $s0, -0xD8
    ctx->pc = 0x21f9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967080));
    // 0x21f9ac: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x21f9acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f9b0: 0xc0898b0  jal         func_2262C0
    ctx->pc = 0x21F9B0u;
    SET_GPR_U32(ctx, 31, 0x21F9B8u);
    ctx->pc = 0x21F9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F9B0u;
    // 0x21f9b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262C0u, 0x21F9B0u, 0x21F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F9B8u;
label_21f9b8:
    // 0x21f9b8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x21f9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x21f9bc: 0x260405e2  addiu       $a0, $s0, 0x5E2
    ctx->pc = 0x21f9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1506));
    // 0x21f9c0: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x21f9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f9c4: 0xc0898b0  jal         func_2262C0
    ctx->pc = 0x21F9C4u;
    SET_GPR_U32(ctx, 31, 0x21F9CCu);
    ctx->pc = 0x21F9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F9C4u;
    // 0x21f9c8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262C0u, 0x21F9C4u, 0x21F9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F9CCu;
label_21f9cc:
    // 0x21f9cc: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x21f9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x21f9d0: 0x26040683  addiu       $a0, $s0, 0x683
    ctx->pc = 0x21f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1667));
    // 0x21f9d4: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x21f9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f9d8: 0xc0898b0  jal         func_2262C0
    ctx->pc = 0x21F9D8u;
    SET_GPR_U32(ctx, 31, 0x21F9E0u);
    ctx->pc = 0x21F9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F9D8u;
    // 0x21f9dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262C0u, 0x21F9D8u, 0x21F9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F9E0u;
label_21f9e0:
    // 0x21f9e0: 0xdfb001a0  ld          $s0, 0x1A0($sp)
    ctx->pc = 0x21f9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x21f9e4: 0xdfb101a8  ld          $s1, 0x1A8($sp)
    ctx->pc = 0x21f9e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x21f9e8: 0xdfbf01b0  ld          $ra, 0x1B0($sp)
    ctx->pc = 0x21f9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x21f9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x21F9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9ECu;
        // 0x21f9f0: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F9F4u;
    // 0x21f9f4: 0x0  nop
    ctx->pc = 0x21f9f4u;
    // NOP
    // 0x21f9f8: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x21f9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x21f9fc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x21f9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x21fa00: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x21fa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x21fa04: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x21fa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
    // 0x21fa08: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x21fa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
    // 0x21fa0c: 0xc087bee  jal         func_21EFB8
    ctx->pc = 0x21FA0Cu;
    SET_GPR_U32(ctx, 31, 0x21FA14u);
    ctx->pc = 0x21FA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FA0Cu;
    // 0x21fa10: 0x27b00160  addiu       $s0, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EFB8u, 0x21FA0Cu, 0x21FA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FA14u;
label_21fa14:
    // 0x21fa14: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x21fa14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21fa18: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x21fa18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x21fa1c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21fa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21fa20: 0x24c6beca  addiu       $a2, $a2, -0x4136
    ctx->pc = 0x21fa20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950602));
    // 0x21fa24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21fa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fa28: 0x24c7f92a  addiu       $a3, $a2, -0x6D6
    ctx->pc = 0x21fa28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965546));
    // 0x21fa2c: 0x24c8f946  addiu       $t0, $a2, -0x6BA
    ctx->pc = 0x21fa2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965574));
    // 0x21fa30: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x21FA30u;
    SET_GPR_U32(ctx, 31, 0x21FA38u);
    ctx->pc = 0x21FA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FA30u;
    // 0x21fa34: 0x24a52218  addiu       $a1, $a1, 0x2218 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x21FA30u, 0x21FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FA38u;
label_21fa38:
    // 0x21fa38: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21fa38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21fa3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fa40: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x21fa40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21fa44: 0xc0898da  jal         func_226368
    ctx->pc = 0x21FA44u;
    SET_GPR_U32(ctx, 31, 0x21FA4Cu);
    ctx->pc = 0x21FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FA44u;
    // 0x21fa48: 0x24a52238  addiu       $a1, $a1, 0x2238 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226368u, 0x21FA44u, 0x21FA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FA4Cu;
label_21fa4c:
    // 0x21fa4c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21fa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21fa50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fa54: 0x240600a1  addiu       $a2, $zero, 0xA1
    ctx->pc = 0x21fa54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x21fa58: 0xc0898da  jal         func_226368
    ctx->pc = 0x21FA58u;
    SET_GPR_U32(ctx, 31, 0x21FA60u);
    ctx->pc = 0x21FA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FA58u;
    // 0x21fa5c: 0x24a51cf0  addiu       $a1, $a1, 0x1CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226368u, 0x21FA58u, 0x21FA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FA60u;
label_21fa60:
    // 0x21fa60: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21fa60u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21fa64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21fa64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fa68: 0x8de8c258  lw          $t0, -0x3DA8($t7)
    ctx->pc = 0x21fa68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294951512)));
    // 0x21fa6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21fa6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fa70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21fa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21fa74: 0xc087c24  jal         func_21F090
    ctx->pc = 0x21FA74u;
    SET_GPR_U32(ctx, 31, 0x21FA7Cu);
    ctx->pc = 0x21FA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FA74u;
    // 0x21fa78: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F090u, 0x21FA74u, 0x21FA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FA7Cu;
label_21fa7c:
    // 0x21fa7c: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x21fa7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x21fa80: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x21fa80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x21fa84: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x21fa84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x21fa88: 0x3e00008  jr          $ra
    ctx->pc = 0x21FA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA88u;
        // 0x21fa8c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FA90u;
    // 0x21fa90: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x21fa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x21fa94: 0xffbf01b8  sd          $ra, 0x1B8($sp)
    ctx->pc = 0x21fa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 31));
    // 0x21fa98: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x21fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x21fa9c: 0xffb001a0  sd          $s0, 0x1A0($sp)
    ctx->pc = 0x21fa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 16));
    // 0x21faa0: 0xffb101a8  sd          $s1, 0x1A8($sp)
    ctx->pc = 0x21faa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 17));
    // 0x21faa4: 0xffb201b0  sd          $s2, 0x1B0($sp)
    ctx->pc = 0x21faa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 18));
    // 0x21faa8: 0xc089dda  jal         func_227768
    ctx->pc = 0x21FAA8u;
    SET_GPR_U32(ctx, 31, 0x21FAB0u);
    ctx->pc = 0x21FAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FAA8u;
    // 0x21faac: 0xafa00190  sw          $zero, 0x190($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227768u, 0x21FAA8u, 0x21FAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FAB0u;
label_21fab0:
    // 0x21fab0: 0xc0879fe  jal         func_21E7F8
    ctx->pc = 0x21FAB0u;
    SET_GPR_U32(ctx, 31, 0x21FAB8u);
    ctx->pc = 0x21FAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FAB0u;
    // 0x21fab4: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E7F8u, 0x21FAB0u, 0x21FAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FAB8u;
label_21fab8:
    // 0x21fab8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21fab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fabc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21fabcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fac0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x21FAC0u;
    {
        const bool branch_taken_0x21fac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAC0u;
        // 0x21fac4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fac0) {
            ctx->pc = 0x21FB2Cu;
            goto label_21fb2c;
        }
    }
    ctx->pc = 0x21FAC8u;
    // 0x21fac8: 0xc08796e  jal         func_21E5B8
    ctx->pc = 0x21FAC8u;
    SET_GPR_U32(ctx, 31, 0x21FAD0u);
    ctx->pc = 0x21FACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FAC8u;
    // 0x21facc: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E5B8u, 0x21FAC8u, 0x21FAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FAD0u;
label_21fad0:
    // 0x21fad0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21fad0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21fad4: 0x3c0e003f  lui         $t6, 0x3F
    ctx->pc = 0x21fad4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
    // 0x21fad8: 0x25f0b8e8  addiu       $s0, $t7, -0x4718
    ctx->pc = 0x21fad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949096));
    // 0x21fadc: 0x25d11c08  addiu       $s1, $t6, 0x1C08
    ctx->pc = 0x21fadcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), 7176));
    // 0x21fae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fae4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21fae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fae8: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21FAE8u;
    {
        const bool branch_taken_0x21fae8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAE8u;
        // 0x21faec: 0x261207c5  addiu       $s2, $s0, 0x7C5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1989));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fae8) {
            ctx->pc = 0x21FB2Cu;
            goto label_21fb2c;
        }
    }
    ctx->pc = 0x21FAF0u;
    // 0x21faf0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x21faf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21faf4: 0xc0898b0  jal         func_2262C0
    ctx->pc = 0x21FAF4u;
    SET_GPR_U32(ctx, 31, 0x21FAFCu);
    ctx->pc = 0x21FAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FAF4u;
    // 0x21faf8: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262C0u, 0x21FAF4u, 0x21FAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FAFCu;
label_21fafc:
    // 0x21fafc: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x21fafcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21fb00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21fb00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb04: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x21fb04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x21fb08: 0xc0898b0  jal         func_2262C0
    ctx->pc = 0x21FB08u;
    SET_GPR_U32(ctx, 31, 0x21FB10u);
    ctx->pc = 0x21FB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB08u;
    // 0x21fb0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262C0u, 0x21FB08u, 0x21FB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB10u;
label_21fb10:
    // 0x21fb10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb14: 0xc04a726  jal         func_129C98
    ctx->pc = 0x21FB14u;
    SET_GPR_U32(ctx, 31, 0x21FB1Cu);
    ctx->pc = 0x21FB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB14u;
    // 0x21fb18: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129C98u, 0x21FB14u, 0x21FB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB1Cu;
label_21fb1c:
    // 0x21fb1c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x21fb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x21fb20: 0xc048c54  jal         func_123150
    ctx->pc = 0x21FB20u;
    SET_GPR_U32(ctx, 31, 0x21FB28u);
    ctx->pc = 0x21FB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB20u;
    // 0x21fb24: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123150u, 0x21FB20u, 0x21FB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB28u;
label_21fb28:
    // 0x21fb28: 0xae020868  sw          $v0, 0x868($s0)
    ctx->pc = 0x21fb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2152), GPR_U32(ctx, 2));
label_21fb2c:
    // 0x21fb2c: 0xdfb001a0  ld          $s0, 0x1A0($sp)
    ctx->pc = 0x21fb2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x21fb30: 0xdfb101a8  ld          $s1, 0x1A8($sp)
    ctx->pc = 0x21fb30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x21fb34: 0xdfb201b0  ld          $s2, 0x1B0($sp)
    ctx->pc = 0x21fb34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x21fb38: 0xdfbf01b8  ld          $ra, 0x1B8($sp)
    ctx->pc = 0x21fb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x21fb3c: 0x3e00008  jr          $ra
    ctx->pc = 0x21FB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB3Cu;
        // 0x21fb40: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FB44u;
    // 0x21fb44: 0x0  nop
    ctx->pc = 0x21fb44u;
    // NOP
    // 0x21fb48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21fb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21fb4c: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x21fb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x21fb50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21fb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21fb54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21fb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fb58: 0x8087bee  j           func_21EFB8
    ctx->pc = 0x21FB58u;
    ctx->pc = 0x21FB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB58u;
    // 0x21fb5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EFB8u;
    sub_0021EFB8_0x21efb8(rdram, ctx, runtime); return;
    ctx->pc = 0x21FB60u;
}
