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

// Function: sub_0032D3D0
// Address: 0x32d3d0 - 0x32dc80
void sub_0032D3D0_0x32d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D3D0_0x32d3d0");
#endif

    switch (ctx->pc) {
        case 0x32d3e0u: goto label_32d3e0;
        case 0x32d508u: goto label_32d508;
        case 0x32d554u: goto label_32d554;
        case 0x32d57cu: goto label_32d57c;
        case 0x32d59cu: goto label_32d59c;
        case 0x32d5a4u: goto label_32d5a4;
        case 0x32d5c4u: goto label_32d5c4;
        case 0x32d5ecu: goto label_32d5ec;
        case 0x32d60cu: goto label_32d60c;
        case 0x32d628u: goto label_32d628;
        case 0x32d644u: goto label_32d644;
        case 0x32d690u: goto label_32d690;
        case 0x32d6b8u: goto label_32d6b8;
        case 0x32d6d8u: goto label_32d6d8;
        case 0x32d6e0u: goto label_32d6e0;
        case 0x32d700u: goto label_32d700;
        case 0x32d728u: goto label_32d728;
        case 0x32d748u: goto label_32d748;
        case 0x32d764u: goto label_32d764;
        case 0x32d780u: goto label_32d780;
        case 0x32d7ccu: goto label_32d7cc;
        case 0x32d7f4u: goto label_32d7f4;
        case 0x32d814u: goto label_32d814;
        case 0x32d81cu: goto label_32d81c;
        case 0x32d83cu: goto label_32d83c;
        case 0x32d864u: goto label_32d864;
        case 0x32d884u: goto label_32d884;
        case 0x32d8a0u: goto label_32d8a0;
        case 0x32d8bcu: goto label_32d8bc;
        case 0x32d908u: goto label_32d908;
        case 0x32d930u: goto label_32d930;
        case 0x32d950u: goto label_32d950;
        case 0x32d958u: goto label_32d958;
        case 0x32d978u: goto label_32d978;
        case 0x32d9a0u: goto label_32d9a0;
        case 0x32d9c0u: goto label_32d9c0;
        case 0x32d9dcu: goto label_32d9dc;
        case 0x32d9f8u: goto label_32d9f8;
        case 0x32da44u: goto label_32da44;
        case 0x32da6cu: goto label_32da6c;
        case 0x32da8cu: goto label_32da8c;
        case 0x32da94u: goto label_32da94;
        case 0x32dab4u: goto label_32dab4;
        case 0x32dadcu: goto label_32dadc;
        case 0x32dafcu: goto label_32dafc;
        case 0x32db18u: goto label_32db18;
        case 0x32db34u: goto label_32db34;
        case 0x32db80u: goto label_32db80;
        case 0x32dba8u: goto label_32dba8;
        case 0x32dbc8u: goto label_32dbc8;
        case 0x32dbd0u: goto label_32dbd0;
        case 0x32dbf0u: goto label_32dbf0;
        case 0x32dc18u: goto label_32dc18;
        case 0x32dc38u: goto label_32dc38;
        case 0x32dc54u: goto label_32dc54;
        default: break;
    }

    ctx->pc = 0x32d3d0u;

label_32d3d0:
    // 0x32d3d0: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x32d3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x32d3d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32d3d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3d8: 0x24a59700  addiu       $a1, $a1, -0x6900
    ctx->pc = 0x32d3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940416));
    // 0x32d3dc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x32d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_32d3e0:
    // 0x32d3e0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x32d3e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32d3e4: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D3E4u;
    {
        const bool branch_taken_0x32d3e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x32d3e4) {
            ctx->pc = 0x32D3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D3E4u;
            // 0x32d3e8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D3F4u;
            goto label_32d3f4;
        }
    }
    ctx->pc = 0x32D3ECu;
    // 0x32d3ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32D3ECu;
    {
        const bool branch_taken_0x32d3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d3ec) {
            ctx->pc = 0x32D404u;
            goto label_32d404;
        }
    }
    ctx->pc = 0x32D3F4u;
