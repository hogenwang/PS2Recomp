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

// Function: sub_001614A0
// Address: 0x1614a0 - 0x1619b0
void sub_001614A0_0x1614a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001614A0_0x1614a0");
#endif

    switch (ctx->pc) {
        case 0x1614e4u: goto label_1614e4;
        case 0x161594u: goto label_161594;
        case 0x1616bcu: goto label_1616bc;
        case 0x161710u: goto label_161710;
        case 0x161718u: goto label_161718;
        case 0x1618f0u: goto label_1618f0;
        case 0x161904u: goto label_161904;
        case 0x161910u: goto label_161910;
        default: break;
    }

    ctx->pc = 0x1614a0u;

    // 0x1614a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1614a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1614a4: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x1614a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
    // 0x1614a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1614a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1614ac: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x1614acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x1614b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1614b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1614b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1614b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1614b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1614b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1614bc: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x1614bcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1614c0: 0xa487000a  sh          $a3, 0xA($a0)
    ctx->pc = 0x1614c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 7));
    // 0x1614c4: 0x84870002  lh          $a3, 0x2($a0)
    ctx->pc = 0x1614c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1614c8: 0xa487000c  sh          $a3, 0xC($a0)
    ctx->pc = 0x1614c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x1614cc: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x1614ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1614d0: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1614d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1614d4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1614D4u;
    {
        const bool branch_taken_0x1614d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1614D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1614D4u;
        // 0x1614d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1614d4) {
            ctx->pc = 0x1614E4u;
            goto label_1614e4;
        }
    }
    ctx->pc = 0x1614DCu;
    // 0x1614dc: 0xc058410  jal         func_161040
    ctx->pc = 0x1614DCu;
    SET_GPR_U32(ctx, 31, 0x1614E4u);
    ctx->pc = 0x161040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161040u, 0x1614DCu, 0x1614E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1614E4u;
label_1614e4:
    // 0x1614e4: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x1614e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1614e8: 0xa623000e  sh          $v1, 0xE($s1)
    ctx->pc = 0x1614e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1614ec: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x1614ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1614f0: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x1614f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x1614f4: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x1614f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1614f8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1614f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1614fc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1614FCu;
    {
        const bool branch_taken_0x1614fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1614fc) {
            ctx->pc = 0x161500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1614FCu;
            // 0x161500: 0x92230031  lbu         $v1, 0x31($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161510u;
            goto label_161510;
        }
    }
    ctx->pc = 0x161504u;
    // 0x161504: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x161504u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x161508: 0xa623003c  sh          $v1, 0x3C($s1)
    ctx->pc = 0x161508u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x16150c: 0x92230031  lbu         $v1, 0x31($s1)
    ctx->pc = 0x16150cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
label_161510:
    // 0x161510: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x161510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x161514: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x161514u;
    {
        const bool branch_taken_0x161514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161514) {
            ctx->pc = 0x161518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161514u;
            // 0x161518: 0x9203001f  lbu         $v1, 0x1F($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161528u;
            goto label_161528;
        }
    }
    ctx->pc = 0x16151Cu;
    // 0x16151c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x16151cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x161520: 0xa623003e  sh          $v1, 0x3E($s1)
    ctx->pc = 0x161520u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 62), (uint16_t)GPR_U32(ctx, 3));
    // 0x161524: 0x9203001f  lbu         $v1, 0x1F($s0)
    ctx->pc = 0x161524u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
label_161528:
    // 0x161528: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x161528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x16152c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16152Cu;
    {
        const bool branch_taken_0x16152c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16152c) {
            ctx->pc = 0x161530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16152Cu;
            // 0x161530: 0x9203001f  lbu         $v1, 0x1F($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161540u;
            goto label_161540;
        }
    }
    ctx->pc = 0x161534u;
    // 0x161534: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x161534u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x161538: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x161538u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x16153c: 0x9203001f  lbu         $v1, 0x1F($s0)
    ctx->pc = 0x16153cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
