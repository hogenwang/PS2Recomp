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

// Function: sub_00209870
// Address: 0x209870 - 0x2099d0
void sub_00209870_0x209870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209870_0x209870");
#endif

    switch (ctx->pc) {
        case 0x209888u: goto label_209888;
        case 0x2098bcu: goto label_2098bc;
        case 0x2098ecu: goto label_2098ec;
        case 0x209920u: goto label_209920;
        case 0x209960u: goto label_209960;
        case 0x209978u: goto label_209978;
        case 0x20998cu: goto label_20998c;
        case 0x209994u: goto label_209994;
        case 0x2099a4u: goto label_2099a4;
        case 0x2099bcu: goto label_2099bc;
        default: break;
    }

    ctx->pc = 0x209870u;

label_209870:
    // 0x209870: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x209870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x209874: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x209874u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x209878: 0x90639c20  lbu         $v1, -0x63E0($v1)
    ctx->pc = 0x209878u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294941728)));
    // 0x20987c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x20987cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x209880: 0x10660009  beq         $v1, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x209880u;
    {
        const bool branch_taken_0x209880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x209884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209880u;
        // 0x209884: 0x24e79c20  addiu       $a3, $a3, -0x63E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209880) {
            ctx->pc = 0x2098A8u;
            goto label_2098a8;
        }
    }
    ctx->pc = 0x209888u;
label_209888:
    // 0x209888: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x209888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x20988c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x20988cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x209890: 0x0  nop
    ctx->pc = 0x209890u;
    // NOP
    // 0x209894: 0x0  nop
    ctx->pc = 0x209894u;
    // NOP
    // 0x209898: 0x0  nop
    ctx->pc = 0x209898u;
    // NOP
    // 0x20989c: 0x1466fffa  bne         $v1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20989Cu;
    {
        const bool branch_taken_0x20989c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x20989c) {
            ctx->pc = 0x209888u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_209888;
        }
    }
    ctx->pc = 0x2098A4u;
    // 0x2098a4: 0x0  nop
    ctx->pc = 0x2098a4u;
    // NOP
label_2098a8:
    // 0x2098a8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2098a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2098ac: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x2098acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2098b0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2098b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2098b4: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2098B4u;
    {
        const bool branch_taken_0x2098b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x2098b4) {
            ctx->pc = 0x2098D8u;
            goto label_2098d8;
        }
    }
    ctx->pc = 0x2098BCu;
label_2098bc:
    // 0x2098bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2098bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2098c0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x2098c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2098c4: 0x0  nop
    ctx->pc = 0x2098c4u;
    // NOP
    // 0x2098c8: 0x0  nop
    ctx->pc = 0x2098c8u;
    // NOP
    // 0x2098cc: 0x0  nop
    ctx->pc = 0x2098ccu;
    // NOP
    // 0x2098d0: 0x1466fffa  bne         $v1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2098D0u;
    {
        const bool branch_taken_0x2098d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2098d0) {
            ctx->pc = 0x2098BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2098bc;
        }
    }
    ctx->pc = 0x2098D8u;
label_2098d8:
    // 0x2098d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2098d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2098dc: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x2098dcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2098e0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2098e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2098e4: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2098E4u;
    {
        const bool branch_taken_0x2098e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2098e4) {
            ctx->pc = 0x209908u;
            goto label_209908;
        }
    }
    ctx->pc = 0x2098ECu;
label_2098ec:
    // 0x2098ec: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x2098ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2098f0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2098f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2098f4: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x2098f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2098f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2098f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2098fc: 0x0  nop
    ctx->pc = 0x2098fcu;
    // NOP
    // 0x209900: 0x14c3fffa  bne         $a2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x209900u;
    {
        const bool branch_taken_0x209900 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x209900) {
            ctx->pc = 0x2098ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2098ec;
        }
    }
    ctx->pc = 0x209908u;
label_209908:
    // 0x209908: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x209908u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x20990c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x20990cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x209910: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x209910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x209914: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x209914u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x209918: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x209918u;
    {
        const bool branch_taken_0x209918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x209918) {
            ctx->pc = 0x209940u;
            goto label_209940;
        }
    }
    ctx->pc = 0x209920u;