label_32d3f4:
    // 0x32d3f4: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x32d3f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x32d3f8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x32D3F8u;
    {
        const bool branch_taken_0x32d3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D3F8u;
        // 0x32d3fc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d3f8) {
            ctx->pc = 0x32D3E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32d3e0;
        }
    }
    ctx->pc = 0x32D400u;
    // 0x32d400: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32d400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32d404:
    // 0x32d404: 0x3e00008  jr          $ra
    ctx->pc = 0x32D404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D40Cu;
    // 0x32d40c: 0x0  nop
    ctx->pc = 0x32d40cu;
    // NOP
    // 0x32d410: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x32d410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x32d414: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d418: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32d418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32d41c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32d41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32d420: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32d420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32d424: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32d424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32d428: 0x9064f360  lbu         $a0, -0xCA0($v1)
    ctx->pc = 0x32d428u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964064)));
    // 0x32d42c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x32d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32d430: 0x5083020c  beql        $a0, $v1, . + 4 + (0x20C << 2)
    ctx->pc = 0x32D430u;
    {
        const bool branch_taken_0x32d430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d430) {
            ctx->pc = 0x32D434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D430u;
            // 0x32d434: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DC64u;
            goto label_32dc64;
        }
    }
    ctx->pc = 0x32D438u;
    // 0x32d438: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x32d438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x32d43c: 0x50830206  beql        $a0, $v1, . + 4 + (0x206 << 2)
    ctx->pc = 0x32D43Cu;
    {
        const bool branch_taken_0x32d43c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d43c) {
            ctx->pc = 0x32D440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D43Cu;
            // 0x32d440: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DC58u;
            goto label_32dc58;
        }
    }
    ctx->pc = 0x32D444u;
    // 0x32d444: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x32d444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x32d448: 0x508301f9  beql        $a0, $v1, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x32D448u;
    {
        const bool branch_taken_0x32d448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d448) {
            ctx->pc = 0x32D44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D448u;
            // 0x32d44c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DC30u;
            goto label_32dc30;
        }
    }
    ctx->pc = 0x32D450u;
    // 0x32d450: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x32d450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x32d454: 0x108301b5  beq         $a0, $v1, . + 4 + (0x1B5 << 2)
    ctx->pc = 0x32D454u;
    {
        const bool branch_taken_0x32d454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d454) {
            ctx->pc = 0x32DB2Cu;
            goto label_32db2c;
        }
    }
    ctx->pc = 0x32D45Cu;
    // 0x32d45c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x32d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x32d460: 0x508301a4  beql        $a0, $v1, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x32D460u;
    {
        const bool branch_taken_0x32d460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d460) {
            ctx->pc = 0x32D464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D460u;
            // 0x32d464: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DAF4u;
            goto label_32daf4;
        }
    }
    ctx->pc = 0x32D468u;
    // 0x32d468: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x32d468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x32d46c: 0x10830160  beq         $a0, $v1, . + 4 + (0x160 << 2)
    ctx->pc = 0x32D46Cu;
    {
        const bool branch_taken_0x32d46c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d46c) {
            ctx->pc = 0x32D9F0u;
            goto label_32d9f0;
        }
    }
    ctx->pc = 0x32D474u;
    // 0x32d474: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x32d474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32d478: 0x5083014f  beql        $a0, $v1, . + 4 + (0x14F << 2)
    ctx->pc = 0x32D478u;
    {
        const bool branch_taken_0x32d478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d478) {
            ctx->pc = 0x32D47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D478u;
            // 0x32d47c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D9B8u;
            goto label_32d9b8;
        }
    }
    ctx->pc = 0x32D480u;
    // 0x32d480: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x32d480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x32d484: 0x1083010b  beq         $a0, $v1, . + 4 + (0x10B << 2)
    ctx->pc = 0x32D484u;
    {
        const bool branch_taken_0x32d484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d484) {
            ctx->pc = 0x32D8B4u;
            goto label_32d8b4;
        }
    }
    ctx->pc = 0x32D48Cu;
    // 0x32d48c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x32d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32d490: 0x508300fa  beql        $a0, $v1, . + 4 + (0xFA << 2)
    ctx->pc = 0x32D490u;
    {
        const bool branch_taken_0x32d490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d490) {
            ctx->pc = 0x32D494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D490u;
            // 0x32d494: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D87Cu;
            goto label_32d87c;
        }
    }
    ctx->pc = 0x32D498u;
    // 0x32d498: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x32d498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32d49c: 0x108300b6  beq         $a0, $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x32D49Cu;
    {
        const bool branch_taken_0x32d49c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d49c) {
            ctx->pc = 0x32D778u;
            goto label_32d778;
        }
    }
    ctx->pc = 0x32D4A4u;
    // 0x32d4a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32d4a8: 0x508300a5  beql        $a0, $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x32D4A8u;
    {
        const bool branch_taken_0x32d4a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d4a8) {
            ctx->pc = 0x32D4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D4A8u;
            // 0x32d4ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D740u;
            goto label_32d740;
        }
    }
    ctx->pc = 0x32D4B0u;
    // 0x32d4b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32d4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32d4b4: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x32D4B4u;
    {
        const bool branch_taken_0x32d4b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d4b4) {
            ctx->pc = 0x32D63Cu;
            goto label_32d63c;
        }
    }
    ctx->pc = 0x32D4BCu;
    // 0x32d4bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32d4c0: 0x50830050  beql        $a0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x32D4C0u;
    {
        const bool branch_taken_0x32d4c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d4c0) {
            ctx->pc = 0x32D4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D4C0u;
            // 0x32d4c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D604u;
            goto label_32d604;
        }
    }
    ctx->pc = 0x32D4C8u;
    // 0x32d4c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d4cc: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x32D4CCu;
    {
        const bool branch_taken_0x32d4cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d4cc) {
            ctx->pc = 0x32D500u;
            goto label_32d500;
        }
    }
    ctx->pc = 0x32D4D4u;
    // 0x32d4d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D4D4u;
    {
        const bool branch_taken_0x32d4d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d4d4) {
            ctx->pc = 0x32D4E4u;
            goto label_32d4e4;
        }
    }
    ctx->pc = 0x32D4DCu;
    // 0x32d4dc: 0x100001e0  b           . + 4 + (0x1E0 << 2)
    ctx->pc = 0x32D4DCu;
    {
        const bool branch_taken_0x32d4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d4dc) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D4E4u;
label_32d4e4:
    // 0x32d4e4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x32d4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x32d4e8: 0x90635d28  lbu         $v1, 0x5D28($v1)
    ctx->pc = 0x32d4e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23848)));
    // 0x32d4ec: 0x146001dc  bnez        $v1, . + 4 + (0x1DC << 2)
    ctx->pc = 0x32D4ECu;
    {
        const bool branch_taken_0x32d4ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d4ec) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D4F4u;
    // 0x32d4f4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x32d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32d4f8: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32d4fc: 0xa043f360  sb          $v1, -0xCA0($v0)
    ctx->pc = 0x32d4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964064), (uint8_t)GPR_U32(ctx, 3));
label_32d500:
    // 0x32d500: 0xc0cb4e4  jal         func_32D390
    ctx->pc = 0x32D500u;
    SET_GPR_U32(ctx, 31, 0x32D508u);
    ctx->pc = 0x32D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D390u, 0x32D500u, 0x32D508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D508u;
label_32d508:
    // 0x32d508: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D508u;
    {
        const bool branch_taken_0x32d508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d508) {
            ctx->pc = 0x32D520u;
            goto label_32d520;
        }
    }
    ctx->pc = 0x32D510u;
    // 0x32d510: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x32d510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32d514: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d518: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x32D518u;
    {
        const bool branch_taken_0x32d518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D518u;
        // 0x32d51c: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d518) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D520u;
label_32d520:
    // 0x32d520: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32d520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x32d524: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x32d524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32d528: 0x9070df28  lbu         $s0, -0x20D8($v1)
    ctx->pc = 0x32d528u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958888)));
    // 0x32d52c: 0x56040007  bnel        $s0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D52Cu;
    {
        const bool branch_taken_0x32d52c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x32d52c) {
            ctx->pc = 0x32D530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D52Cu;
            // 0x32d530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D54Cu;
            goto label_32d54c;
        }
    }
    ctx->pc = 0x32D534u;
    // 0x32d534: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32d534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32d538: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d53c: 0x9084f360  lbu         $a0, -0xCA0($a0)
    ctx->pc = 0x32d53cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964064)));
    // 0x32d540: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x32d540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x32d544: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x32D544u;
    {
        const bool branch_taken_0x32d544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D544u;
        // 0x32d548: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d544) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D54Cu;
label_32d54c:
    // 0x32d54c: 0xc0cb4a8  jal         func_32D2A0
    ctx->pc = 0x32D54Cu;
    SET_GPR_U32(ctx, 31, 0x32D554u);
    ctx->pc = 0x32D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D2A0u, 0x32D54Cu, 0x32D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D554u;
label_32d554:
    // 0x32d554: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D554u;
    {
        const bool branch_taken_0x32d554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d554) {
            ctx->pc = 0x32D558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D554u;
            // 0x32d558: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D574u;
            goto label_32d574;
        }
    }
    ctx->pc = 0x32D55Cu;
    // 0x32d55c: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32d55cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32d560: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d564: 0x9084f360  lbu         $a0, -0xCA0($a0)
    ctx->pc = 0x32d564u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964064)));
    // 0x32d568: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x32d568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x32d56c: 0x100001bc  b           . + 4 + (0x1BC << 2)
    ctx->pc = 0x32D56Cu;
    {
        const bool branch_taken_0x32d56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D56Cu;
        // 0x32d570: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d56c) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D574u;
label_32d574:
    // 0x32d574: 0xc066020  jal         func_198080
    ctx->pc = 0x32D574u;
    SET_GPR_U32(ctx, 31, 0x32D57Cu);
    ctx->pc = 0x32D578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D574u;
    // 0x32d578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198080u, 0x32D574u, 0x32D57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D57Cu;
label_32d57c:
    // 0x32d57c: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x32d57cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32d580: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32d580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32d584: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x32d584u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x32d588: 0x148301b5  bne         $a0, $v1, . + 4 + (0x1B5 << 2)
    ctx->pc = 0x32D588u;
    {
        const bool branch_taken_0x32d588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32d588) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D590u;
    // 0x32d590: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x32d590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32d594: 0xc0cb404  jal         func_32D010
    ctx->pc = 0x32D594u;
    SET_GPR_U32(ctx, 31, 0x32D59Cu);
    ctx->pc = 0x32D598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D594u;
    // 0x32d598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D010u, 0x32D594u, 0x32D59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D59Cu;
label_32d59c:
    // 0x32d59c: 0xc0cb4f4  jal         func_32D3D0
    ctx->pc = 0x32D59Cu;
    SET_GPR_U32(ctx, 31, 0x32D5A4u);
    ctx->pc = 0x32D3D0u;
    goto label_32d3d0;
    ctx->pc = 0x32D5A4u;
label_32d5a4:
    // 0x32d5a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32d5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d5a8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x32d5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x32d5ac: 0x24639708  addiu       $v1, $v1, -0x68F8
    ctx->pc = 0x32d5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940424));
    // 0x32d5b0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x32d5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32d5b4: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x32d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x32d5b8: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x32d5b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32d5bc: 0xc069320  jal         func_1A4C80
    ctx->pc = 0x32D5BCu;
    SET_GPR_U32(ctx, 31, 0x32D5C4u);
    ctx->pc = 0x32D5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D5BCu;
    // 0x32d5c0: 0x34443800  ori         $a0, $v0, 0x3800 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14336);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C80u, 0x32D5BCu, 0x32D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D5C4u;