label_161540:
    // 0x161540: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x161540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x161544: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x161544u;
    {
        const bool branch_taken_0x161544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x161544) {
            ctx->pc = 0x161548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161544u;
            // 0x161548: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161558u;
            goto label_161558;
        }
    }
    ctx->pc = 0x16154Cu;
    // 0x16154c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x16154cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x161550: 0xa6230014  sh          $v1, 0x14($s1)
    ctx->pc = 0x161550u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x161554: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x161554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_161558:
    // 0x161558: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16155c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16155cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161560: 0x3e00008  jr          $ra
    ctx->pc = 0x161560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161560u;
        // 0x161564: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161568u;
    // 0x161568: 0x0  nop
    ctx->pc = 0x161568u;
    // NOP
    // 0x16156c: 0x0  nop
    ctx->pc = 0x16156cu;
    // NOP
    // 0x161570: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x161570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x161574: 0x8c636dc0  lw          $v1, 0x6DC0($v1)
    ctx->pc = 0x161574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28096)));
    // 0x161578: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x161578u;
    {
        const bool branch_taken_0x161578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161578u;
        // 0x16157c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161578) {
            ctx->pc = 0x161670u;
            goto label_161670;
        }
    }
    ctx->pc = 0x161580u;
    // 0x161580: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x161580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x161584: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x161584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
    // 0x161588: 0x24846bc0  addiu       $a0, $a0, 0x6BC0
    ctx->pc = 0x161588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27584));
    // 0x16158c: 0x3c07009b  lui         $a3, 0x9B
    ctx->pc = 0x16158cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)155 << 16));
    // 0x161590: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x161590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
label_161594:
    // 0x161594: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x161594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x161598: 0x8ca80270  lw          $t0, 0x270($a1)
    ctx->pc = 0x161598u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 624)));
    // 0x16159c: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x16159cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x1615a0: 0x15000029  bnez        $t0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1615A0u;
    {
        const bool branch_taken_0x1615a0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1615a0) {
            ctx->pc = 0x161648u;
            goto label_161648;
        }
    }
    ctx->pc = 0x1615A8u;
    // 0x1615a8: 0x90a80030  lbu         $t0, 0x30($a1)
    ctx->pc = 0x1615a8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1615ac: 0x31080004  andi        $t0, $t0, 0x4
    ctx->pc = 0x1615acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x1615b0: 0x11000011  beqz        $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1615B0u;
    {
        const bool branch_taken_0x1615b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1615b0) {
            ctx->pc = 0x1615F8u;
            goto label_1615f8;
        }
    }
    ctx->pc = 0x1615B8u;
    // 0x1615b8: 0x90a8008c  lbu         $t0, 0x8C($a1)
    ctx->pc = 0x1615b8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x1615bc: 0x31080002  andi        $t0, $t0, 0x2
    ctx->pc = 0x1615bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x1615c0: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1615C0u;
    {
        const bool branch_taken_0x1615c0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1615c0) {
            ctx->pc = 0x1615E0u;
            goto label_1615e0;
        }
    }
    ctx->pc = 0x1615C8u;
    // 0x1615c8: 0x8ca80040  lw          $t0, 0x40($a1)
    ctx->pc = 0x1615c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1615cc: 0x84a9003c  lh          $t1, 0x3C($a1)
    ctx->pc = 0x1615ccu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1615d0: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1615d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1615d4: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1615d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1615d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1615D8u;
    {
        const bool branch_taken_0x1615d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1615DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615D8u;
        // 0x1615dc: 0xa4a80000  sh          $t0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1615d8) {
            ctx->pc = 0x1615F8u;
            goto label_1615f8;
        }
    }
    ctx->pc = 0x1615E0u;
label_1615e0:
    // 0x1615e0: 0x8ca80040  lw          $t0, 0x40($a1)
    ctx->pc = 0x1615e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1615e4: 0x84a9003c  lh          $t1, 0x3C($a1)
    ctx->pc = 0x1615e4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1615e8: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1615e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1615ec: 0x1284023  subu        $t0, $t1, $t0
    ctx->pc = 0x1615ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1615f0: 0xa4a80000  sh          $t0, 0x0($a1)
    ctx->pc = 0x1615f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1615f4: 0x0  nop
    ctx->pc = 0x1615f4u;
    // NOP
