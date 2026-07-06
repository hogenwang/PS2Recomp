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

// Function: sub_00248FB0
// Address: 0x248fb0 - 0x249070
void sub_00248FB0_0x248fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248FB0_0x248fb0");
#endif

    switch (ctx->pc) {
        case 0x248fccu: goto label_248fcc;
        case 0x248fe4u: goto label_248fe4;
        case 0x248ff4u: goto label_248ff4;
        case 0x24901cu: goto label_24901c;
        case 0x249028u: goto label_249028;
        case 0x249030u: goto label_249030;
        default: break;
    }

    ctx->pc = 0x248fb0u;

    // 0x248fb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x248fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x248fb4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x248fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x248fb8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x248fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x248fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248fc0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x248fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x248fc4: 0xc08c682  jal         func_231A08
    ctx->pc = 0x248FC4u;
    SET_GPR_U32(ctx, 31, 0x248FCCu);
    ctx->pc = 0x248FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248FC4u;
    // 0x248fc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x248FC4u, 0x248FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248FCCu;
label_248fcc:
    // 0x248fcc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x248fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248fd0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x248fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x248fd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x248fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x248fd8: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x248fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x248fdc: 0xc08a254  jal         func_228950
    ctx->pc = 0x248FDCu;
    SET_GPR_U32(ctx, 31, 0x248FE4u);
    ctx->pc = 0x248FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248FDCu;
    // 0x248fe0: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x248FDCu, 0x248FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248FE4u;
label_248fe4:
    // 0x248fe4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x248fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x248fe8: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x248fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x248fec: 0xc08a254  jal         func_228950
    ctx->pc = 0x248FECu;
    SET_GPR_U32(ctx, 31, 0x248FF4u);
    ctx->pc = 0x248FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248FECu;
    // 0x248ff0: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x248FECu, 0x248FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248FF4u;
label_248ff4:
    // 0x248ff4: 0x52020017  beql        $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x248FF4u;
    {
        const bool branch_taken_0x248ff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x248ff4) {
            ctx->pc = 0x248FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248FF4u;
            // 0x248ff8: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249054u;
            goto label_249054;
        }
    }
    ctx->pc = 0x248FFCu;
    // 0x248ffc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x248ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x249000: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x249000u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x249004: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x249004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x249008: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x249008u;
    {
        const bool branch_taken_0x249008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249008) {
            ctx->pc = 0x24900Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249008u;
            // 0x24900c: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249054u;
            goto label_249054;
        }
    }
    ctx->pc = 0x249010u;
    // 0x249010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249014: 0xc092188  jal         func_248620
    ctx->pc = 0x249014u;
    SET_GPR_U32(ctx, 31, 0x24901Cu);
    ctx->pc = 0x249018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249014u;
    // 0x249018: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248620u, 0x249014u, 0x24901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24901Cu;
label_24901c:
    // 0x24901c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24901cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249020: 0xc0924ac  jal         func_2492B0
    ctx->pc = 0x249020u;
    SET_GPR_U32(ctx, 31, 0x249028u);
    ctx->pc = 0x249024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249020u;
    // 0x249024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492B0u, 0x249020u, 0x249028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249028u;
label_249028:
    // 0x249028: 0xc08b614  jal         func_22D850
    ctx->pc = 0x249028u;
    SET_GPR_U32(ctx, 31, 0x249030u);
    ctx->pc = 0x24902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249028u;
    // 0x24902c: 0xae30001c  sw          $s0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D850u, 0x249028u, 0x249030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249030u;
label_249030:
    // 0x249030: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x249030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x249034: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x249034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x249038: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x249038u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24903c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24903Cu;
    {
        const bool branch_taken_0x24903c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24903c) {
            ctx->pc = 0x249040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24903Cu;
            // 0x249040: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x249044u;
            goto label_249044;
        }
    }
    ctx->pc = 0x249044u;
label_249044:
    // 0x249044: 0x2010  mfhi        $a0
    ctx->pc = 0x249044u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x249048: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x249048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24904c: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x24904cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x249050: 0xacb00190  sw          $s0, 0x190($a1)
    ctx->pc = 0x249050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 400), GPR_U32(ctx, 16));
label_249054:
    // 0x249054: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x249054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249058: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x249058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24905c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24905cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249060: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x249060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249068: 0x808c698  j           func_231A60
    ctx->pc = 0x249068u;
    ctx->pc = 0x24906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249068u;
    // 0x24906c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    ctx->pc = 0x249070u;
}
