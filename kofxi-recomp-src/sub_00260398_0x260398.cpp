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

// Function: sub_00260398
// Address: 0x260398 - 0x260530
void sub_00260398_0x260398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260398_0x260398");
#endif

    switch (ctx->pc) {
        case 0x2603c0u: goto label_2603c0;
        case 0x2603e0u: goto label_2603e0;
        case 0x2603ecu: goto label_2603ec;
        case 0x260458u: goto label_260458;
        case 0x26047cu: goto label_26047c;
        case 0x26048cu: goto label_26048c;
        case 0x2604f0u: goto label_2604f0;
        case 0x26050cu: goto label_26050c;
        default: break;
    }

    ctx->pc = 0x260398u;

    // 0x260398: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x260398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26039c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26039cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2603a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2603a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2603a4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2603a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2603a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2603a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2603ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2603acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2603b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2603b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2603b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2603b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2603b8: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x2603B8u;
    SET_GPR_U32(ctx, 31, 0x2603C0u);
    ctx->pc = 0x2603BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2603B8u;
    // 0x2603bc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x2603B8u, 0x2603C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2603C0u;
label_2603c0:
    // 0x2603c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2603c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2603c4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2603C4u;
    {
        const bool branch_taken_0x2603c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2603C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603C4u;
        // 0x2603c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2603c4) {
            ctx->pc = 0x2603D4u;
            goto label_2603d4;
        }
    }
    ctx->pc = 0x2603CCu;
    // 0x2603cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2603CCu;
    {
        const bool branch_taken_0x2603cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2603D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603CCu;
        // 0x2603d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2603cc) {
            ctx->pc = 0x2603ECu;
            goto label_2603ec;
        }
    }
    ctx->pc = 0x2603D4u;
label_2603d4:
    // 0x2603d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2603d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2603d8: 0xc08cb82  jal         func_232E08
    ctx->pc = 0x2603D8u;
    SET_GPR_U32(ctx, 31, 0x2603E0u);
    ctx->pc = 0x2603DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2603D8u;
    // 0x2603dc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232E08u, 0x2603D8u, 0x2603E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2603E0u;
label_2603e0:
    // 0x2603e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2603e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2603e4: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x2603E4u;
    SET_GPR_U32(ctx, 31, 0x2603ECu);
    ctx->pc = 0x2603E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2603E4u;
    // 0x2603e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x2603E4u, 0x2603ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2603ECu;
label_2603ec:
    // 0x2603ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2603ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2603f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2603f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2603f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2603f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2603f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2603f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2603fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2603fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260400: 0x3e00008  jr          $ra
    ctx->pc = 0x260400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260400u;
        // 0x260404: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260408u;
    // 0x260408: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x260408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26040c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x26040cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x260410: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x260410u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x260414: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x260414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x260418: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x260418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26041c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26041cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260420: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x260420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x260424: 0x30d2ffff  andi        $s2, $a2, 0xFFFF
    ctx->pc = 0x260424u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x260428: 0x8e8217e0  lw          $v0, 0x17E0($s4)
    ctx->pc = 0x260428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6112)));
    // 0x26042c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26042cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260430: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x260430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x260434: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x260434u;
    {
        const bool branch_taken_0x260434 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x260438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260434u;
        // 0x260438: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260434) {
            ctx->pc = 0x260444u;
            goto label_260444;
        }
    }
    ctx->pc = 0x26043Cu;
    // 0x26043c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26043Cu;
    {
        const bool branch_taken_0x26043c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26043Cu;
        // 0x260440: 0x2402ffe7  addiu       $v0, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26043c) {
            ctx->pc = 0x2604A0u;
            goto label_2604a0;
        }
    }
    ctx->pc = 0x260444u;
label_260444:
    // 0x260444: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x260444u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x260448: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x260448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26044c: 0x24c671d0  addiu       $a2, $a2, 0x71D0
    ctx->pc = 0x26044cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29136));
    // 0x260450: 0xc0985b8  jal         func_2616E0
    ctx->pc = 0x260450u;
    SET_GPR_U32(ctx, 31, 0x260458u);
    ctx->pc = 0x260454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260450u;
    // 0x260454: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2616E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2616E0u, 0x260450u, 0x260458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260458u;