label_1615f8:
    // 0x1615f8: 0x90a80031  lbu         $t0, 0x31($a1)
    ctx->pc = 0x1615f8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 49)));
    // 0x1615fc: 0x31080004  andi        $t0, $t0, 0x4
    ctx->pc = 0x1615fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x161600: 0x11000011  beqz        $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x161600u;
    {
        const bool branch_taken_0x161600 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x161600) {
            ctx->pc = 0x161648u;
            goto label_161648;
        }
    }
    ctx->pc = 0x161608u;
    // 0x161608: 0x90a8008c  lbu         $t0, 0x8C($a1)
    ctx->pc = 0x161608u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x16160c: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x16160cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x161610: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x161610u;
    {
        const bool branch_taken_0x161610 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x161610) {
            ctx->pc = 0x161630u;
            goto label_161630;
        }
    }
    ctx->pc = 0x161618u;
    // 0x161618: 0x8ca80044  lw          $t0, 0x44($a1)
    ctx->pc = 0x161618u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x16161c: 0x84a9003e  lh          $t1, 0x3E($a1)
    ctx->pc = 0x16161cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x161620: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x161620u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x161624: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x161624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x161628: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x161628u;
    {
        const bool branch_taken_0x161628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161628u;
        // 0x16162c: 0xa4a80002  sh          $t0, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161628) {
            ctx->pc = 0x161648u;
            goto label_161648;
        }
    }
    ctx->pc = 0x161630u;
label_161630:
    // 0x161630: 0x8ca80044  lw          $t0, 0x44($a1)
    ctx->pc = 0x161630u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x161634: 0x84a9003e  lh          $t1, 0x3E($a1)
    ctx->pc = 0x161634u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x161638: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x161638u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x16163c: 0x1284023  subu        $t0, $t1, $t0
    ctx->pc = 0x16163cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x161640: 0xa4a80002  sh          $t0, 0x2($a1)
    ctx->pc = 0x161640u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x161644: 0x0  nop
    ctx->pc = 0x161644u;
    // NOP
label_161648:
    // 0x161648: 0x84a80000  lh          $t0, 0x0($a1)
    ctx->pc = 0x161648u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16164c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x16164cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x161650: 0xa4a8000e  sh          $t0, 0xE($a1)
    ctx->pc = 0x161650u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 8));
    // 0x161654: 0x84a80002  lh          $t0, 0x2($a1)
    ctx->pc = 0x161654u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x161658: 0xa4a80010  sh          $t0, 0x10($a1)
    ctx->pc = 0x161658u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 8));
    // 0x16165c: 0x8ce56dc0  lw          $a1, 0x6DC0($a3)
    ctx->pc = 0x16165cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28096)));
    // 0x161660: 0xc5282b  sltu        $a1, $a2, $a1
    ctx->pc = 0x161660u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x161664: 0x14a0ffcb  bnez        $a1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x161664u;
    {
        const bool branch_taken_0x161664 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x161668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161664u;
        // 0x161668: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161664) {
            ctx->pc = 0x161594u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161594;
        }
    }
    ctx->pc = 0x16166Cu;
    // 0x16166c: 0x0  nop
    ctx->pc = 0x16166cu;
    // NOP
label_161670:
    // 0x161670: 0x3e00008  jr          $ra
    ctx->pc = 0x161670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161678u;
    // 0x161678: 0x0  nop
    ctx->pc = 0x161678u;
    // NOP
    // 0x16167c: 0x0  nop
    ctx->pc = 0x16167cu;
    // NOP
    // 0x161680: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x161680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x161684: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x161684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x161688: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x161688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x16168c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16168cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x161690: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x161690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x161694: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x161694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x161698: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x161698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16169c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16169cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1616a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1616a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1616a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1616a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1616a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1616a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1616acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1616b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1616b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616b4: 0xc0c7d20  jal         func_31F480
    ctx->pc = 0x1616B4u;
    SET_GPR_U32(ctx, 31, 0x1616BCu);
    ctx->pc = 0x1616B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616B4u;
    // 0x1616b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F480u, 0x1616B4u, 0x1616BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1616BCu;
