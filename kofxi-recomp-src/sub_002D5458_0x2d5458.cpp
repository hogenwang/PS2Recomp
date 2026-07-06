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

// Function: sub_002D5458
// Address: 0x2d5458 - 0x2d5530
void sub_002D5458_0x2d5458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5458_0x2d5458");
#endif

    switch (ctx->pc) {
        case 0x2d5468u: goto label_2d5468;
        case 0x2d5478u: goto label_2d5478;
        case 0x2d5484u: goto label_2d5484;
        case 0x2d54c8u: goto label_2d54c8;
        case 0x2d54e8u: goto label_2d54e8;
        case 0x2d54f0u: goto label_2d54f0;
        case 0x2d5500u: goto label_2d5500;
        case 0x2d5518u: goto label_2d5518;
        default: break;
    }

    ctx->pc = 0x2d5458u;

label_2d5458:
    // 0x2d5458: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2d5458u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d545c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d545cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5460: 0x1493021  addu        $a2, $t2, $t1
    ctx->pc = 0x2d5460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2d5464: 0x0  nop
    ctx->pc = 0x2d5464u;
    // NOP
label_2d5468:
    // 0x2d5468: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d5468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d546c: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x2d546cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d5470: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2d5470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d5474: 0x0  nop
    ctx->pc = 0x2d5474u;
    // NOP
label_2d5478:
    // 0x2d5478: 0x1051024  and         $v0, $t0, $a1
    ctx->pc = 0x2d5478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x2d547c: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x2d547cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2d5480: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x2d5480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2d5484:
    // 0x2d5484: 0x2ca40002  sltiu       $a0, $a1, 0x2
    ctx->pc = 0x2d5484u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d5488: 0x0  nop
    ctx->pc = 0x2d5488u;
    // NOP
    // 0x2d548c: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D548Cu;
    {
        const bool branch_taken_0x2d548c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D548Cu;
        // 0x2d5490: 0x62380b  movn        $a3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d548c) {
            ctx->pc = 0x2D5478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d5478;
        }
    }
    ctx->pc = 0x2D5494u;
    // 0x2d5494: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x2d5494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x2d5498: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5498u;
    {
        const bool branch_taken_0x2d5498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5498u;
        // 0x2d549c: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5498) {
            ctx->pc = 0x2D54A8u;
            goto label_2d54a8;
        }
    }
    ctx->pc = 0x2D54A0u;
    // 0x2d54a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D54A0u;
    {
        const bool branch_taken_0x2d54a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D54A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54A0u;
        // 0x2d54a4: 0x304200fe  andi        $v0, $v0, 0xFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d54a0) {
            ctx->pc = 0x2D54ACu;
            goto label_2d54ac;
        }
    }
    ctx->pc = 0x2D54A8u;
label_2d54a8:
    // 0x2d54a8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2d54a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2d54ac:
    // 0x2d54ac: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2d54acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d54b0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2d54b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2d54b4: 0x2d220008  sltiu       $v0, $t1, 0x8
    ctx->pc = 0x2d54b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2d54b8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2D54B8u;
    {
        const bool branch_taken_0x2d54b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d54b8) {
            ctx->pc = 0x2D54BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D54B8u;
            // 0x2d54bc: 0x1493021  addu        $a2, $t2, $t1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d5468;
        }
    }
    ctx->pc = 0x2D54C0u;
    // 0x2d54c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D54C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D54C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D54C8u;
label_2d54c8:
    // 0x2d54c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d54c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d54cc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2d54ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d54d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d54d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d54d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d54d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d54d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d54d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d54dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d54dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d54e0: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2D54E0u;
    SET_GPR_U32(ctx, 31, 0x2D54E8u);
    ctx->pc = 0x2D54E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D54E0u;
    // 0x2d54e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8260u, 0x2D54E0u, 0x2D54E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D54E8u;
label_2d54e8:
    // 0x2d54e8: 0xc0b5516  jal         func_2D5458
    ctx->pc = 0x2D54E8u;
    SET_GPR_U32(ctx, 31, 0x2D54F0u);
    ctx->pc = 0x2D54ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D54E8u;
    // 0x2d54ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5458u;
    goto label_2d5458;
    ctx->pc = 0x2D54F0u;
label_2d54f0:
    // 0x2d54f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d54f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d54f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d54f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d54f8: 0xc0b60ac  jal         func_2D82B0
    ctx->pc = 0x2D54F8u;
    SET_GPR_U32(ctx, 31, 0x2D5500u);
    ctx->pc = 0x2D54FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D54F8u;
    // 0x2d54fc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D82B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82B0u, 0x2D54F8u, 0x2D5500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5500u;
label_2d5500:
    // 0x2d5500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d5500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5504: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d5504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5508: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2d5508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d550c: 0x2410021e  addiu       $s0, $zero, 0x21E
    ctx->pc = 0x2d550cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
    // 0x2d5510: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D5510u;
    SET_GPR_U32(ctx, 31, 0x2D5518u);
    ctx->pc = 0x2D5514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5510u;
    // 0x2d5514: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2D5510u, 0x2D5518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5518u;
label_2d5518:
    // 0x2d5518: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d5518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d551c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d551cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5520: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d5520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5524: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5524u;
        // 0x2d5528: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D552Cu;
    // 0x2d552c: 0x0  nop
    ctx->pc = 0x2d552cu;
    // NOP
}
