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

// Function: sub_00220150
// Address: 0x220150 - 0x220230
void sub_00220150_0x220150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220150_0x220150");
#endif

    switch (ctx->pc) {
        case 0x220208u: goto label_220208;
        default: break;
    }

    ctx->pc = 0x220150u;

    // 0x220150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x220150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x220154: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x220154u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220158: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x220158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x22015c: 0x3c0d0004  lui         $t5, 0x4
    ctx->pc = 0x22015cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4 << 16));
    // 0x220160: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x220160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x220164: 0x84680b  movn        $t5, $a0, $a0
    ctx->pc = 0x220164u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 4));
    // 0x220168: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x220168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22016c: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x22016cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    // 0x220170: 0x8eafca0c  lw          $t7, -0x35F4($s5)
    ctx->pc = 0x220170u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294953484)));
    // 0x220174: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x220174u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x220178: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x220178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22017c: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x22017cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x220180: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x220180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x220184: 0x1e9700a  movz        $t6, $t7, $t1
    ctx->pc = 0x220184u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 15));
    // 0x220188: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x220188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x22018c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x22018cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x220190: 0x8e50c9fc  lw          $s0, -0x3604($s2)
    ctx->pc = 0x220190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953468)));
    // 0x220194: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x220194u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x220198: 0x8e22c9f8  lw          $v0, -0x3608($s1)
    ctx->pc = 0x220198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953464)));
    // 0x22019c: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x22019cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x2201a0: 0x8e63ca00  lw          $v1, -0x3600($s3)
    ctx->pc = 0x2201a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953472)));
    // 0x2201a4: 0x206300a  movz        $a2, $s0, $a2
    ctx->pc = 0x2201a4u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
    // 0x2201a8: 0x8e8cca04  lw          $t4, -0x35FC($s4)
    ctx->pc = 0x2201a8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294953476)));
    // 0x2201ac: 0x45280a  movz        $a1, $v0, $a1
    ctx->pc = 0x2201acu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x2201b0: 0xadedc9f0  sw          $t5, -0x3610($t7)
    ctx->pc = 0x2201b0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294953456), GPR_U32(ctx, 13));
    // 0x2201b4: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2201b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201b8: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x2201b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201bc: 0xae25c9f8  sw          $a1, -0x3608($s1)
    ctx->pc = 0x2201bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953464), GPR_U32(ctx, 5));
    // 0x2201c0: 0x67500a  movz        $t2, $v1, $a3
    ctx->pc = 0x2201c0u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
    // 0x2201c4: 0xae46c9fc  sw          $a2, -0x3604($s2)
    ctx->pc = 0x2201c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294953468), GPR_U32(ctx, 6));
    // 0x2201c8: 0x188580a  movz        $t3, $t4, $t0
    ctx->pc = 0x2201c8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 12));
    // 0x2201cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2201ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2201d0: 0xae6aca00  sw          $t2, -0x3600($s3)
    ctx->pc = 0x2201d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294953472), GPR_U32(ctx, 10));
    // 0x2201d4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2201d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201d8: 0xae8bca04  sw          $t3, -0x35FC($s4)
    ctx->pc = 0x2201d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294953476), GPR_U32(ctx, 11));
    // 0x2201dc: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2201dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201e0: 0xaeaeca0c  sw          $t6, -0x35F4($s5)
    ctx->pc = 0x2201e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294953484), GPR_U32(ctx, 14));
    // 0x2201e4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2201e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2201e8: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x2201e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x2201ec: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2201ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2201f0: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x2201f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    // 0x2201f4: 0x24842328  addiu       $a0, $a0, 0x2328
    ctx->pc = 0x2201f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9000));
    // 0x2201f8: 0x24e72338  addiu       $a3, $a3, 0x2338
    ctx->pc = 0x2201f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9016));
    // 0x2201fc: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x2201fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x220200: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x220200u;
    SET_GPR_U32(ctx, 31, 0x220208u);
    ctx->pc = 0x220204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220200u;
    // 0x220204: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x220200u, 0x220208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220208u;
label_220208:
    // 0x220208: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x220208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22020c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22020cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220210: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x220210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220214: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x220214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220218: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x220218u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22021c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x22021cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220220: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x220220u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220224: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x220224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x220228: 0x3e00008  jr          $ra
    ctx->pc = 0x220228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220228u;
        // 0x22022c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220230u;
}