label_1616bc:
    // 0x1616bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1616bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1616c0: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1616c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x1616c4: 0x30640008  andi        $a0, $v1, 0x8
    ctx->pc = 0x1616c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1616c8: 0x3c0f009b  lui         $t7, 0x9B
    ctx->pc = 0x1616c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)155 << 16));
    // 0x1616cc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1616ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1616d0: 0x3c19009c  lui         $t9, 0x9C
    ctx->pc = 0x1616d0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)156 << 16));
    // 0x1616d4: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x1616d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x1616d8: 0x3c18009b  lui         $t8, 0x9B
    ctx->pc = 0x1616d8u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)155 << 16));
    // 0x1616dc: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1616dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x1616e0: 0x3c0b009b  lui         $t3, 0x9B
    ctx->pc = 0x1616e0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)155 << 16));
    // 0x1616e4: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x1616e4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x1616e8: 0x3c0c009b  lui         $t4, 0x9B
    ctx->pc = 0x1616e8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)155 << 16));
    // 0x1616ec: 0x3c13009c  lui         $s3, 0x9C
    ctx->pc = 0x1616ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)156 << 16));
    // 0x1616f0: 0x3c0e009c  lui         $t6, 0x9C
    ctx->pc = 0x1616f0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)156 << 16));
    // 0x1616f4: 0x3c09009b  lui         $t1, 0x9B
    ctx->pc = 0x1616f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)155 << 16));
    // 0x1616f8: 0x3c0a009b  lui         $t2, 0x9B
    ctx->pc = 0x1616f8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)155 << 16));
    // 0x1616fc: 0x3c07009b  lui         $a3, 0x9B
    ctx->pc = 0x1616fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)155 << 16));
    // 0x161700: 0x3c08009b  lui         $t0, 0x9B
    ctx->pc = 0x161700u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)155 << 16));
    // 0x161704: 0x3c1e0093  lui         $fp, 0x93
    ctx->pc = 0x161704u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)147 << 16));
    // 0x161708: 0x3c170093  lui         $s7, 0x93
    ctx->pc = 0x161708u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)147 << 16));
    // 0x16170c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x16170cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_161710:
    // 0x161710: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x161710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161714: 0x0  nop
    ctx->pc = 0x161714u;
    // NOP
label_161718:
    // 0x161718: 0x8ca30078  lw          $v1, 0x78($a1)
    ctx->pc = 0x161718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x16171c: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x16171Cu;
    {
        const bool branch_taken_0x16171c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16171c) {
            ctx->pc = 0x161850u;
            goto label_161850;
        }
    }
    ctx->pc = 0x161724u;
    // 0x161724: 0x14800036  bnez        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x161724u;
    {
        const bool branch_taken_0x161724 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x161728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161724u;
        // 0x161728: 0x8c630010  lw          $v1, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161724) {
            ctx->pc = 0x161800u;
            goto label_161800;
        }
    }
    ctx->pc = 0x16172Cu;
    // 0x16172c: 0x9074008c  lbu         $s4, 0x8C($v1)
    ctx->pc = 0x16172cu;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x161730: 0x32940020  andi        $s4, $s4, 0x20
    ctx->pc = 0x161730u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
    // 0x161734: 0x16800032  bnez        $s4, . + 4 + (0x32 << 2)
    ctx->pc = 0x161734u;
    {
        const bool branch_taken_0x161734 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x161734) {
            ctx->pc = 0x161800u;
            goto label_161800;
        }
    }
    ctx->pc = 0x16173Cu;
    // 0x16173c: 0x8674db1c  lh          $s4, -0x24E4($s3)
    ctx->pc = 0x16173cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294957852)));
    // 0x161740: 0x84760000  lh          $s6, 0x0($v1)
    ctx->pc = 0x161740u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161744: 0x296082a  slt         $at, $s4, $s6
    ctx->pc = 0x161744u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x161748: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x161748u;
    {
        const bool branch_taken_0x161748 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x161748) {
            ctx->pc = 0x161788u;
            goto label_161788;
        }
    }
    ctx->pc = 0x161750u;
    // 0x161750: 0x296a023  subu        $s4, $s4, $s6
    ctx->pc = 0x161750u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    // 0x161754: 0x36520001  ori         $s2, $s2, 0x1
    ctx->pc = 0x161754u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
    // 0x161758: 0xac740050  sw          $s4, 0x50($v1)
    ctx->pc = 0x161758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 20));
    // 0x16175c: 0x8734db1c  lh          $s4, -0x24E4($t9)
    ctx->pc = 0x16175cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 4294957852)));
    // 0x161760: 0xa4740000  sh          $s4, 0x0($v1)
    ctx->pc = 0x161760u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 20));
    // 0x161764: 0x8f144528  lw          $s4, 0x4528($t8)
    ctx->pc = 0x161764u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 17704)));
    // 0x161768: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x161768u;
    {
        const bool branch_taken_0x161768 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x16176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161768u;
        // 0x16176c: 0x325200ff  andi        $s2, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161768) {
            ctx->pc = 0x161778u;
            goto label_161778;
        }
    }
    ctx->pc = 0x161770u;
    // 0x161770: 0x8c7400dc  lw          $s4, 0xDC($v1)
    ctx->pc = 0x161770u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x161774: 0xadf44528  sw          $s4, 0x4528($t7)
    ctx->pc = 0x161774u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17704), GPR_U32(ctx, 20));