label_32d5c4:
    // 0x32d5c4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32d5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32d5c8: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x32d5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x32d5cc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x32d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x32d5d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32d5d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d5d4: 0x24429700  addiu       $v0, $v0, -0x6900
    ctx->pc = 0x32d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940416));
    // 0x32d5d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x32d5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32d5dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x32d5e0: 0x24a5d430  addiu       $a1, $a1, -0x2BD0
    ctx->pc = 0x32d5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
    // 0x32d5e4: 0xc066080  jal         func_198200
    ctx->pc = 0x32D5E4u;
    SET_GPR_U32(ctx, 31, 0x32D5ECu);
    ctx->pc = 0x32D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D5E4u;
    // 0x32d5e8: 0xa0500000  sb          $s0, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198200u, 0x32D5E4u, 0x32D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D5ECu;
label_32d5ec:
    // 0x32d5ec: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32d5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32d5f0: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d5f4: 0x9084f360  lbu         $a0, -0xCA0($a0)
    ctx->pc = 0x32d5f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964064)));
    // 0x32d5f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32d5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32d5fc: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x32D5FCu;
    {
        const bool branch_taken_0x32d5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D5FCu;
        // 0x32d600: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d5fc) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D604u;
label_32d604:
    // 0x32d604: 0xc066020  jal         func_198080
    ctx->pc = 0x32D604u;
    SET_GPR_U32(ctx, 31, 0x32D60Cu);
    ctx->pc = 0x32D608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D604u;
    // 0x32d608: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198080u, 0x32D604u, 0x32D60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D60Cu;
label_32d60c:
    // 0x32d60c: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x32d60cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32d610: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x32d610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x32d614: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x32d614u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x32d618: 0x10830191  beq         $a0, $v1, . + 4 + (0x191 << 2)
    ctx->pc = 0x32D618u;
    {
        const bool branch_taken_0x32d618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d618) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D620u;
    // 0x32d620: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x32D620u;
    SET_GPR_U32(ctx, 31, 0x32D628u);
    ctx->pc = 0x197FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FF0u, 0x32D620u, 0x32D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D628u;
label_32d628:
    // 0x32d628: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d62c: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32d630: 0x9063f360  lbu         $v1, -0xCA0($v1)
    ctx->pc = 0x32d630u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964064)));
    // 0x32d634: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32d634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32d638: 0xa043f360  sb          $v1, -0xCA0($v0)
    ctx->pc = 0x32d638u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964064), (uint8_t)GPR_U32(ctx, 3));
label_32d63c:
    // 0x32d63c: 0xc0cb4e4  jal         func_32D390
    ctx->pc = 0x32D63Cu;
    SET_GPR_U32(ctx, 31, 0x32D644u);
    ctx->pc = 0x32D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D390u, 0x32D63Cu, 0x32D644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D644u;
