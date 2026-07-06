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

// Function: sub_002473F8
// Address: 0x2473f8 - 0x2475f0
void sub_002473F8_0x2473f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002473F8_0x2473f8");
#endif

    switch (ctx->pc) {
        case 0x247448u: goto label_247448;
        case 0x247478u: goto label_247478;
        case 0x247480u: goto label_247480;
        case 0x2474e0u: goto label_2474e0;
        case 0x2474f0u: goto label_2474f0;
        case 0x247500u: goto label_247500;
        case 0x247510u: goto label_247510;
        case 0x247598u: goto label_247598;
        default: break;
    }

    ctx->pc = 0x2473f8u;

    // 0x2473f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2473f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2473fc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2473fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x247400: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x247400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x247404: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x247404u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247408: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x247408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24740c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x24740cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247410: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x247410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x247414: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x247414u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24741c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x24741cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247420: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x247420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x247424: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x247424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247428: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247428u;
    {
        const bool branch_taken_0x247428 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247428u;
        // 0x24742c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247428) {
            ctx->pc = 0x247438u;
            goto label_247438;
        }
    }
    ctx->pc = 0x247430u;
    // 0x247430: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x247430u;
    {
        const bool branch_taken_0x247430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247430u;
        // 0x247434: 0x8e110054  lw          $s1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247430) {
            ctx->pc = 0x247458u;
            goto label_247458;
        }
    }
    ctx->pc = 0x247438u;
label_247438:
    // 0x247438: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x247438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x24743c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24743cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247440: 0xc091fcc  jal         func_247F30
    ctx->pc = 0x247440u;
    SET_GPR_U32(ctx, 31, 0x247448u);
    ctx->pc = 0x247444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247440u;
    // 0x247444: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247F30u, 0x247440u, 0x247448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247448u;
label_247448:
    // 0x247448: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x247448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24744c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24744Cu;
    {
        const bool branch_taken_0x24744c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x247450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24744Cu;
        // 0x247450: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24744c) {
            ctx->pc = 0x24746Cu;
            goto label_24746c;
        }
    }
    ctx->pc = 0x247454u;
    // 0x247454: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x247454u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_247458:
    // 0x247458: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x247458u;
    {
        const bool branch_taken_0x247458 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247458u;
        // 0x24745c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247458) {
            ctx->pc = 0x24746Cu;
            goto label_24746c;
        }
    }
    ctx->pc = 0x247460u;
    // 0x247460: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x247460u;
    {
        const bool branch_taken_0x247460 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x247460) {
            ctx->pc = 0x247464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247460u;
            // 0x247464: 0xde030070  ld          $v1, 0x70($s0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247488u;
            goto label_247488;
        }
    }
    ctx->pc = 0x247468u;
    // 0x247468: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x247468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_24746c:
    // 0x24746c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x24746cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x247470: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x247470u;
    SET_GPR_U32(ctx, 31, 0x247478u);
    ctx->pc = 0x247474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247470u;
    // 0x247474: 0x24a56870  addiu       $a1, $a1, 0x6870 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x247470u, 0x247478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247478u;
label_247478:
    // 0x247478: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x247478u;
    SET_GPR_U32(ctx, 31, 0x247480u);
    ctx->pc = 0x24747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247478u;
    // 0x24747c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x247478u, 0x247480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247480u;
label_247480:
    // 0x247480: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x247480u;
    {
        const bool branch_taken_0x247480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247480u;
        // 0x247484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247480) {
            ctx->pc = 0x2475C8u;
            goto label_2475c8;
        }
    }
    ctx->pc = 0x247488u;
label_247488:
    // 0x247488: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x247488u;
    {
        const bool branch_taken_0x247488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247488u;
        // 0x24748c: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247488) {
            ctx->pc = 0x2474A4u;
            goto label_2474a4;
        }
    }
    ctx->pc = 0x247490u;
    // 0x247490: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x247490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x247494: 0xdca217c0  ld          $v0, 0x17C0($a1)
    ctx->pc = 0x247494u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 6080)));
    // 0x247498: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x247498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x24749c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24749Cu;
    {
        const bool branch_taken_0x24749c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24749c) {
            ctx->pc = 0x2474E8u;
            goto label_2474e8;
        }
    }
    ctx->pc = 0x2474A4u;
label_2474a4:
    // 0x2474a4: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x2474a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x2474a8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2474a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2474ac: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2474ACu;
    {
        const bool branch_taken_0x2474ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2474ac) {
            ctx->pc = 0x2474E8u;
            goto label_2474e8;
        }
    }
    ctx->pc = 0x2474B4u;
    // 0x2474b4: 0x90e20006  lbu         $v0, 0x6($a3)
    ctx->pc = 0x2474b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2474b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2474B8u;
    {
        const bool branch_taken_0x2474b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2474BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474B8u;
        // 0x2474bc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2474b8) {
            ctx->pc = 0x2474E8u;
            goto label_2474e8;
        }
    }
    ctx->pc = 0x2474C0u;
    // 0x2474c0: 0x92630039  lbu         $v1, 0x39($s3)
    ctx->pc = 0x2474c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 57)));
    // 0x2474c4: 0x90e40005  lbu         $a0, 0x5($a3)
    ctx->pc = 0x2474c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2474c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2474c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2474cc: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x2474ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2474d0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2474d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2474d4: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x2474d4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2474d8: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x2474D8u;
    SET_GPR_U32(ctx, 31, 0x2474E0u);
    ctx->pc = 0x2474DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2474D8u;
    // 0x2474dc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x2474D8u, 0x2474E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474E0u;