label_260458:
    // 0x260458: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x260458u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x26045c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26045Cu;
    {
        const bool branch_taken_0x26045c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x260460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26045Cu;
        // 0x260460: 0xae0217e4  sw          $v0, 0x17E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26045c) {
            ctx->pc = 0x26046Cu;
            goto label_26046c;
        }
    }
    ctx->pc = 0x260464u;
    // 0x260464: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x260464u;
    {
        const bool branch_taken_0x260464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260464u;
        // 0x260468: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260464) {
            ctx->pc = 0x2604A0u;
            goto label_2604a0;
        }
    }
    ctx->pc = 0x26046Cu;
label_26046c:
    // 0x26046c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26046cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260470: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x260470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260474: 0xc04485c  jal         func_112170
    ctx->pc = 0x260474u;
    SET_GPR_U32(ctx, 31, 0x26047Cu);
    ctx->pc = 0x260478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260474u;
    // 0x260478: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x260474u, 0x26047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26047Cu;
label_26047c:
    // 0x26047c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26047Cu;
    {
        const bool branch_taken_0x26047c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x260480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26047Cu;
        // 0x260480: 0xae8217e0  sw          $v0, 0x17E0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 6112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26047c) {
            ctx->pc = 0x26049Cu;
            goto label_26049c;
        }
    }
    ctx->pc = 0x260484u;
    // 0x260484: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x260484u;
    SET_GPR_U32(ctx, 31, 0x26048Cu);
    ctx->pc = 0x260488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260484u;
    // 0x260488: 0x8e0417e4  lw          $a0, 0x17E4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x260484u, 0x26048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26048Cu;
label_26048c:
    // 0x26048c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26048cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x260490: 0x2402ffeb  addiu       $v0, $zero, -0x15
    ctx->pc = 0x260490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967275));
    // 0x260494: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x260494u;
    {
        const bool branch_taken_0x260494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260494u;
        // 0x260498: 0xae0317e4  sw          $v1, 0x17E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260494) {
            ctx->pc = 0x2604A0u;
            goto label_2604a0;
        }
    }
    ctx->pc = 0x26049Cu;
label_26049c:
    // 0x26049c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26049cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2604a0:
    // 0x2604a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2604a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2604a4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2604a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2604a8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2604a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2604ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2604acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2604b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2604b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2604b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2604b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2604b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2604B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2604BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604B8u;
        // 0x2604bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2604B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2604C0u;
    // 0x2604c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2604c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2604c4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2604c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2604c8: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x2604c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x2604cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2604ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2604d0: 0x8e6417e0  lw          $a0, 0x17E0($s3)
    ctx->pc = 0x2604d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6112)));
    // 0x2604d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2604d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2604d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2604d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2604dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2604dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2604e0: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2604E0u;
    {
        const bool branch_taken_0x2604e0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2604E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604E0u;
        // 0x2604e4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2604e0) {
            ctx->pc = 0x260510u;
            goto label_260510;
        }
    }
    ctx->pc = 0x2604E8u;
    // 0x2604e8: 0xc044900  jal         func_112400
    ctx->pc = 0x2604E8u;
    SET_GPR_U32(ctx, 31, 0x2604F0u);
    ctx->pc = 0x2604ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2604E8u;
    // 0x2604ec: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112400u, 0x2604E8u, 0x2604F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2604F0u;
label_2604f0:
    // 0x2604f0: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x2604f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x2604f4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2604f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2604f8: 0x2412ffeb  addiu       $s2, $zero, -0x15
    ctx->pc = 0x2604f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967275));
    // 0x2604fc: 0x8e2417e4  lw          $a0, 0x17E4($s1)
    ctx->pc = 0x2604fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6116)));
    // 0x260500: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x260500u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x260504: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x260504u;
    SET_GPR_U32(ctx, 31, 0x26050Cu);
    ctx->pc = 0x260508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260504u;
    // 0x260508: 0xae7017e0  sw          $s0, 0x17E0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 6112), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x260504u, 0x26050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26050Cu;
label_26050c:
    // 0x26050c: 0xae3017e4  sw          $s0, 0x17E4($s1)
    ctx->pc = 0x26050cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6116), GPR_U32(ctx, 16));
label_260510:
    // 0x260510: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x260510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260514: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x260514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x260518: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x260518u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26051c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26051cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260520: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x260520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260528: 0x3e00008  jr          $ra
    ctx->pc = 0x260528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260528u;
        // 0x26052c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260530u;
}
