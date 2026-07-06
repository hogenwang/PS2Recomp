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

// Function: sub_001B3568
// Address: 0x1b3568 - 0x1b3638
void sub_001B3568_0x1b3568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3568_0x1b3568");
#endif

    switch (ctx->pc) {
        case 0x1b35c4u: goto label_1b35c4;
        case 0x1b35ecu: goto label_1b35ec;
        case 0x1b3600u: goto label_1b3600;
        case 0x1b3610u: goto label_1b3610;
        case 0x1b361cu: goto label_1b361c;
        default: break;
    }

    ctx->pc = 0x1b3568u;

    // 0x1b3568: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1b3568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1b356c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b356cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b3570: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1b3570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3574: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b3574u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3578: 0x24423008  addiu       $v0, $v0, 0x3008
    ctx->pc = 0x1b3578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12296));
    // 0x1b357c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1b357cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1b3580: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b3580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b3584: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1b3584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3588: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b3588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b358c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B358Cu;
    {
        const bool branch_taken_0x1b358c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B358Cu;
        // 0x1b3590: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b358c) {
            ctx->pc = 0x1B35B0u;
            goto label_1b35b0;
        }
    }
    ctx->pc = 0x1B3594u;
    // 0x1b3594: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b3594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b3598: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x1b3598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1b359c: 0x24428920  addiu       $v0, $v0, -0x76E0
    ctx->pc = 0x1b359cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936864));
    // 0x1b35a0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1b35a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x1b35a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B35A4u;
    {
        const bool branch_taken_0x1b35a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B35A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B35A4u;
        // 0x1b35a8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b35a4) {
            ctx->pc = 0x1B35C4u;
            goto label_1b35c4;
        }
    }
    ctx->pc = 0x1B35ACu;
    // 0x1b35ac: 0x0  nop
    ctx->pc = 0x1b35acu;
    // NOP
label_1b35b0:
    // 0x1b35b0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b35b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b35b4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1b35b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1b35b8: 0x24847e60  addiu       $a0, $a0, 0x7E60
    ctx->pc = 0x1b35b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32352));
    // 0x1b35bc: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1B35BCu;
    SET_GPR_U32(ctx, 31, 0x1B35C4u);
    ctx->pc = 0x1B35C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B35BCu;
    // 0x1b35c0: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1B35BCu, 0x1B35C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B35C4u;
label_1b35c4:
    // 0x1b35c4: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1b35c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1b35c8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b35cc: 0x8ca3a928  lw          $v1, -0x56D8($a1)
    ctx->pc = 0x1b35ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294945064)));
    // 0x1b35d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b35d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35d4: 0x2442d6f0  addiu       $v0, $v0, -0x2910
    ctx->pc = 0x1b35d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956784));
    // 0x1b35d8: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b35d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b35dc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1b35dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1b35e0: 0x261030a0  addiu       $s0, $s0, 0x30A0
    ctx->pc = 0x1b35e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12448));
    // 0x1b35e4: 0xc043298  jal         func_10CA60
    ctx->pc = 0x1B35E4u;
    SET_GPR_U32(ctx, 31, 0x1B35ECu);
    ctx->pc = 0x1B35E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B35E4u;
    // 0x1b35e8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA60u, 0x1B35E4u, 0x1B35ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B35ECu;
label_1b35ec:
    // 0x1b35ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b35ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b35f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b35f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b35f8: 0xc043768  jal         func_10DDA0
    ctx->pc = 0x1B35F8u;
    SET_GPR_U32(ctx, 31, 0x1B3600u);
    ctx->pc = 0x1B35FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B35F8u;
    // 0x1b35fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDA0u, 0x1B35F8u, 0x1B3600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3600u;
label_1b3600:
    // 0x1b3600: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b3600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3604: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b3604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b3608: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B3608u;
    SET_GPR_U32(ctx, 31, 0x1B3610u);
    ctx->pc = 0x1B360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3608u;
    // 0x1b360c: 0x8c45301c  lw          $a1, 0x301C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x1B3608u, 0x1B3610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3610u;
label_1b3610:
    // 0x1b3610: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b3610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3614: 0xc06cc80  jal         func_1B3200
    ctx->pc = 0x1B3614u;
    SET_GPR_U32(ctx, 31, 0x1B361Cu);
    ctx->pc = 0x1B3200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3200u, 0x1B3614u, 0x1B361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B361Cu;
label_1b361c:
    // 0x1b361c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b361cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b3620: 0x2463309c  addiu       $v1, $v1, 0x309C
    ctx->pc = 0x1b3620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12444));
    // 0x1b3624: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1b3624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3628: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b3628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b362c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b362cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b3630: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3630u;
        // 0x1b3634: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3638u;
}
