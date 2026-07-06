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

// Function: sub_002808B0
// Address: 0x2808b0 - 0x280ae8
void sub_002808B0_0x2808b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002808B0_0x2808b0");
#endif

    switch (ctx->pc) {
        case 0x28091cu: goto label_28091c;
        case 0x280950u: goto label_280950;
        case 0x280990u: goto label_280990;
        case 0x2809c4u: goto label_2809c4;
        case 0x2809d0u: goto label_2809d0;
        case 0x2809e4u: goto label_2809e4;
        case 0x280a00u: goto label_280a00;
        case 0x280a28u: goto label_280a28;
        case 0x280a30u: goto label_280a30;
        case 0x280a48u: goto label_280a48;
        case 0x280a78u: goto label_280a78;
        case 0x280a8cu: goto label_280a8c;
        case 0x280aa0u: goto label_280aa0;
        case 0x280aa8u: goto label_280aa8;
        default: break;
    }

    ctx->pc = 0x2808b0u;

    // 0x2808b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2808b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2808b4: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2808b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2808b8: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2808b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2808bc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2808bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2808c0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2808c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2808c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2808c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2808c8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2808c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2808cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2808ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2808d0: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2808d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x2808d4: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x2808d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x2808d8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2808d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2808dc: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2808dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2808e0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2808e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2808e4: 0x1e600003  bgtz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2808E4u;
    {
        const bool branch_taken_0x2808e4 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x2808E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808E4u;
        // 0x2808e8: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2808e4) {
            ctx->pc = 0x2808F4u;
            goto label_2808f4;
        }
    }
    ctx->pc = 0x2808ECu;
    // 0x2808ec: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2808ECu;
    {
        const bool branch_taken_0x2808ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2808F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808ECu;
        // 0x2808f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2808ec) {
            ctx->pc = 0x280AB8u;
            goto label_280ab8;
        }
    }
    ctx->pc = 0x2808F4u;
label_2808f4:
    // 0x2808f4: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2808F4u;
    {
        const bool branch_taken_0x2808f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2808f4) {
            ctx->pc = 0x2808F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2808F4u;
            // 0x2808f8: 0xa2a00000  sb          $zero, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28090Cu;
            goto label_28090c;
        }
    }
    ctx->pc = 0x2808FCu;
    // 0x2808fc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2808fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x280900: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280900u;
    {
        const bool branch_taken_0x280900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280900) {
            ctx->pc = 0x280914u;
            goto label_280914;
        }
    }
    ctx->pc = 0x280908u;
    // 0x280908: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x280908u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
label_28090c:
    // 0x28090c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x28090Cu;
    {
        const bool branch_taken_0x28090c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28090Cu;
        // 0x280910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28090c) {
            ctx->pc = 0x280AB8u;
            goto label_280ab8;
        }
    }
    ctx->pc = 0x280914u;
label_280914:
    // 0x280914: 0xc0a6a4e  jal         func_29A938
    ctx->pc = 0x280914u;
    SET_GPR_U32(ctx, 31, 0x28091Cu);
    ctx->pc = 0x280918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280914u;
    // 0x280918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A938u, 0x280914u, 0x28091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28091Cu;
label_28091c:
    // 0x28091c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28091cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280920: 0x16000053  bnez        $s0, . + 4 + (0x53 << 2)
    ctx->pc = 0x280920u;
    {
        const bool branch_taken_0x280920 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x280924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280920u;
        // 0x280924: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280920) {
            ctx->pc = 0x280A70u;
            goto label_280a70;
        }
    }
    ctx->pc = 0x280928u;
    // 0x280928: 0x8e36000c  lw          $s6, 0xC($s1)
    ctx->pc = 0x280928u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28092c: 0x8e370010  lw          $s7, 0x10($s1)
    ctx->pc = 0x28092cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x280930: 0x1ac00013  blez        $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x280930u;
    {
        const bool branch_taken_0x280930 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x280934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280930u;
        // 0x280934: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280930) {
            ctx->pc = 0x280980u;
            goto label_280980;
        }
    }
    ctx->pc = 0x280938u;
    // 0x280938: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x280938u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x28093c: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x28093cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x280940: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x280940u;
    {
        const bool branch_taken_0x280940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280940u;
        // 0x280944: 0x3051007f  andi        $s1, $v0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280940) {
            ctx->pc = 0x280980u;
            goto label_280980;
        }
    }
    ctx->pc = 0x280948u;
    // 0x280948: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x280948u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x28094c: 0x0  nop
    ctx->pc = 0x28094cu;
    // NOP