label_32d644:
    // 0x32d644: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D644u;
    {
        const bool branch_taken_0x32d644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d644) {
            ctx->pc = 0x32D65Cu;
            goto label_32d65c;
        }
    }
    ctx->pc = 0x32D64Cu;
    // 0x32d64c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x32d64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32d650: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d654: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x32D654u;
    {
        const bool branch_taken_0x32d654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D654u;
        // 0x32d658: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d654) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D65Cu;
label_32d65c:
    // 0x32d65c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32d65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x32d660: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x32d660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32d664: 0x9070df08  lbu         $s0, -0x20F8($v1)
    ctx->pc = 0x32d664u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958856)));
    // 0x32d668: 0x56040007  bnel        $s0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D668u;
    {
        const bool branch_taken_0x32d668 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x32d668) {
            ctx->pc = 0x32D66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D668u;
            // 0x32d66c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D688u;
            goto label_32d688;
        }
    }
    ctx->pc = 0x32D670u;
    // 0x32d670: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32d670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32d674: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d678: 0x9084f360  lbu         $a0, -0xCA0($a0)
    ctx->pc = 0x32d678u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964064)));
    // 0x32d67c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x32d67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x32d680: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x32D680u;
    {
        const bool branch_taken_0x32d680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D680u;
        // 0x32d684: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d680) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D688u;
label_32d688:
    // 0x32d688: 0xc0cb4a8  jal         func_32D2A0
    ctx->pc = 0x32D688u;
    SET_GPR_U32(ctx, 31, 0x32D690u);
    ctx->pc = 0x32D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D2A0u, 0x32D688u, 0x32D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D690u;
label_32d690:
    // 0x32d690: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D690u;
    {
        const bool branch_taken_0x32d690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d690) {
            ctx->pc = 0x32D694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D690u;
            // 0x32d694: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D6B0u;
            goto label_32d6b0;
        }
    }
    ctx->pc = 0x32D698u;
    // 0x32d698: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32d698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32d69c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d6a0: 0x9084f360  lbu         $a0, -0xCA0($a0)
    ctx->pc = 0x32d6a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964064)));
    // 0x32d6a4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x32d6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x32d6a8: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x32D6A8u;
    {
        const bool branch_taken_0x32d6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D6A8u;
        // 0x32d6ac: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d6a8) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D6B0u;
label_32d6b0:
    // 0x32d6b0: 0xc066020  jal         func_198080
    ctx->pc = 0x32D6B0u;
    SET_GPR_U32(ctx, 31, 0x32D6B8u);
    ctx->pc = 0x32D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D6B0u;
    // 0x32d6b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198080u, 0x32D6B0u, 0x32D6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D6B8u;
label_32d6b8:
    // 0x32d6b8: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x32d6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32d6bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32d6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32d6c0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x32d6c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x32d6c4: 0x14830166  bne         $a0, $v1, . + 4 + (0x166 << 2)
    ctx->pc = 0x32D6C4u;
    {
        const bool branch_taken_0x32d6c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32d6c4) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D6CCu;
    // 0x32d6cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x32d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32d6d0: 0xc0cb404  jal         func_32D010
    ctx->pc = 0x32D6D0u;
    SET_GPR_U32(ctx, 31, 0x32D6D8u);
    ctx->pc = 0x32D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D6D0u;
    // 0x32d6d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D010u, 0x32D6D0u, 0x32D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D6D8u;
label_32d6d8:
    // 0x32d6d8: 0xc0cb4f4  jal         func_32D3D0
    ctx->pc = 0x32D6D8u;
    SET_GPR_U32(ctx, 31, 0x32D6E0u);
    ctx->pc = 0x32D3D0u;
    goto label_32d3d0;
    ctx->pc = 0x32D6E0u;
label_32d6e0:
    // 0x32d6e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32d6e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d6e4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x32d6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x32d6e8: 0x24639708  addiu       $v1, $v1, -0x68F8
    ctx->pc = 0x32d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940424));
    // 0x32d6ec: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x32d6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32d6f0: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x32d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x32d6f4: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x32d6f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32d6f8: 0xc069320  jal         func_1A4C80
    ctx->pc = 0x32D6F8u;
    SET_GPR_U32(ctx, 31, 0x32D700u);
    ctx->pc = 0x32D6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D6F8u;
    // 0x32d6fc: 0x34443800  ori         $a0, $v0, 0x3800 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14336);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C80u, 0x32D6F8u, 0x32D700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D700u;
label_32d700:
    // 0x32d700: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32d700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32d704: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x32d704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x32d708: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x32d708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x32d70c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32d70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d710: 0x24429700  addiu       $v0, $v0, -0x6900
    ctx->pc = 0x32d710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940416));
    // 0x32d714: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x32d714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32d718: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32d718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x32d71c: 0x24a5d430  addiu       $a1, $a1, -0x2BD0
    ctx->pc = 0x32d71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
    // 0x32d720: 0xc066080  jal         func_198200
    ctx->pc = 0x32D720u;
    SET_GPR_U32(ctx, 31, 0x32D728u);
    ctx->pc = 0x32D724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D720u;
    // 0x32d724: 0xa0500000  sb          $s0, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198200u, 0x32D720u, 0x32D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D728u;
label_32d728:
    // 0x32d728: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32d728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32d72c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d730: 0x9084f360  lbu         $a0, -0xCA0($a0)
    ctx->pc = 0x32d730u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964064)));
    // 0x32d734: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32d734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32d738: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x32D738u;
    {
        const bool branch_taken_0x32d738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D738u;
        // 0x32d73c: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d738) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D740u;
label_32d740:
    // 0x32d740: 0xc066020  jal         func_198080
    ctx->pc = 0x32D740u;
    SET_GPR_U32(ctx, 31, 0x32D748u);
    ctx->pc = 0x32D744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D740u;
    // 0x32d744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198080u, 0x32D740u, 0x32D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D748u;
label_32d748:
    // 0x32d748: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x32d748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32d74c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x32d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x32d750: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x32d750u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x32d754: 0x10830142  beq         $a0, $v1, . + 4 + (0x142 << 2)
    ctx->pc = 0x32D754u;
    {
        const bool branch_taken_0x32d754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d754) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D75Cu;
    // 0x32d75c: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x32D75Cu;
    SET_GPR_U32(ctx, 31, 0x32D764u);
    ctx->pc = 0x197FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FF0u, 0x32D75Cu, 0x32D764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D764u;
label_32d764:
    // 0x32d764: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d768: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32d768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32d76c: 0x9063f360  lbu         $v1, -0xCA0($v1)
    ctx->pc = 0x32d76cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964064)));
    // 0x32d770: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32d770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32d774: 0xa043f360  sb          $v1, -0xCA0($v0)
    ctx->pc = 0x32d774u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964064), (uint8_t)GPR_U32(ctx, 3));
label_32d778:
    // 0x32d778: 0xc0cb4e4  jal         func_32D390
    ctx->pc = 0x32D778u;
    SET_GPR_U32(ctx, 31, 0x32D780u);
    ctx->pc = 0x32D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D390u, 0x32D778u, 0x32D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D780u;