label_161778:
    // 0x161778: 0x16200021  bnez        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x161778u;
    {
        const bool branch_taken_0x161778 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x161778) {
            ctx->pc = 0x161800u;
            goto label_161800;
        }
    }
    ctx->pc = 0x161780u;
    // 0x161780: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x161780u;
    {
        const bool branch_taken_0x161780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161780u;
        // 0x161784: 0x8c7100dc  lw          $s1, 0xDC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161780) {
            ctx->pc = 0x161800u;
            goto label_161800;
        }
    }
    ctx->pc = 0x161788u;
label_161788:
    // 0x161788: 0x85d5db1e  lh          $s5, -0x24E2($t6)
    ctx->pc = 0x161788u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 4294957854)));
    // 0x16178c: 0x2d5a02a  slt         $s4, $s6, $s5
    ctx->pc = 0x16178cu;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x161790: 0x1680000f  bnez        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x161790u;
    {
        const bool branch_taken_0x161790 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x161790) {
            ctx->pc = 0x1617D0u;
            goto label_1617d0;
        }
    }
    ctx->pc = 0x161798u;
    // 0x161798: 0x2b6a023  subu        $s4, $s5, $s6
    ctx->pc = 0x161798u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x16179c: 0x36520002  ori         $s2, $s2, 0x2
    ctx->pc = 0x16179cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
    // 0x1617a0: 0xac740050  sw          $s4, 0x50($v1)
    ctx->pc = 0x1617a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 20));
    // 0x1617a4: 0x85b4db1e  lh          $s4, -0x24E2($t5)
    ctx->pc = 0x1617a4u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4294957854)));
    // 0x1617a8: 0xa4740000  sh          $s4, 0x0($v1)
    ctx->pc = 0x1617a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 20));
    // 0x1617ac: 0x8d94452c  lw          $s4, 0x452C($t4)
    ctx->pc = 0x1617acu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 17708)));
    // 0x1617b0: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1617B0u;
    {
        const bool branch_taken_0x1617b0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1617B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617B0u;
        // 0x1617b4: 0x325200ff  andi        $s2, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1617b0) {
            ctx->pc = 0x1617C0u;
            goto label_1617c0;
        }
    }
    ctx->pc = 0x1617B8u;
    // 0x1617b8: 0x8c7400dc  lw          $s4, 0xDC($v1)
    ctx->pc = 0x1617b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x1617bc: 0xad74452c  sw          $s4, 0x452C($t3)
    ctx->pc = 0x1617bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17708), GPR_U32(ctx, 20));
