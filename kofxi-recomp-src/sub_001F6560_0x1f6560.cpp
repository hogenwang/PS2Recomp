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

// Function: sub_001F6560
// Address: 0x1f6560 - 0x1f6778
void sub_001F6560_0x1f6560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6560_0x1f6560");
#endif

    switch (ctx->pc) {
        case 0x1f6650u: goto label_1f6650;
        case 0x1f6668u: goto label_1f6668;
        case 0x1f6680u: goto label_1f6680;
        case 0x1f6698u: goto label_1f6698;
        case 0x1f66b0u: goto label_1f66b0;
        case 0x1f66c8u: goto label_1f66c8;
        case 0x1f66d8u: goto label_1f66d8;
        case 0x1f66f8u: goto label_1f66f8;
        case 0x1f6700u: goto label_1f6700;
        case 0x1f6708u: goto label_1f6708;
        default: break;
    }

    ctx->pc = 0x1f6560u;

    // 0x1f6560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f6560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f6564: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f6564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f6568: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f6568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f656c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f656cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f6570: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f6570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6574: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f6574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f6578: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1f6578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1f657c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f657cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6580: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f6580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f6584: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f6584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f6588: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f6588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f658c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1f658cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1f6590: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1f6590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1f6594: 0x8c431780  lw          $v1, 0x1780($v0)
    ctx->pc = 0x1f6594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6016)));
    // 0x1f6598: 0x8e452018  lw          $a1, 0x2018($s2)
    ctx->pc = 0x1f6598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8216)));
    // 0x1f659c: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x1f659cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1f65a0: 0x24b11128  addiu       $s1, $a1, 0x1128
    ctx->pc = 0x1f65a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4392));
    // 0x1f65a4: 0x24b31150  addiu       $s3, $a1, 0x1150
    ctx->pc = 0x1f65a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4432));
    // 0x1f65a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F65A8u;
    {
        const bool branch_taken_0x1f65a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65A8u;
        // 0x1f65ac: 0x24be11f8  addiu       $fp, $a1, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f65a8) {
            ctx->pc = 0x1F65B8u;
            goto label_1f65b8;
        }
    }
    ctx->pc = 0x1F65B0u;
    // 0x1f65b0: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1F65B0u;
    {
        const bool branch_taken_0x1f65b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65B0u;
        // 0x1f65b4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f65b0) {
            ctx->pc = 0x1F6744u;
            goto label_1f6744;
        }
    }
    ctx->pc = 0x1F65B8u;
label_1f65b8:
    // 0x1f65b8: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1f65b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1f65bc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1f65bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f65c0: 0x8ca70028  lw          $a3, 0x28($a1)
    ctx->pc = 0x1f65c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1f65c4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1f65c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f65c8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1f65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f65cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f65ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f65d0: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x1f65d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1f65d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f65d8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1f65d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1f65dc: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1F65DCu;
    {
        const bool branch_taken_0x1f65dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F65E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65DCu;
        // 0x1f65e0: 0x24542800  addiu       $s4, $v0, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 10240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f65dc) {
            ctx->pc = 0x1F6608u;
            goto label_1f6608;
        }
    }
    ctx->pc = 0x1F65E4u;
    // 0x1f65e4: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1f65e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1f65e8: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x1f65e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1f65ec: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x1f65ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1f65f0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1f65f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1f65f4: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1f65f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1f65f8: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x1f65f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x1f65fc: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x1f65fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1f6600: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6600u;
    {
        const bool branch_taken_0x1f6600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6600u;
        // 0x1f6604: 0x641024  and         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6600) {
            ctx->pc = 0x1F6624u;
            goto label_1f6624;
        }
    }
    ctx->pc = 0x1F6608u;
label_1f6608:
    // 0x1f6608: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x1f6608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1f660c: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x1f660cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1f6610: 0x24e3003f  addiu       $v1, $a3, 0x3F
    ctx->pc = 0x1f6610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x1f6614: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x1f6614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1f6618: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1f6618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1f661c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1f661cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1f6620: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x1f6620u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
label_1f6624:
    // 0x1f6624: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x1f6624u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x1f6628: 0x8cb6002c  lw          $s6, 0x2C($a1)
    ctx->pc = 0x1f6628u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1f662c: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x1f662cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1f6630: 0x8cb00028  lw          $s0, 0x28($a1)
    ctx->pc = 0x1f6630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1f6634: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1f6634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1f6638: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x1f6638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x1f663c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1f663cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1f6640: 0x44a824  and         $s5, $v0, $a0
    ctx->pc = 0x1f6640u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1f6644: 0x26a3104f  addiu       $v1, $s5, 0x104F
    ctx->pc = 0x1f6644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4175));
    // 0x1f6648: 0xc07e368  jal         func_1F8DA0
    ctx->pc = 0x1F6648u;
    SET_GPR_U32(ctx, 31, 0x1F6650u);
    ctx->pc = 0x1F664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6648u;
    // 0x1f664c: 0x64b824  and         $s7, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8DA0u, 0x1F6648u, 0x1F6650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6650u;
label_1f6650:
    // 0x1f6650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f6650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6654: 0x1043001e  beq         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F6654u;
    {
        const bool branch_taken_0x1f6654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6654u;
        // 0x1f6658: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6654) {
            ctx->pc = 0x1F66D0u;
            goto label_1f66d0;
        }
    }
    ctx->pc = 0x1F665Cu;
    // 0x1f665c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f665cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6660: 0xc04265e  jal         func_109978
    ctx->pc = 0x1F6660u;
    SET_GPR_U32(ctx, 31, 0x1F6668u);
    ctx->pc = 0x1F6664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6660u;
    // 0x1f6664: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109978u, 0x1F6660u, 0x1F6668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6668u;