label_32d780:
    // 0x32d780: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D780u;
    {
        const bool branch_taken_0x32d780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d780) {
            ctx->pc = 0x32D798u;
            goto label_32d798;
        }
    }
    ctx->pc = 0x32D788u;
    // 0x32d788: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x32d788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32d78c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d790: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x32D790u;
    {
        const bool branch_taken_0x32d790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D790u;
        // 0x32d794: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d790) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D798u;
label_32d798:
    // 0x32d798: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32d798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x32d79c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x32d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32d7a0: 0x9070dee8  lbu         $s0, -0x2118($v1)
    ctx->pc = 0x32d7a0u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958824)));
    // 0x32d7a4: 0x56040007  bnel        $s0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D7A4u;
    {
        const bool branch_taken_0x32d7a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x32d7a4) {
            ctx->pc = 0x32D7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D7A4u;
            // 0x32d7a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D7C4u;
            goto label_32d7c4;
        }
    }
    ctx->pc = 0x32D7ACu;
    // 0x32d7ac: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32d7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32d7b0: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d7b4: 0x9084f360  lbu         $a0, -0xCA0($a0)
    ctx->pc = 0x32d7b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964064)));
    // 0x32d7b8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x32d7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x32d7bc: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x32D7BCu;
    {
        const bool branch_taken_0x32d7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D7BCu;
        // 0x32d7c0: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d7bc) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D7C4u;
label_32d7c4:
    // 0x32d7c4: 0xc0cb4a8  jal         func_32D2A0
    ctx->pc = 0x32D7C4u;
    SET_GPR_U32(ctx, 31, 0x32D7CCu);
    ctx->pc = 0x32D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D2A0u, 0x32D7C4u, 0x32D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D7CCu;
label_32d7cc:
    // 0x32d7cc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D7CCu;
    {
        const bool branch_taken_0x32d7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d7cc) {
            ctx->pc = 0x32D7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D7CCu;
            // 0x32d7d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D7ECu;
            goto label_32d7ec;
        }
    }
    ctx->pc = 0x32D7D4u;
    // 0x32d7d4: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32d7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32d7d8: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d7dc: 0x9084f360  lbu         $a0, -0xCA0($a0)
    ctx->pc = 0x32d7dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964064)));
    // 0x32d7e0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x32d7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x32d7e4: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x32D7E4u;
    {
        const bool branch_taken_0x32d7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D7E4u;
        // 0x32d7e8: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d7e4) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D7ECu;
label_32d7ec:
    // 0x32d7ec: 0xc066020  jal         func_198080
    ctx->pc = 0x32D7ECu;
    SET_GPR_U32(ctx, 31, 0x32D7F4u);
    ctx->pc = 0x32D7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D7ECu;
    // 0x32d7f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198080u, 0x32D7ECu, 0x32D7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D7F4u;
label_32d7f4:
    // 0x32d7f4: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x32d7f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32d7f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32d7fc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x32d7fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x32d800: 0x14830117  bne         $a0, $v1, . + 4 + (0x117 << 2)
    ctx->pc = 0x32D800u;
    {
        const bool branch_taken_0x32d800 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32d800) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D808u;
    // 0x32d808: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x32d808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32d80c: 0xc0cb404  jal         func_32D010
    ctx->pc = 0x32D80Cu;
    SET_GPR_U32(ctx, 31, 0x32D814u);
    ctx->pc = 0x32D810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D80Cu;
    // 0x32d810: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D010u, 0x32D80Cu, 0x32D814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D814u;
label_32d814:
    // 0x32d814: 0xc0cb4f4  jal         func_32D3D0
    ctx->pc = 0x32D814u;
    SET_GPR_U32(ctx, 31, 0x32D81Cu);
    ctx->pc = 0x32D3D0u;
    goto label_32d3d0;
    ctx->pc = 0x32D81Cu;
label_32d81c:
    // 0x32d81c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32d81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d820: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x32d820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x32d824: 0x24639708  addiu       $v1, $v1, -0x68F8
    ctx->pc = 0x32d824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940424));
    // 0x32d828: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x32d828u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32d82c: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x32d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x32d830: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x32d830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32d834: 0xc069320  jal         func_1A4C80
    ctx->pc = 0x32D834u;
    SET_GPR_U32(ctx, 31, 0x32D83Cu);
    ctx->pc = 0x32D838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D834u;
    // 0x32d838: 0x34443800  ori         $a0, $v0, 0x3800 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14336);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C80u, 0x32D834u, 0x32D83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D83Cu;
label_32d83c:
    // 0x32d83c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32d83cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32d840: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x32d840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x32d844: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x32d844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x32d848: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32d848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d84c: 0x24429700  addiu       $v0, $v0, -0x6900
    ctx->pc = 0x32d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940416));
    // 0x32d850: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x32d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32d854: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32d854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x32d858: 0x24a5d430  addiu       $a1, $a1, -0x2BD0
    ctx->pc = 0x32d858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
    // 0x32d85c: 0xc066080  jal         func_198200
    ctx->pc = 0x32D85Cu;
    SET_GPR_U32(ctx, 31, 0x32D864u);
    ctx->pc = 0x32D860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D85Cu;
    // 0x32d860: 0xa0500000  sb          $s0, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198200u, 0x32D85Cu, 0x32D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D864u;
label_32d864:
    // 0x32d864: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32d864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32d868: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d86c: 0x9084f360  lbu         $a0, -0xCA0($a0)
    ctx->pc = 0x32d86cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964064)));
    // 0x32d870: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32d870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32d874: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x32D874u;
    {
        const bool branch_taken_0x32d874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D874u;
        // 0x32d878: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d874) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D87Cu;
label_32d87c:
    // 0x32d87c: 0xc066020  jal         func_198080
    ctx->pc = 0x32D87Cu;
    SET_GPR_U32(ctx, 31, 0x32D884u);
    ctx->pc = 0x32D880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D87Cu;
    // 0x32d880: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198080u, 0x32D87Cu, 0x32D884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D884u;
label_32d884:
    // 0x32d884: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x32d884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32d888: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x32d888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x32d88c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x32d88cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x32d890: 0x108300f3  beq         $a0, $v1, . + 4 + (0xF3 << 2)
    ctx->pc = 0x32D890u;
    {
        const bool branch_taken_0x32d890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d890) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D898u;
    // 0x32d898: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x32D898u;
    SET_GPR_U32(ctx, 31, 0x32D8A0u);
    ctx->pc = 0x197FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FF0u, 0x32D898u, 0x32D8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D8A0u;
label_32d8a0:
    // 0x32d8a0: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d8a4: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32d8a8: 0x9063f360  lbu         $v1, -0xCA0($v1)
    ctx->pc = 0x32d8a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964064)));
    // 0x32d8ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32d8b0: 0xa043f360  sb          $v1, -0xCA0($v0)
    ctx->pc = 0x32d8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964064), (uint8_t)GPR_U32(ctx, 3));
label_32d8b4:
    // 0x32d8b4: 0xc0cb4e4  jal         func_32D390
    ctx->pc = 0x32D8B4u;
    SET_GPR_U32(ctx, 31, 0x32D8BCu);
    ctx->pc = 0x32D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D390u, 0x32D8B4u, 0x32D8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D8BCu;