label_280950:
    // 0x280950: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x280950u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x280954: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x280954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x280958: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x280958u;
    {
        const bool branch_taken_0x280958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280958u;
        // 0x28095c: 0x1189f8  dsll        $s1, $s1, 7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280958) {
            ctx->pc = 0x280984u;
            goto label_280984;
        }
    }
    ctx->pc = 0x280960u;
    // 0x280960: 0x2f21021  addu        $v0, $s7, $s2
    ctx->pc = 0x280960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x280964: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x280964u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280968: 0x3064007f  andi        $a0, $v1, 0x7F
    ctx->pc = 0x280968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x28096c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x28096cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x280970: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x280970u;
    {
        const bool branch_taken_0x280970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280970u;
        // 0x280974: 0x2248825  or          $s1, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280970) {
            ctx->pc = 0x280950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280950;
        }
    }
    ctx->pc = 0x280978u;
    // 0x280978: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x280978u;
    {
        const bool branch_taken_0x280978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280978u;
        // 0x28097c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280978) {
            ctx->pc = 0x280988u;
            goto label_280988;
        }
    }
    ctx->pc = 0x280980u;
label_280980:
    // 0x280980: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x280980u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
label_280984:
    // 0x280984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_280988:
    // 0x280988: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x280988u;
    SET_GPR_U32(ctx, 31, 0x280990u);
    ctx->pc = 0x28098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280988u;
    // 0x28098c: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x280988u, 0x280990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280990u;
label_280990:
    // 0x280990: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x280990u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x280994: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x280994u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x280998: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x280998u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x28099c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x28099cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2809a0: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x2809a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2809a4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2809a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2809a8: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x2809a8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x2809ac: 0x2685a5c8  addiu       $a1, $s4, -0x5A38
    ctx->pc = 0x2809acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944200));
    // 0x2809b0: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2809b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2809b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2809b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2809b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809bc: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x2809BCu;
    SET_GPR_U32(ctx, 31, 0x2809C4u);
    ctx->pc = 0x2809C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2809BCu;
    // 0x2809c0: 0x222382f  dsubu       $a3, $s1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x2809BCu, 0x2809C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2809C4u;
label_2809c4:
    // 0x2809c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2809c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809c8: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2809C8u;
    SET_GPR_U32(ctx, 31, 0x2809D0u);
    ctx->pc = 0x2809CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2809C8u;
    // 0x2809cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2809C8u, 0x2809D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2809D0u;
label_2809d0:
    // 0x2809d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2809d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2809d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2809d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809dc: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2809DCu;
    SET_GPR_U32(ctx, 31, 0x2809E4u);
    ctx->pc = 0x2809E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2809DCu;
    // 0x2809e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2809DCu, 0x2809E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2809E4u;
label_2809e4:
    // 0x2809e4: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2809e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809e8: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x2809e8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2809ec: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x2809ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2809f0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2809F0u;
    {
        const bool branch_taken_0x2809f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2809F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2809F0u;
        // 0x2809f4: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2809f0) {
            ctx->pc = 0x280AACu;
            goto label_280aac;
        }
    }
    ctx->pc = 0x2809F8u;
    // 0x2809f8: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x2809f8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
    // 0x2809fc: 0x0  nop
    ctx->pc = 0x2809fcu;
    // NOP
label_280a00:
    // 0x280a00: 0x2f21021  addu        $v0, $s7, $s2
    ctx->pc = 0x280a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x280a04: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x280a04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280a08: 0x3064007f  andi        $a0, $v1, 0x7F
    ctx->pc = 0x280a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x280a0c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x280a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x280a10: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x280A10u;
    {
        const bool branch_taken_0x280a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A10u;
        // 0x280a14: 0x2248825  or          $s1, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a10) {
            ctx->pc = 0x280A58u;
            goto label_280a58;
        }
    }
    ctx->pc = 0x280A18u;
    // 0x280a18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x280a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x280a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a20: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x280A20u;
    SET_GPR_U32(ctx, 31, 0x280A28u);
    ctx->pc = 0x280A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A20u;
    // 0x280a24: 0x27c5a5d0  addiu       $a1, $fp, -0x5A30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294944208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x280A20u, 0x280A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A28u;
