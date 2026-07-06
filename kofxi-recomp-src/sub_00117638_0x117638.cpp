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

// Function: sub_00117638
// Address: 0x117638 - 0x117780
void sub_00117638_0x117638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117638_0x117638");
#endif

    switch (ctx->pc) {
        case 0x117680u: goto label_117680;
        case 0x117698u: goto label_117698;
        case 0x1176b0u: goto label_1176b0;
        case 0x1176b8u: goto label_1176b8;
        case 0x1176c0u: goto label_1176c0;
        case 0x1176ccu: goto label_1176cc;
        case 0x1176d0u: goto label_1176d0;
        case 0x1176d8u: goto label_1176d8;
        case 0x1176e8u: goto label_1176e8;
        case 0x117710u: goto label_117710;
        case 0x117728u: goto label_117728;
        default: break;
    }

    ctx->pc = 0x117638u;

    // 0x117638: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11763c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11763cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x117640: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x117640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x117644: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x117644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
    // 0x117648: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11764c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11764cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117654: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x117654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117658: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x117658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x11765c: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x11765Cu;
    {
        const bool branch_taken_0x11765c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11765Cu;
        // 0x117660: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11765c) {
            ctx->pc = 0x1176F8u;
            goto label_1176f8;
        }
    }
    ctx->pc = 0x117664u;
    // 0x117664: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x117664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x117668: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x117668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11766c: 0x24509d08  addiu       $s0, $v0, -0x62F8
    ctx->pc = 0x11766cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941960));
    // 0x117670: 0x8c449d08  lw          $a0, -0x62F8($v0)
    ctx->pc = 0x117670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941960)));
    // 0x117674: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x117674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x117678: 0xc045d74  jal         func_1175D0
    ctx->pc = 0x117678u;
    SET_GPR_U32(ctx, 31, 0x117680u);
    ctx->pc = 0x11767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117678u;
    // 0x11767c: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1175D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1175D0u, 0x117678u, 0x117680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117680u;
label_117680:
    // 0x117680: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x117680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x117684: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x117684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x117688: 0x24a595a0  addiu       $a1, $a1, -0x6A60
    ctx->pc = 0x117688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940064));
    // 0x11768c: 0x34846000  ori         $a0, $a0, 0x6000
    ctx->pc = 0x11768cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24576);
    // 0x117690: 0xc045d78  jal         func_1175E0
    ctx->pc = 0x117690u;
    SET_GPR_U32(ctx, 31, 0x117698u);
    ctx->pc = 0x117694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117690u;
    // 0x117694: 0x24060740  addiu       $a2, $zero, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1175E0u, 0x117690u, 0x117698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117698u;
label_117698:
    // 0x117698: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x117698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x11769c: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x11769cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x1176a0: 0x24a59ce0  addiu       $a1, $a1, -0x6320
    ctx->pc = 0x1176a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941920));
    // 0x1176a4: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x1176a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x1176a8: 0xc045d78  jal         func_1175E0
    ctx->pc = 0x1176A8u;
    SET_GPR_U32(ctx, 31, 0x1176B0u);
    ctx->pc = 0x1176ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176A8u;
    // 0x1176ac: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1175E0u, 0x1176A8u, 0x1176B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176B0u;
label_1176b0:
    // 0x1176b0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1176B0u;
    SET_GPR_U32(ctx, 31, 0x1176B8u);
    ctx->pc = 0x1176B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176B0u;
    // 0x1176b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x1176B0u, 0x1176B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176B8u;
label_1176b8:
    // 0x1176b8: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1176B8u;
    SET_GPR_U32(ctx, 31, 0x1176C0u);
    ctx->pc = 0x1176BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176B8u;
    // 0x1176bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x1176B8u, 0x1176C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176C0u;
label_1176c0:
    // 0x1176c0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1176c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1176c4: 0xc045d74  jal         func_1175D0
    ctx->pc = 0x1176C4u;
    SET_GPR_U32(ctx, 31, 0x1176CCu);
    ctx->pc = 0x1176C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176C4u;
    // 0x1176c8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1175D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1175D0u, 0x1176C4u, 0x1176CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176CCu;
label_1176cc:
    // 0x1176cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1176ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1176d0:
    // 0x1176d0: 0xc045d8a  jal         func_117628
    ctx->pc = 0x1176D0u;
    SET_GPR_U32(ctx, 31, 0x1176D8u);
    ctx->pc = 0x1176D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176D0u;
    // 0x1176d4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117628u, 0x1176D0u, 0x1176D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176D8u;
label_1176d8:
    // 0x1176d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1176d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1176dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1176dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1176e0: 0xc045d74  jal         func_1175D0
    ctx->pc = 0x1176E0u;
    SET_GPR_U32(ctx, 31, 0x1176E8u);
    ctx->pc = 0x1176E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176E0u;
    // 0x1176e4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1175D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1175D0u, 0x1176E0u, 0x1176E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176E8u;
label_1176e8:
    // 0x1176e8: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1176e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1176ec: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1176ECu;
    {
        const bool branch_taken_0x1176ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1176ec) {
            ctx->pc = 0x1176F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1176ECu;
            // 0x1176f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1176D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1176d0;
        }
    }
    ctx->pc = 0x1176F4u;
    // 0x1176f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1176f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1176f8:
    // 0x1176f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1176f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1176fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1176fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117704: 0x3e00008  jr          $ra
    ctx->pc = 0x117704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117704u;
        // 0x117708: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11770Cu;
    // 0x11770c: 0x0  nop
    ctx->pc = 0x11770cu;
    // NOP
label_117710:
    // 0x117710: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x117710u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x117714: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x117714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x117718: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x117718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11771c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x11771Cu;
    {
        const bool branch_taken_0x11771c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x117720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11771Cu;
        // 0x117720: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11771c) {
            ctx->pc = 0x11774Cu;
            goto label_11774c;
        }
    }
    ctx->pc = 0x117724u;
    // 0x117724: 0x0  nop
    ctx->pc = 0x117724u;
    // NOP
label_117728:
    // 0x117728: 0x42000039  di
    ctx->pc = 0x117728u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x11772c: 0x40f  sync.p
    ctx->pc = 0x11772cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x117730: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x117730u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x117734: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x117734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x117738: 0x0  nop
    ctx->pc = 0x117738u;
    // NOP
    // 0x11773c: 0x0  nop
    ctx->pc = 0x11773cu;
    // NOP
    // 0x117740: 0x0  nop
    ctx->pc = 0x117740u;
    // NOP
    // 0x117744: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x117744u;
    {
        const bool branch_taken_0x117744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117744) {
            ctx->pc = 0x117728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_117728;
        }
    }
    ctx->pc = 0x11774Cu;
label_11774c:
    // 0x11774c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x11774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x117750: 0x40f  sync.p
    ctx->pc = 0x117750u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x117754: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x117754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x117758: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x117758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x11775c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11775cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x117760: 0x40826000  mtc0        $v0, Status
    ctx->pc = 0x117760u;
    ctx->cop0_status = GPR_U32(ctx, 2) & 0xFF57FFFF;
    // 0x117764: 0x40f  sync.p
    ctx->pc = 0x117764u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x117768: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x117768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x11776c: 0x409ff000  mtc0        $ra, ErrorEPC
    ctx->pc = 0x11776cu;
    ctx->cop0_errorepc = GPR_U32(ctx, 31);
    // 0x117770: 0x40f  sync.p
    ctx->pc = 0x117770u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x117774: 0x42000018  eret
    ctx->pc = 0x117774u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
    // 0x117778: 0x3e00008  jr          $ra
    ctx->pc = 0x117778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117780u;
}