label_2474e0:
    // 0x2474e0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2474E0u;
    {
        const bool branch_taken_0x2474e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2474E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474E0u;
        // 0x2474e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2474e0) {
            ctx->pc = 0x2475C8u;
            goto label_2475c8;
        }
    }
    ctx->pc = 0x2474E8u;
label_2474e8:
    // 0x2474e8: 0xc08c682  jal         func_231A08
    ctx->pc = 0x2474E8u;
    SET_GPR_U32(ctx, 31, 0x2474F0u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x2474E8u, 0x2474F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474F0u;
label_2474f0:
    // 0x2474f0: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x2474f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2474f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2474f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2474f8: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2474F8u;
    SET_GPR_U32(ctx, 31, 0x247500u);
    ctx->pc = 0x2474FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2474F8u;
    // 0x2474fc: 0xae34000c  sw          $s4, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2474F8u, 0x247500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247500u;
label_247500:
    // 0x247500: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x247500u;
    {
        const bool branch_taken_0x247500 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x247500) {
            ctx->pc = 0x247504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247500u;
            // 0x247504: 0xde040070  ld          $a0, 0x70($s0) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247514u;
            goto label_247514;
        }
    }
    ctx->pc = 0x247508u;
    // 0x247508: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x247508u;
    SET_GPR_U32(ctx, 31, 0x247510u);
    ctx->pc = 0x24750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247508u;
    // 0x24750c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x247508u, 0x247510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247510u;
label_247510:
    // 0x247510: 0xde040070  ld          $a0, 0x70($s0)
    ctx->pc = 0x247510u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 112)));
label_247514:
    // 0x247514: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x247514u;
    {
        const bool branch_taken_0x247514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x247518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247514u;
        // 0x247518: 0x2403fff7  addiu       $v1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247514) {
            ctx->pc = 0x2475C4u;
            goto label_2475c4;
        }
    }
    ctx->pc = 0x24751Cu;
    // 0x24751c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x24751cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x247520: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x247520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x247524: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x247524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x247528: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x247528u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x24752c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24752Cu;
    {
        const bool branch_taken_0x24752c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x247530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24752Cu;
        // 0x247530: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24752c) {
            ctx->pc = 0x247548u;
            goto label_247548;
        }
    }
    ctx->pc = 0x247534u;
    // 0x247534: 0xdca217c0  ld          $v0, 0x17C0($a1)
    ctx->pc = 0x247534u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 6080)));
    // 0x247538: 0x10820022  beq         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x247538u;
    {
        const bool branch_taken_0x247538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247538u;
        // 0x24753c: 0xdca317c0  ld          $v1, 0x17C0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 6080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247538) {
            ctx->pc = 0x2475C4u;
            goto label_2475c4;
        }
    }
    ctx->pc = 0x247540u;
    // 0x247540: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x247540u;
    {
        const bool branch_taken_0x247540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247540u;
        // 0x247544: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247540) {
            ctx->pc = 0x247550u;
            goto label_247550;
        }
    }
    ctx->pc = 0x247548u;
label_247548:
    // 0x247548: 0xdca317c0  ld          $v1, 0x17C0($a1)
    ctx->pc = 0x247548u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 6080)));
    // 0x24754c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24754cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_247550:
    // 0x247550: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x247550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x247554: 0xfe030070  sd          $v1, 0x70($s0)
    ctx->pc = 0x247554u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 3));
    // 0x247558: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x247558u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x24755c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24755cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247560: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x247560u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x247564: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x247564u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x247568: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x247568u;
    {
        const bool branch_taken_0x247568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247568u;
        // 0x24756c: 0xfe220010  sd          $v0, 0x10($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247568) {
            ctx->pc = 0x2475A0u;
            goto label_2475a0;
        }
    }
    ctx->pc = 0x247570u;
    // 0x247570: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x247570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x247574: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x247574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247578: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x247578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x24757c: 0x26a60004  addiu       $a2, $s5, 0x4
    ctx->pc = 0x24757cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x247580: 0x90670005  lbu         $a3, 0x5($v1)
    ctx->pc = 0x247580u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x247584: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x247584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247588: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x247588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x24758c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x24758cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x247590: 0xc091ca6  jal         func_247298
    ctx->pc = 0x247590u;
    SET_GPR_U32(ctx, 31, 0x247598u);
    ctx->pc = 0x247594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247590u;
    // 0x247594: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247298u, 0x247590u, 0x247598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247598u;
label_247598:
    // 0x247598: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x247598u;
    {
        const bool branch_taken_0x247598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247598u;
        // 0x24759c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247598) {
            ctx->pc = 0x2475C8u;
            goto label_2475c8;
        }
    }
    ctx->pc = 0x2475A0u;
label_2475a0:
    // 0x2475a0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2475a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2475a4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2475a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2475a8: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x2475a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2475ac: 0xde030070  ld          $v1, 0x70($s0)
    ctx->pc = 0x2475acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2475b0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2475b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2475b4: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2475b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x2475b8: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x2475b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x2475bc: 0xfe030070  sd          $v1, 0x70($s0)
    ctx->pc = 0x2475bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 3));
    // 0x2475c0: 0xfe200010  sd          $zero, 0x10($s1)
    ctx->pc = 0x2475c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 0));
label_2475c4:
    // 0x2475c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2475c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2475c8:
    // 0x2475c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2475c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2475cc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2475ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2475d0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2475d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2475d4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2475d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2475d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2475d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2475dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2475dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2475e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2475e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2475e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2475E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2475E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475E4u;
        // 0x2475e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2475E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2475ECu;
    // 0x2475ec: 0x0  nop
    ctx->pc = 0x2475ecu;
    // NOP
    if (ctx->pc == 0x2475ecu) { ctx->pc = 0x2475f0u; }
}