label_1617c0:
    // 0x1617c0: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1617C0u;
    {
        const bool branch_taken_0x1617c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1617c0) {
            ctx->pc = 0x161800u;
            goto label_161800;
        }
    }
    ctx->pc = 0x1617C8u;
    // 0x1617c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1617C8u;
    {
        const bool branch_taken_0x1617c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1617CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617C8u;
        // 0x1617cc: 0x8c7000dc  lw          $s0, 0xDC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1617c8) {
            ctx->pc = 0x161800u;
            goto label_161800;
        }
    }
    ctx->pc = 0x1617D0u;
label_1617d0:
    // 0x1617d0: 0x8d554528  lw          $s5, 0x4528($t2)
    ctx->pc = 0x1617d0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 17704)));
    // 0x1617d4: 0x8c7400dc  lw          $s4, 0xDC($v1)
    ctx->pc = 0x1617d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x1617d8: 0x16b40003  bne         $s5, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1617D8u;
    {
        const bool branch_taken_0x1617d8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        if (branch_taken_0x1617d8) {
            ctx->pc = 0x1617E8u;
            goto label_1617e8;
        }
    }
    ctx->pc = 0x1617E0u;
    // 0x1617e0: 0xad314528  sw          $s1, 0x4528($t1)
    ctx->pc = 0x1617e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 17704), GPR_U32(ctx, 17));
    // 0x1617e4: 0x0  nop
    ctx->pc = 0x1617e4u;
    // NOP
label_1617e8:
    // 0x1617e8: 0x8d15452c  lw          $s5, 0x452C($t0)
    ctx->pc = 0x1617e8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 17708)));
    // 0x1617ec: 0x8c7400dc  lw          $s4, 0xDC($v1)
    ctx->pc = 0x1617ecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x1617f0: 0x16b40003  bne         $s5, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1617F0u;
    {
        const bool branch_taken_0x1617f0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        if (branch_taken_0x1617f0) {
            ctx->pc = 0x161800u;
            goto label_161800;
        }
    }
    ctx->pc = 0x1617F8u;
    // 0x1617f8: 0xacf0452c  sw          $s0, 0x452C($a3)
    ctx->pc = 0x1617f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 17708), GPR_U32(ctx, 16));
    // 0x1617fc: 0x0  nop
    ctx->pc = 0x1617fcu;
    // NOP
label_161800:
    // 0x161800: 0x9074008c  lbu         $s4, 0x8C($v1)
    ctx->pc = 0x161800u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x161804: 0x32940010  andi        $s4, $s4, 0x10
    ctx->pc = 0x161804u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16);
    // 0x161808: 0x16800011  bnez        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x161808u;
    {
        const bool branch_taken_0x161808 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x161808) {
            ctx->pc = 0x161850u;
            goto label_161850;
        }
    }
    ctx->pc = 0x161810u;
    // 0x161810: 0x8c74001c  lw          $s4, 0x1C($v1)
    ctx->pc = 0x161810u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x161814: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x161814u;
    {
        const bool branch_taken_0x161814 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x161814) {
            ctx->pc = 0x161828u;
            goto label_161828;
        }
    }
    ctx->pc = 0x16181Cu;
    // 0x16181c: 0x8c740024  lw          $s4, 0x24($v1)
    ctx->pc = 0x16181cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x161820: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x161820u;
    {
        const bool branch_taken_0x161820 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x161820) {
            ctx->pc = 0x161850u;
            goto label_161850;
        }
    }
    ctx->pc = 0x161828u;
label_161828:
    // 0x161828: 0x86f6f11a  lh          $s6, -0xEE6($s7)
    ctx->pc = 0x161828u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 4294963482)));
    // 0x16182c: 0x84750002  lh          $s5, 0x2($v1)
    ctx->pc = 0x16182cu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x161830: 0x2b6a02a  slt         $s4, $s5, $s6
    ctx->pc = 0x161830u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x161834: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x161834u;
    {
        const bool branch_taken_0x161834 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x161834) {
            ctx->pc = 0x161850u;
            goto label_161850;
        }
    }
    ctx->pc = 0x16183Cu;
    // 0x16183c: 0x2d5a023  subu        $s4, $s6, $s5
    ctx->pc = 0x16183cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x161840: 0xac740054  sw          $s4, 0x54($v1)
    ctx->pc = 0x161840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 20));
    // 0x161844: 0x87d4f11a  lh          $s4, -0xEE6($fp)
    ctx->pc = 0x161844u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294963482)));
    // 0x161848: 0xa4740002  sh          $s4, 0x2($v1)
    ctx->pc = 0x161848u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 20));
    // 0x16184c: 0x0  nop
    ctx->pc = 0x16184cu;
    // NOP