label_209920:
    // 0x209920: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x209920u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x209924: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x209924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x209928: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x209928u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20992c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20992cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x209930: 0x0  nop
    ctx->pc = 0x209930u;
    // NOP
    // 0x209934: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x209934u;
    {
        const bool branch_taken_0x209934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x209934) {
            ctx->pc = 0x209920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_209920;
        }
    }
    ctx->pc = 0x20993Cu;
    // 0x20993c: 0x0  nop
    ctx->pc = 0x20993cu;
    // NOP
label_209940:
    // 0x209940: 0x3e00008  jr          $ra
    ctx->pc = 0x209940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209940u;
        // 0x209944: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209948u;
    // 0x209948: 0x0  nop
    ctx->pc = 0x209948u;
    // NOP
    // 0x20994c: 0x0  nop
    ctx->pc = 0x20994cu;
    // NOP
    // 0x209950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209958: 0xc0897be  jal         func_225EF8
    ctx->pc = 0x209958u;
    SET_GPR_U32(ctx, 31, 0x209960u);
    ctx->pc = 0x20995Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209958u;
    // 0x20995c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225EF8u, 0x209958u, 0x209960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209960u;
label_209960:
    // 0x209960: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x209960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209964: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x209964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x209968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x209968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20996c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20996cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209970: 0xc087b0e  jal         func_21EC38
    ctx->pc = 0x209970u;
    SET_GPR_U32(ctx, 31, 0x209978u);
    ctx->pc = 0x209974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209970u;
    // 0x209974: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x209970u, 0x209978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209978u;
label_209978:
    // 0x209978: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x209978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20997c: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x20997cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x209980: 0x24849c10  addiu       $a0, $a0, -0x63F0
    ctx->pc = 0x209980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941712));
    // 0x209984: 0xc08261c  jal         func_209870
    ctx->pc = 0x209984u;
    SET_GPR_U32(ctx, 31, 0x20998Cu);
    ctx->pc = 0x209988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209984u;
    // 0x209988: 0x24a59c00  addiu       $a1, $a1, -0x6400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209870u;
    goto label_209870;
    ctx->pc = 0x20998Cu;
label_20998c:
    // 0x20998c: 0xc0691f0  jal         func_1A47C0
    ctx->pc = 0x20998Cu;
    SET_GPR_U32(ctx, 31, 0x209994u);
    ctx->pc = 0x209990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20998Cu;
    // 0x209990: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A47C0u, 0x20998Cu, 0x209994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209994u;
label_209994:
    // 0x209994: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x209994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x209998: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20999c: 0xc082678  jal         func_2099E0
    ctx->pc = 0x20999Cu;
    SET_GPR_U32(ctx, 31, 0x2099A4u);
    ctx->pc = 0x2099A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20999Cu;
    // 0x2099a0: 0x24849830  addiu       $a0, $a0, -0x67D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x20999Cu, 0x2099A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2099A4u;
label_2099a4:
    // 0x2099a4: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x2099a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x2099a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2099a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2099ac: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2099acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2099b0: 0x24849a40  addiu       $a0, $a0, -0x65C0
    ctx->pc = 0x2099b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941248));
    // 0x2099b4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2099B4u;
    SET_GPR_U32(ctx, 31, 0x2099BCu);
    ctx->pc = 0x2099B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2099B4u;
    // 0x2099b8: 0xa443be90  sh          $v1, -0x4170($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2099B4u, 0x2099BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2099BCu;
label_2099bc:
    // 0x2099bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2099bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2099c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2099C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2099C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099C0u;
        // 0x2099c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2099C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2099C8u;
    // 0x2099c8: 0x0  nop
    ctx->pc = 0x2099c8u;
    // NOP
    // 0x2099cc: 0x0  nop
    ctx->pc = 0x2099ccu;
    // NOP
    if (ctx->pc == 0x2099ccu) { ctx->pc = 0x2099d0u; }
}