label_32d8bc:
    // 0x32d8bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D8BCu;
    {
        const bool branch_taken_0x32d8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d8bc) {
            ctx->pc = 0x32D8D4u;
            goto label_32d8d4;
        }
    }
    ctx->pc = 0x32D8C4u;
    // 0x32d8c4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x32d8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32d8c8: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d8cc: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x32D8CCu;
    {
        const bool branch_taken_0x32d8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D8CCu;
        // 0x32d8d0: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d8cc) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D8D4u;
label_32d8d4:
    // 0x32d8d4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x32d8d8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x32d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32d8dc: 0x9070dce0  lbu         $s0, -0x2320($v1)
    ctx->pc = 0x32d8dcu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958304)));
    // 0x32d8e0: 0x56040007  bnel        $s0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D8E0u;
    {
        const bool branch_taken_0x32d8e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x32d8e0) {
            ctx->pc = 0x32D8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D8E0u;
            // 0x32d8e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D900u;
            goto label_32d900;
        }
    }
    ctx->pc = 0x32D8E8u;
    // 0x32d8e8: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32d8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32d8ec: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d8f0: 0x9084f360  lbu         $a0, -0xCA0($a0)
    ctx->pc = 0x32d8f0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964064)));
    // 0x32d8f4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x32d8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x32d8f8: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x32D8F8u;
    {
        const bool branch_taken_0x32d8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D8F8u;
        // 0x32d8fc: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d8f8) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D900u;
label_32d900:
    // 0x32d900: 0xc0cb4a8  jal         func_32D2A0
    ctx->pc = 0x32D900u;
    SET_GPR_U32(ctx, 31, 0x32D908u);
    ctx->pc = 0x32D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D2A0u, 0x32D900u, 0x32D908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D908u;
label_32d908:
    // 0x32d908: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D908u;
    {
        const bool branch_taken_0x32d908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d908) {
            ctx->pc = 0x32D90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D908u;
            // 0x32d90c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D928u;
            goto label_32d928;
        }
    }
    ctx->pc = 0x32D910u;
    // 0x32d910: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32d910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32d914: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d918: 0x9084f360  lbu         $a0, -0xCA0($a0)
    ctx->pc = 0x32d918u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964064)));
    // 0x32d91c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x32d91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x32d920: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x32D920u;
    {
        const bool branch_taken_0x32d920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D920u;
        // 0x32d924: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d920) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D928u;
label_32d928:
    // 0x32d928: 0xc066020  jal         func_198080
    ctx->pc = 0x32D928u;
    SET_GPR_U32(ctx, 31, 0x32D930u);
    ctx->pc = 0x32D92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D928u;
    // 0x32d92c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198080u, 0x32D928u, 0x32D930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D930u;
label_32d930:
    // 0x32d930: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x32d930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32d934: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32d934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32d938: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x32d938u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x32d93c: 0x148300c8  bne         $a0, $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x32D93Cu;
    {
        const bool branch_taken_0x32d93c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32d93c) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D944u;
    // 0x32d944: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x32d944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32d948: 0xc0cb404  jal         func_32D010
    ctx->pc = 0x32D948u;
    SET_GPR_U32(ctx, 31, 0x32D950u);
    ctx->pc = 0x32D94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D948u;
    // 0x32d94c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D010u, 0x32D948u, 0x32D950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D950u;
label_32d950:
    // 0x32d950: 0xc0cb4f4  jal         func_32D3D0
    ctx->pc = 0x32D950u;
    SET_GPR_U32(ctx, 31, 0x32D958u);
    ctx->pc = 0x32D3D0u;
    goto label_32d3d0;
    ctx->pc = 0x32D958u;
label_32d958:
    // 0x32d958: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32d958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d95c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x32d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x32d960: 0x24639708  addiu       $v1, $v1, -0x68F8
    ctx->pc = 0x32d960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940424));
    // 0x32d964: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x32d964u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32d968: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x32d968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x32d96c: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x32d96cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32d970: 0xc069320  jal         func_1A4C80
    ctx->pc = 0x32D970u;
    SET_GPR_U32(ctx, 31, 0x32D978u);
    ctx->pc = 0x32D974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D970u;
    // 0x32d974: 0x34443800  ori         $a0, $v0, 0x3800 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14336);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C80u, 0x32D970u, 0x32D978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D978u;
label_32d978:
    // 0x32d978: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32d978u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32d97c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x32d97cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x32d980: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x32d980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x32d984: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32d984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d988: 0x24429700  addiu       $v0, $v0, -0x6900
    ctx->pc = 0x32d988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940416));
    // 0x32d98c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x32d98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32d990: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32d990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x32d994: 0x24a5d430  addiu       $a1, $a1, -0x2BD0
    ctx->pc = 0x32d994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
    // 0x32d998: 0xc066080  jal         func_198200
    ctx->pc = 0x32D998u;
    SET_GPR_U32(ctx, 31, 0x32D9A0u);
    ctx->pc = 0x32D99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D998u;
    // 0x32d99c: 0xa0500000  sb          $s0, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198200u, 0x32D998u, 0x32D9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D9A0u;
label_32d9a0:
    // 0x32d9a0: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32d9a4: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d9a8: 0x9084f360  lbu         $a0, -0xCA0($a0)
    ctx->pc = 0x32d9a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964064)));
    // 0x32d9ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32d9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32d9b0: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x32D9B0u;
    {
        const bool branch_taken_0x32d9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D9B0u;
        // 0x32d9b4: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d9b0) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D9B8u;
label_32d9b8:
    // 0x32d9b8: 0xc066020  jal         func_198080
    ctx->pc = 0x32D9B8u;
    SET_GPR_U32(ctx, 31, 0x32D9C0u);
    ctx->pc = 0x32D9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D9B8u;
    // 0x32d9bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198080u, 0x32D9B8u, 0x32D9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D9C0u;
label_32d9c0:
    // 0x32d9c0: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x32d9c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32d9c4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x32d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x32d9c8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x32d9c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x32d9cc: 0x108300a4  beq         $a0, $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x32D9CCu;
    {
        const bool branch_taken_0x32d9cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d9cc) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32D9D4u;
    // 0x32d9d4: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x32D9D4u;
    SET_GPR_U32(ctx, 31, 0x32D9DCu);
    ctx->pc = 0x197FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FF0u, 0x32D9D4u, 0x32D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D9DCu;
label_32d9dc:
    // 0x32d9dc: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d9e0: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32d9e4: 0x9063f360  lbu         $v1, -0xCA0($v1)
    ctx->pc = 0x32d9e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964064)));
    // 0x32d9e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32d9ec: 0xa043f360  sb          $v1, -0xCA0($v0)
    ctx->pc = 0x32d9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964064), (uint8_t)GPR_U32(ctx, 3));
label_32d9f0:
    // 0x32d9f0: 0xc0cb4e4  jal         func_32D390
    ctx->pc = 0x32D9F0u;
    SET_GPR_U32(ctx, 31, 0x32D9F8u);
    ctx->pc = 0x32D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D390u, 0x32D9F0u, 0x32D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D9F8u;