label_161850:
    // 0x161850: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x161850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x161854: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x161854u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x161858: 0x1460ffaf  bnez        $v1, . + 4 + (-0x51 << 2)
    ctx->pc = 0x161858u;
    {
        const bool branch_taken_0x161858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161858u;
        // 0x16185c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161858) {
            ctx->pc = 0x161718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161718;
        }
    }
    ctx->pc = 0x161860u;
    // 0x161860: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x161860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x161864: 0x24630248  addiu       $v1, $v1, 0x248
    ctx->pc = 0x161864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 584));
    // 0x161868: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x161868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x16186c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x16186cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161870: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x161874: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x161874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x161878: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x161878u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16187c: 0x5460ffa4  bnel        $v1, $zero, . + 4 + (-0x5C << 2)
    ctx->pc = 0x16187Cu;
    {
        const bool branch_taken_0x16187c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16187c) {
            ctx->pc = 0x161880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16187Cu;
            // 0x161880: 0x8fa500a0  lw          $a1, 0xA0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161710;
        }
    }
    ctx->pc = 0x161884u;
    // 0x161884: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x161884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x161888: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x161888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x16188c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16188Cu;
    {
        const bool branch_taken_0x16188c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16188c) {
            ctx->pc = 0x161890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16188Cu;
            // 0x161890: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1618A0u;
            goto label_1618a0;
        }
    }
    ctx->pc = 0x161894u;
    // 0x161894: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x161894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x161898: 0xac604528  sw          $zero, 0x4528($v1)
    ctx->pc = 0x161898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17704), GPR_U32(ctx, 0));
    // 0x16189c: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x16189cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_1618a0:
    // 0x1618a0: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1618A0u;
    {
        const bool branch_taken_0x1618a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1618a0) {
            ctx->pc = 0x1618A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1618A0u;
            // 0x1618a4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1618B4u;
            goto label_1618b4;
        }
    }
    ctx->pc = 0x1618A8u;
    // 0x1618a8: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x1618a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x1618ac: 0xac60452c  sw          $zero, 0x452C($v1)
    ctx->pc = 0x1618acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17708), GPR_U32(ctx, 0));
    // 0x1618b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1618b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1618b4:
    // 0x1618b4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1618b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1618b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1618b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1618bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1618bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1618c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1618c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1618c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1618c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1618c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1618c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1618cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1618ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1618d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1618d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1618d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1618d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1618d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1618D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1618DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618D8u;
        // 0x1618dc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1618D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1618E0u;
    // 0x1618e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1618e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1618e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1618e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1618e8: 0xc0c7d20  jal         func_31F480
    ctx->pc = 0x1618E8u;
    SET_GPR_U32(ctx, 31, 0x1618F0u);
    ctx->pc = 0x31F480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F480u, 0x1618E8u, 0x1618F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1618F0u;
label_1618f0:
    // 0x1618f0: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x1618f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x1618f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1618f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1618f8: 0x2529db50  addiu       $t1, $t1, -0x24B0
    ctx->pc = 0x1618f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957904));
    // 0x1618fc: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x1618fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x161900: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x161900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_161904:
    // 0x161904: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x161904u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161908: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x161908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16190c: 0x0  nop
    ctx->pc = 0x16190cu;
    // NOP