label_1f6668:
    // 0x1f6668: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x1f6668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x1f666c: 0x24c66788  addiu       $a2, $a2, 0x6788
    ctx->pc = 0x1f666cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26504));
    // 0x1f6670: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f6670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f6674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6678: 0xc0429e4  jal         func_10A790
    ctx->pc = 0x1F6678u;
    SET_GPR_U32(ctx, 31, 0x1F6680u);
    ctx->pc = 0x1F667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6678u;
    // 0x1f667c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A790u, 0x1F6678u, 0x1F6680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6680u;
label_1f6680:
    // 0x1f6680: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x1f6680u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x1f6684: 0x24c66890  addiu       $a2, $a2, 0x6890
    ctx->pc = 0x1f6684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26768));
    // 0x1f6688: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f6688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f668c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f668cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6690: 0xc0429e4  jal         func_10A790
    ctx->pc = 0x1F6690u;
    SET_GPR_U32(ctx, 31, 0x1F6698u);
    ctx->pc = 0x1F6694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6690u;
    // 0x1f6694: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A790u, 0x1F6690u, 0x1F6698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6698u;
label_1f6698:
    // 0x1f6698: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x1f6698u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x1f669c: 0x24c66938  addiu       $a2, $a2, 0x6938
    ctx->pc = 0x1f669cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26936));
    // 0x1f66a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f66a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f66a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f66a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f66a8: 0xc0429e4  jal         func_10A790
    ctx->pc = 0x1F66A8u;
    SET_GPR_U32(ctx, 31, 0x1F66B0u);
    ctx->pc = 0x1F66ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F66A8u;
    // 0x1f66ac: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A790u, 0x1F66A8u, 0x1F66B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F66B0u;
label_1f66b0:
    // 0x1f66b0: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x1f66b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x1f66b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f66b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f66b8: 0x24c66960  addiu       $a2, $a2, 0x6960
    ctx->pc = 0x1f66b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26976));
    // 0x1f66bc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f66bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f66c0: 0xc0429e4  jal         func_10A790
    ctx->pc = 0x1F66C0u;
    SET_GPR_U32(ctx, 31, 0x1F66C8u);
    ctx->pc = 0x1F66C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F66C0u;
    // 0x1f66c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A790u, 0x1F66C0u, 0x1F66C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F66C8u;
label_1f66c8:
    // 0x1f66c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F66C8u;
    {
        const bool branch_taken_0x1f66c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F66C8u;
        // 0x1f66cc: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f66c8) {
            ctx->pc = 0x1F66DCu;
            goto label_1f66dc;
        }
    }
    ctx->pc = 0x1F66D0u;
label_1f66d0:
    // 0x1f66d0: 0xc07da8e  jal         func_1F6A38
    ctx->pc = 0x1F66D0u;
    SET_GPR_U32(ctx, 31, 0x1F66D8u);
    ctx->pc = 0x1F66D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F66D0u;
    // 0x1f66d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6A38u, 0x1F66D0u, 0x1F66D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F66D8u;
label_1f66d8:
    // 0x1f66d8: 0x26300070  addiu       $s0, $s1, 0x70
    ctx->pc = 0x1f66d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1f66dc:
    // 0x1f66dc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f66dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f66e0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f66e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f66e4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1f66e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f66e8: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1f66e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f66ec: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x1f66ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1f66f0: 0xc07d696  jal         func_1F5A58
    ctx->pc = 0x1F66F0u;
    SET_GPR_U32(ctx, 31, 0x1F66F8u);
    ctx->pc = 0x1F66F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F66F0u;
    // 0x1f66f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5A58u, 0x1F66F0u, 0x1F66F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F66F8u;
label_1f66f8:
    // 0x1f66f8: 0xc07d774  jal         func_1F5DD0
    ctx->pc = 0x1F66F8u;
    SET_GPR_U32(ctx, 31, 0x1F6700u);
    ctx->pc = 0x1F66FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F66F8u;
    // 0x1f66fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5DD0u, 0x1F66F8u, 0x1F6700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6700u;
label_1f6700:
    // 0x1f6700: 0xc07d7f4  jal         func_1F5FD0
    ctx->pc = 0x1F6700u;
    SET_GPR_U32(ctx, 31, 0x1F6708u);
    ctx->pc = 0x1F6704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6700u;
    // 0x1f6704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5FD0u, 0x1F6700u, 0x1F6708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6708u;
label_1f6708:
    // 0x1f6708: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f6708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f670c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f670cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f6710: 0xa2200010  sb          $zero, 0x10($s1)
    ctx->pc = 0x1f6710u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6714: 0xa2200011  sb          $zero, 0x11($s1)
    ctx->pc = 0x1f6714u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6718: 0xa2200012  sb          $zero, 0x12($s1)
    ctx->pc = 0x1f6718u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f671c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1f671cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1f6720: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1f6720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1f6724: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x1f6724u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1f6728: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x1f6728u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x1f672c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1f672cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1f6730: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1f6730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1f6734: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1f6734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1f6738: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1f6738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1f673c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1f673cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1f6740: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1f6740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_1f6744:
    // 0x1f6744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f674c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f674cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6750: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f6750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f6754: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f6754u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6758: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f6758u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f675c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f675cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6760: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1f6760u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6764: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1f6764u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f6768: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1f6768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f676c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F676Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F676Cu;
        // 0x1f6770: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F676Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6774u;
    // 0x1f6774: 0x0  nop
    ctx->pc = 0x1f6774u;
    // NOP
    if (ctx->pc == 0x1f6774u) { ctx->pc = 0x1f6778u; }
}