label_32d9f8:
    // 0x32d9f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D9F8u;
    {
        const bool branch_taken_0x32d9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d9f8) {
            ctx->pc = 0x32DA10u;
            goto label_32da10;
        }
    }
    ctx->pc = 0x32DA00u;
    // 0x32da00: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x32da00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32da04: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32da04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32da08: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x32DA08u;
    {
        const bool branch_taken_0x32da08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DA08u;
        // 0x32da0c: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32da08) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32DA10u;
label_32da10:
    // 0x32da10: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32da10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x32da14: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x32da14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32da18: 0x9070dcc0  lbu         $s0, -0x2340($v1)
    ctx->pc = 0x32da18u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958272)));
    // 0x32da1c: 0x56040007  bnel        $s0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32DA1Cu;
    {
        const bool branch_taken_0x32da1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x32da1c) {
            ctx->pc = 0x32DA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DA1Cu;
            // 0x32da20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DA3Cu;
            goto label_32da3c;
        }
    }
    ctx->pc = 0x32DA24u;
    // 0x32da24: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32da24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32da28: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32da28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32da2c: 0x9084f360  lbu         $a0, -0xCA0($a0)
    ctx->pc = 0x32da2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964064)));
    // 0x32da30: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x32da30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x32da34: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x32DA34u;
    {
        const bool branch_taken_0x32da34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DA34u;
        // 0x32da38: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32da34) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32DA3Cu;
label_32da3c:
    // 0x32da3c: 0xc0cb4a8  jal         func_32D2A0
    ctx->pc = 0x32DA3Cu;
    SET_GPR_U32(ctx, 31, 0x32DA44u);
    ctx->pc = 0x32D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D2A0u, 0x32DA3Cu, 0x32DA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DA44u;
label_32da44:
    // 0x32da44: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x32DA44u;
    {
        const bool branch_taken_0x32da44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32da44) {
            ctx->pc = 0x32DA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DA44u;
            // 0x32da48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DA64u;
            goto label_32da64;
        }
    }
    ctx->pc = 0x32DA4Cu;
    // 0x32da4c: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32da4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32da50: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32da50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32da54: 0x9084f360  lbu         $a0, -0xCA0($a0)
    ctx->pc = 0x32da54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964064)));
    // 0x32da58: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x32da58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x32da5c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x32DA5Cu;
    {
        const bool branch_taken_0x32da5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DA5Cu;
        // 0x32da60: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32da5c) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32DA64u;
label_32da64:
    // 0x32da64: 0xc066020  jal         func_198080
    ctx->pc = 0x32DA64u;
    SET_GPR_U32(ctx, 31, 0x32DA6Cu);
    ctx->pc = 0x32DA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DA64u;
    // 0x32da68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198080u, 0x32DA64u, 0x32DA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DA6Cu;
label_32da6c:
    // 0x32da6c: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x32da6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32da70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32da70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32da74: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x32da74u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x32da78: 0x14830079  bne         $a0, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x32DA78u;
    {
        const bool branch_taken_0x32da78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32da78) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32DA80u;
    // 0x32da80: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x32da80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32da84: 0xc0cb404  jal         func_32D010
    ctx->pc = 0x32DA84u;
    SET_GPR_U32(ctx, 31, 0x32DA8Cu);
    ctx->pc = 0x32DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DA84u;
    // 0x32da88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D010u, 0x32DA84u, 0x32DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DA8Cu;
label_32da8c:
    // 0x32da8c: 0xc0cb4f4  jal         func_32D3D0
    ctx->pc = 0x32DA8Cu;
    SET_GPR_U32(ctx, 31, 0x32DA94u);
    ctx->pc = 0x32D3D0u;
    goto label_32d3d0;
    ctx->pc = 0x32DA94u;
label_32da94:
    // 0x32da94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32da94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32da98: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x32da98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x32da9c: 0x24639708  addiu       $v1, $v1, -0x68F8
    ctx->pc = 0x32da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940424));
    // 0x32daa0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x32daa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32daa4: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x32daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x32daa8: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x32daa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32daac: 0xc069320  jal         func_1A4C80
    ctx->pc = 0x32DAACu;
    SET_GPR_U32(ctx, 31, 0x32DAB4u);
    ctx->pc = 0x32DAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DAACu;
    // 0x32dab0: 0x34443800  ori         $a0, $v0, 0x3800 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14336);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C80u, 0x32DAACu, 0x32DAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DAB4u;
label_32dab4:
    // 0x32dab4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32dab8: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x32dab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x32dabc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x32dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x32dac0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32dac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dac4: 0x24429700  addiu       $v0, $v0, -0x6900
    ctx->pc = 0x32dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940416));
    // 0x32dac8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x32dac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32dacc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32daccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x32dad0: 0x24a5d430  addiu       $a1, $a1, -0x2BD0
    ctx->pc = 0x32dad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
    // 0x32dad4: 0xc066080  jal         func_198200
    ctx->pc = 0x32DAD4u;
    SET_GPR_U32(ctx, 31, 0x32DADCu);
    ctx->pc = 0x32DAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DAD4u;
    // 0x32dad8: 0xa0500000  sb          $s0, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198200u, 0x32DAD4u, 0x32DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DADCu;
label_32dadc:
    // 0x32dadc: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32dadcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32dae0: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32dae4: 0x9084f360  lbu         $a0, -0xCA0($a0)
    ctx->pc = 0x32dae4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964064)));
    // 0x32dae8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32dae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32daec: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x32DAECu;
    {
        const bool branch_taken_0x32daec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DAECu;
        // 0x32daf0: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32daec) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32DAF4u;
label_32daf4:
    // 0x32daf4: 0xc066020  jal         func_198080
    ctx->pc = 0x32DAF4u;
    SET_GPR_U32(ctx, 31, 0x32DAFCu);
    ctx->pc = 0x32DAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DAF4u;
    // 0x32daf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198080u, 0x32DAF4u, 0x32DAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DAFCu;
label_32dafc:
    // 0x32dafc: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x32dafcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32db00: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x32db00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x32db04: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x32db04u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x32db08: 0x10830055  beq         $a0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x32DB08u;
    {
        const bool branch_taken_0x32db08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32db08) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32DB10u;
    // 0x32db10: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x32DB10u;
    SET_GPR_U32(ctx, 31, 0x32DB18u);
    ctx->pc = 0x197FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FF0u, 0x32DB10u, 0x32DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DB18u;
label_32db18:
    // 0x32db18: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32db18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32db1c: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32db20: 0x9063f360  lbu         $v1, -0xCA0($v1)
    ctx->pc = 0x32db20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964064)));
    // 0x32db24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32db24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32db28: 0xa043f360  sb          $v1, -0xCA0($v0)
    ctx->pc = 0x32db28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964064), (uint8_t)GPR_U32(ctx, 3));
label_32db2c:
    // 0x32db2c: 0xc0cb4e4  jal         func_32D390
    ctx->pc = 0x32DB2Cu;
    SET_GPR_U32(ctx, 31, 0x32DB34u);
    ctx->pc = 0x32D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D390u, 0x32DB2Cu, 0x32DB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DB34u;