label_280a28:
    // 0x280a28: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x280A28u;
    SET_GPR_U32(ctx, 31, 0x280A30u);
    ctx->pc = 0x280A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A28u;
    // 0x280a2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x280A28u, 0x280A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A30u;
label_280a30:
    // 0x280a30: 0x1a600005  blez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x280A30u;
    {
        const bool branch_taken_0x280a30 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x280A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A30u;
        // 0x280a34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a30) {
            ctx->pc = 0x280A48u;
            goto label_280a48;
        }
    }
    ctx->pc = 0x280A38u;
    // 0x280a38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x280a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x280a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a40: 0xc04a966  jal         func_12A598
    ctx->pc = 0x280A40u;
    SET_GPR_U32(ctx, 31, 0x280A48u);
    ctx->pc = 0x280A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A40u;
    // 0x280a44: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x280A40u, 0x280A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A48u;
label_280a48:
    // 0x280a48: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x280a48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x280a4c: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x280a4cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x280a50: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x280a50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x280a54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x280a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280a58:
    // 0x280a58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x280a58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x280a5c: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x280a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x280a60: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x280A60u;
    {
        const bool branch_taken_0x280a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A60u;
        // 0x280a64: 0x1189f8  dsll        $s1, $s1, 7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a60) {
            ctx->pc = 0x280A00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280a00;
        }
    }
    ctx->pc = 0x280A68u;
    // 0x280a68: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x280A68u;
    {
        const bool branch_taken_0x280a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A68u;
        // 0x280a6c: 0x2751821  addu        $v1, $s3, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a68) {
            ctx->pc = 0x280AB0u;
            goto label_280ab0;
        }
    }
    ctx->pc = 0x280A70u;
label_280a70:
    // 0x280a70: 0xc0a6a1e  jal         func_29A878
    ctx->pc = 0x280A70u;
    SET_GPR_U32(ctx, 31, 0x280A78u);
    ctx->pc = 0x280A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A70u;
    // 0x280a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A878u, 0x280A70u, 0x280A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A78u;
label_280a78:
    // 0x280a78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x280a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a7c: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x280A7Cu;
    {
        const bool branch_taken_0x280a7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x280a7c) {
            ctx->pc = 0x280A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280A7Cu;
            // 0x280a80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280A94u;
            goto label_280a94;
        }
    }
    ctx->pc = 0x280A84u;
    // 0x280a84: 0xc0a69f0  jal         func_29A7C0
    ctx->pc = 0x280A84u;
    SET_GPR_U32(ctx, 31, 0x280A8Cu);
    ctx->pc = 0x280A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A84u;
    // 0x280a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A7C0u, 0x280A84u, 0x280A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A8Cu;
label_280a8c:
    // 0x280a8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x280a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x280a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_280a94:
    // 0x280a94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x280a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a98: 0xc04a966  jal         func_12A598
    ctx->pc = 0x280A98u;
    SET_GPR_U32(ctx, 31, 0x280AA0u);
    ctx->pc = 0x280A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A98u;
    // 0x280a9c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x280A98u, 0x280AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280AA0u;
label_280aa0:
    // 0x280aa0: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x280AA0u;
    SET_GPR_U32(ctx, 31, 0x280AA8u);
    ctx->pc = 0x280AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280AA0u;
    // 0x280aa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x280AA0u, 0x280AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280AA8u;
label_280aa8:
    // 0x280aa8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x280aa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280aac:
    // 0x280aac: 0x2751821  addu        $v1, $s3, $s5
    ctx->pc = 0x280aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_280ab0:
    // 0x280ab0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x280ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280ab4: 0xa060ffff  sb          $zero, -0x1($v1)
    ctx->pc = 0x280ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 0));
label_280ab8:
    // 0x280ab8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x280ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x280abc: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x280abcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x280ac0: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x280ac0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x280ac4: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x280ac4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x280ac8: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x280ac8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x280acc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x280accu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x280ad0: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x280ad0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x280ad4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x280ad4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x280ad8: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x280ad8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280adc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x280adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x280AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AE0u;
        // 0x280ae4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280AE8u;
}