label_161910:
    // 0x161910: 0x8d030078  lw          $v1, 0x78($t0)
    ctx->pc = 0x161910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 120)));
    // 0x161914: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x161914u;
    {
        const bool branch_taken_0x161914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161914) {
            ctx->pc = 0x161978u;
            goto label_161978;
        }
    }
    ctx->pc = 0x16191Cu;
    // 0x16191c: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x16191cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x161920: 0x8ce60490  lw          $a2, 0x490($a3)
    ctx->pc = 0x161920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1168)));
    // 0x161924: 0x30c32000  andi        $v1, $a2, 0x2000
    ctx->pc = 0x161924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
    // 0x161928: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x161928u;
    {
        const bool branch_taken_0x161928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161928) {
            ctx->pc = 0x161940u;
            goto label_161940;
        }
    }
    ctx->pc = 0x161930u;
    // 0x161930: 0x34c31000  ori         $v1, $a2, 0x1000
    ctx->pc = 0x161930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4096);
    // 0x161934: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x161934u;
    {
        const bool branch_taken_0x161934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161934u;
        // 0x161938: 0xace30490  sw          $v1, 0x490($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161934) {
            ctx->pc = 0x161948u;
            goto label_161948;
        }
    }
    ctx->pc = 0x16193Cu;
    // 0x16193c: 0x0  nop
    ctx->pc = 0x16193cu;
    // NOP
label_161940:
    // 0x161940: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x161940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x161944: 0xace30490  sw          $v1, 0x490($a3)
    ctx->pc = 0x161944u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1168), GPR_U32(ctx, 3));
label_161948:
    // 0x161948: 0x84e30002  lh          $v1, 0x2($a3)
    ctx->pc = 0x161948u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x16194c: 0x286102a0  slti        $at, $v1, 0x2A0
    ctx->pc = 0x16194cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
    // 0x161950: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x161950u;
    {
        const bool branch_taken_0x161950 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x161950) {
            ctx->pc = 0x161968u;
            goto label_161968;
        }
    }
    ctx->pc = 0x161958u;
    // 0x161958: 0x8ce30490  lw          $v1, 0x490($a3)
    ctx->pc = 0x161958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1168)));
    // 0x16195c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x16195cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x161960: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x161960u;
    {
        const bool branch_taken_0x161960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161960u;
        // 0x161964: 0xace30490  sw          $v1, 0x490($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161960) {
            ctx->pc = 0x161978u;
            goto label_161978;
        }
    }
    ctx->pc = 0x161968u;
label_161968:
    // 0x161968: 0x8ce30490  lw          $v1, 0x490($a3)
    ctx->pc = 0x161968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1168)));
    // 0x16196c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16196cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x161970: 0xace30490  sw          $v1, 0x490($a3)
    ctx->pc = 0x161970u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1168), GPR_U32(ctx, 3));
    // 0x161974: 0x0  nop
    ctx->pc = 0x161974u;
    // NOP
label_161978:
    // 0x161978: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x161978u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x16197c: 0x29430003  slti        $v1, $t2, 0x3
    ctx->pc = 0x16197cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x161980: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x161980u;
    {
        const bool branch_taken_0x161980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x161984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161980u;
        // 0x161984: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161980) {
            ctx->pc = 0x161910u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161910;
        }
    }
    ctx->pc = 0x161988u;
    // 0x161988: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x161988u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x16198c: 0x29630004  slti        $v1, $t3, 0x4
    ctx->pc = 0x16198cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x161990: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x161990u;
    {
        const bool branch_taken_0x161990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x161994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161990u;
        // 0x161994: 0x25290248  addiu       $t1, $t1, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161990) {
            ctx->pc = 0x161904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161904;
        }
    }
    ctx->pc = 0x161998u;
    // 0x161998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16199c: 0x3e00008  jr          $ra
    ctx->pc = 0x16199Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1619A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16199Cu;
        // 0x1619a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16199Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1619A4u;
    // 0x1619a4: 0x0  nop
    ctx->pc = 0x1619a4u;
    // NOP
    // 0x1619a8: 0x0  nop
    ctx->pc = 0x1619a8u;
    // NOP
    // 0x1619ac: 0x0  nop
    ctx->pc = 0x1619acu;
    // NOP
    if (ctx->pc == 0x1619acu) { ctx->pc = 0x1619b0u; }
}