label_32db34:
    // 0x32db34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32DB34u;
    {
        const bool branch_taken_0x32db34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32db34) {
            ctx->pc = 0x32DB4Cu;
            goto label_32db4c;
        }
    }
    ctx->pc = 0x32DB3Cu;
    // 0x32db3c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x32db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32db40: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32db40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32db44: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x32DB44u;
    {
        const bool branch_taken_0x32db44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DB44u;
        // 0x32db48: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32db44) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32DB4Cu;
label_32db4c:
    // 0x32db4c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32db4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x32db50: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x32db50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32db54: 0x9070dca0  lbu         $s0, -0x2360($v1)
    ctx->pc = 0x32db54u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958240)));
    // 0x32db58: 0x56040007  bnel        $s0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32DB58u;
    {
        const bool branch_taken_0x32db58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x32db58) {
            ctx->pc = 0x32DB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DB58u;
            // 0x32db5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DB78u;
            goto label_32db78;
        }
    }
    ctx->pc = 0x32DB60u;
    // 0x32db60: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32db60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32db64: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32db64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32db68: 0x9084f360  lbu         $a0, -0xCA0($a0)
    ctx->pc = 0x32db68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964064)));
    // 0x32db6c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x32db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x32db70: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x32DB70u;
    {
        const bool branch_taken_0x32db70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DB70u;
        // 0x32db74: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32db70) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32DB78u;
label_32db78:
    // 0x32db78: 0xc0cb4a8  jal         func_32D2A0
    ctx->pc = 0x32DB78u;
    SET_GPR_U32(ctx, 31, 0x32DB80u);
    ctx->pc = 0x32D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D2A0u, 0x32DB78u, 0x32DB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DB80u;
label_32db80:
    // 0x32db80: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x32DB80u;
    {
        const bool branch_taken_0x32db80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32db80) {
            ctx->pc = 0x32DB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DB80u;
            // 0x32db84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DBA0u;
            goto label_32dba0;
        }
    }
    ctx->pc = 0x32DB88u;
    // 0x32db88: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32db88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32db8c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32db90: 0x9084f360  lbu         $a0, -0xCA0($a0)
    ctx->pc = 0x32db90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964064)));
    // 0x32db94: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x32db94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x32db98: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x32DB98u;
    {
        const bool branch_taken_0x32db98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DB98u;
        // 0x32db9c: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32db98) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32DBA0u;
label_32dba0:
    // 0x32dba0: 0xc066020  jal         func_198080
    ctx->pc = 0x32DBA0u;
    SET_GPR_U32(ctx, 31, 0x32DBA8u);
    ctx->pc = 0x32DBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DBA0u;
    // 0x32dba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198080u, 0x32DBA0u, 0x32DBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DBA8u;
label_32dba8:
    // 0x32dba8: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x32dba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32dbac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32dbb0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x32dbb0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x32dbb4: 0x1483002a  bne         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x32DBB4u;
    {
        const bool branch_taken_0x32dbb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32dbb4) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32DBBCu;
    // 0x32dbbc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x32dbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32dbc0: 0xc0cb404  jal         func_32D010
    ctx->pc = 0x32DBC0u;
    SET_GPR_U32(ctx, 31, 0x32DBC8u);
    ctx->pc = 0x32DBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DBC0u;
    // 0x32dbc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D010u, 0x32DBC0u, 0x32DBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DBC8u;
label_32dbc8:
    // 0x32dbc8: 0xc0cb4f4  jal         func_32D3D0
    ctx->pc = 0x32DBC8u;
    SET_GPR_U32(ctx, 31, 0x32DBD0u);
    ctx->pc = 0x32D3D0u;
    goto label_32d3d0;
    ctx->pc = 0x32DBD0u;
label_32dbd0:
    // 0x32dbd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32dbd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dbd4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x32dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x32dbd8: 0x24639708  addiu       $v1, $v1, -0x68F8
    ctx->pc = 0x32dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940424));
    // 0x32dbdc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x32dbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32dbe0: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x32dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x32dbe4: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x32dbe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32dbe8: 0xc069320  jal         func_1A4C80
    ctx->pc = 0x32DBE8u;
    SET_GPR_U32(ctx, 31, 0x32DBF0u);
    ctx->pc = 0x32DBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DBE8u;
    // 0x32dbec: 0x34443800  ori         $a0, $v0, 0x3800 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14336);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C80u, 0x32DBE8u, 0x32DBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DBF0u;
label_32dbf0:
    // 0x32dbf0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32dbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32dbf4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x32dbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x32dbf8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x32dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x32dbfc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32dbfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dc00: 0x24429700  addiu       $v0, $v0, -0x6900
    ctx->pc = 0x32dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940416));
    // 0x32dc04: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x32dc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32dc08: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x32dc0c: 0x24a5d430  addiu       $a1, $a1, -0x2BD0
    ctx->pc = 0x32dc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
    // 0x32dc10: 0xc066080  jal         func_198200
    ctx->pc = 0x32DC10u;
    SET_GPR_U32(ctx, 31, 0x32DC18u);
    ctx->pc = 0x32DC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DC10u;
    // 0x32dc14: 0xa0500000  sb          $s0, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198200u, 0x32DC10u, 0x32DC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC18u;
label_32dc18:
    // 0x32dc18: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32dc18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32dc1c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32dc20: 0x9084f360  lbu         $a0, -0xCA0($a0)
    ctx->pc = 0x32dc20u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964064)));
    // 0x32dc24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32dc28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x32DC28u;
    {
        const bool branch_taken_0x32dc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DC28u;
        // 0x32dc2c: 0xa064f360  sb          $a0, -0xCA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dc28) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32DC30u;
label_32dc30:
    // 0x32dc30: 0xc066020  jal         func_198080
    ctx->pc = 0x32DC30u;
    SET_GPR_U32(ctx, 31, 0x32DC38u);
    ctx->pc = 0x32DC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DC30u;
    // 0x32dc34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198080u, 0x32DC30u, 0x32DC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC38u;
label_32dc38:
    // 0x32dc38: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x32dc38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32dc3c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x32dc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x32dc40: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x32dc40u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x32dc44: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32DC44u;
    {
        const bool branch_taken_0x32dc44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32dc44) {
            ctx->pc = 0x32DC60u;
            goto label_32dc60;
        }
    }
    ctx->pc = 0x32DC4Cu;
    // 0x32dc4c: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x32DC4Cu;
    SET_GPR_U32(ctx, 31, 0x32DC54u);
    ctx->pc = 0x197FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FF0u, 0x32DC4Cu, 0x32DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC54u;
label_32dc54:
    // 0x32dc54: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x32dc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_32dc58:
    // 0x32dc58: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32dc5c: 0xa064f360  sb          $a0, -0xCA0($v1)
    ctx->pc = 0x32dc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964064), (uint8_t)GPR_U32(ctx, 4));
label_32dc60:
    // 0x32dc60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32dc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32dc64:
    // 0x32dc64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32dc64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32dc68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32dc68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32dc6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32dc6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32dc70: 0x3e00008  jr          $ra
    ctx->pc = 0x32DC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DC70u;
        // 0x32dc74: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DC78u;
    // 0x32dc78: 0x0  nop
    ctx->pc = 0x32dc78u;
    // NOP
    // 0x32dc7c: 0x0  nop
    ctx->pc = 0x32dc7cu;
    // NOP
    if (ctx->pc == 0x32dc7cu) { ctx->pc = 0x32dc80u; }
}
